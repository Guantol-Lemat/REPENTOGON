#include "IsaacRepentance.h"
#include "LuaCore.h"
#include "HookSystem.h"

LUA_FUNCTION(Lua_LootListConstructor) {
	LootList* loot = nullptr;
	loot = lua::place<LootList>(L, lua::metatables::LootListMT);

	return 1;
}

LUA_FUNCTION(Lua_LootListPushEntry) {
	LootList* lootList = lua::GetUserdata<LootList*>(L, 1, lua::metatables::LootListMT);
	const unsigned int type = (unsigned int)luaL_checkinteger(L, 2);
	const unsigned int variant = (unsigned int)luaL_checkinteger(L, 3);
	const unsigned int subType = (unsigned int)luaL_checkinteger(L, 4);
	const unsigned int seed = (unsigned int)luaL_optinteger(L, 5, Random());
	RNG* rng = nullptr;

	if (lua_type(L, 6) == LUA_TUSERDATA) {
		rng = lua::GetUserdata<RNG*>(L, 6, lua::Metatables::RNG, "RNG");
	}

	lootList->_lootentries.push_back({ type, variant, subType, seed, rng });

	return 0;
}

LUA_FUNCTION(Lua_PickupGetLootList) {
	Entity_Pickup* pickup = lua::GetUserdata<Entity_Pickup*>(L, 1, lua::Metatables::ENTITY_PICKUP, "EntityPickup");
	bool unk = lua::luaL_optboolean(L, 2, false);

	LootList loot = pickup->GetLootList(unk);
	LootList* toLua = (LootList*)lua_newuserdata(L, sizeof(LootList));

	luaL_setmetatable(L, lua::metatables::LootListMT);
	memcpy(toLua, &loot, sizeof(LootList));
	return 1;
}

LUA_FUNCTION(Lua_LootListGetEntries)
{
	LootList* lootList = lua::GetUserdata<LootList*>(L, 1, lua::metatables::LootListMT);
	std::deque<LootListEntry>& entries = lootList->_lootentries;

	
	lua_newtable(L);
	int idx = 1;
	for (LootListEntry& item : entries) {
		LootListEntry** ud = (LootListEntry**)lua_newuserdata(L, sizeof(LootListEntry*));
		*ud = &item;
		luaL_setmetatable(L, lua::metatables::LootListEntryMT);
		lua_rawseti(L, -2, idx);
		idx++;
	}

	return 1;
}

/*LUA_FUNCTION(Lua_LootList__gc) {
	LootList* lootlist = lua::GetUserdata<LootList*>(L, 1, lua::metatables::LootListMT);
	lootlist->~LootList();

	return 0;
}
*/

static void RegisterLootList(lua_State* L) {

	lua::RegisterFunction(L, lua::Metatables::ENTITY_PICKUP, "GetLootList", Lua_PickupGetLootList);

	luaL_Reg functions[] = {
		{ "GetEntries", Lua_LootListGetEntries },
		{ "PushEntry", Lua_LootListPushEntry },
		{ NULL, NULL }
	};
	lua::RegisterNewClass(L, lua::metatables::LootListMT, lua::metatables::LootListMT, functions);
	lua_register(L, lua::metatables::LootListMT, Lua_LootListConstructor);
}

HOOK_METHOD(LuaEngine, RegisterClasses, () -> void) {
	super();

	lua::LuaStackProtector protector(_state);
	RegisterLootList(_state);
}