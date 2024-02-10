ffi.cdef[[
typedef struct {
	int Type;
	int ID;
	char _[0x18];  // Name
	char _[0x18];  // Description
	char _[0x18];  // GfxFileName
	int AchievementID;
	int CacheFlags;
	int AddMaxhearts;
	int AddHearts;
	int AddSoulHearts;
	int AddBlackHearts;
	int AddBombs;
	int AddKeys;
	int AddCoins;
	unsigned int MaxCharges;
	unsigned int MaxCooldown;
	short DevilPrice;
	short ShopPrice;
	ItemConfig_Costume Costume;
	unsigned int ChargeType;
	bool Special;
	bool PassiveCache;
	bool AddCostumeOnPickup;
	bool Hidden;
	bool PersistentEffect;
	bool ClearEffectsOnRemove;
	uint64_t Tags;
	unsigned int Quality;
	unsigned int CraftingQuality;
	int InitCharge;
} ItemConfig_Item;

bool L_ItemConfigItem_HasTags(ItemConfig_Item*, const uint64_t);
bool L_ItemConfigItem_IsAvailable(ItemConfig_Item*);

const char* L_ItemConfigItem_GetName(ItemConfig_Item*);
void L_ItemConfigItem_SetName(ItemConfig_Item*, const char*);
const char* L_ItemConfigItem_GetDescription(ItemConfig_Item*);
void L_ItemConfigItem_SetDescription(ItemConfig_Item*, const char*);
const char* L_ItemConfigItem_GetGfxFileName(ItemConfig_Item*);
void L_ItemConfigItem_SetGfxFileName(ItemConfig_Item*, const char*);
]]

local repentogon = ffidll
local lffi = ffi

local ItemConfigItemFuncs = {}

-- enums broke
function ItemConfigItemFuncs:IsCollectible()
	return self.Type == 1 or self.Type == 3 or self.Type == 4
	--return self.Type == ItemType.ITEM_PASSIVE or self.Type == ItemType.ITEM_ACTIVE or self.Type == ItemType.ITEM_FAMILIAR
end

function ItemConfigItemFuncs:IsNull()
	return self.Type == 0
	--return self.Type == ItemType.ITEM_NULL
end

function ItemConfigItemFuncs:IsTrinket()
	return self.Type == 2
	--return self.Type == ItemType.ITEM_TRINKET
end

-- Maybe update this to just do the bitwise operation luaside when possible.
function ItemConfigItemFuncs:HasTags(tags)
	ffichecks.checknumber(2, tags)
	return repentogon.L_ItemConfigItem_HasTags(self, tags)
end

function ItemConfigItemFuncs:IsAvailable()
	return repentogon.L_ItemConfigItem_IsAvailable(self)
end

local function GetStrFunc(func)
	return function(self)
		return lffi.string(lffi.gc(func(self), repentogon.L_Free))
	end
end

local getkeys = {
	Name = GetStrFunc(repentogon.L_ItemConfigItem_GetName),
	Description = GetStrFunc(repentogon.L_ItemConfigItem_GetDescription),
	GfxFileName = GetStrFunc(repentogon.L_ItemConfigItem_GetGfxFileName),
}

local function SetStrFunc(func)
	return function(self, str)
		ffichecks.checkstring(2, str)
		func(self, str)
	end
end

local setkeys = {
	Name = SetStrFunc(repentogon.L_ItemConfigItem_SetName),
	Description = SetStrFunc(repentogon.L_ItemConfigItem_SetDescription),
	GfxFileName = SetStrFunc(repentogon.L_ItemConfigItem_SetGfxFileName),
}

local ItemConfigItemMT = lffi.metatype("ItemConfig_Item", {
	__tostring = function(self)
		local itemType
		if self:IsCollectible() then
			itemType = "Collectible"
		elseif self:IsTrinket() then
			itemType = "Trinket"
		else
			itemType = "Null"
		end
		return "ItemConfigItem(" .. itemType .. " #" .. self.ID .. ": \"" .. self.Name .. "\")"
	end,
	__index = function(self, key)
		if getkeys[key] ~= nil then
			return getkeys[key](self)
		end
		return ItemConfigItemFuncs[key]
	end,
	__newindex = function(self, key, value)
		if setkeys[key] ~= nil then
			return setkeys[key](self, value)
		else
			error(string.format("no writable variable '%s'", key))
		end
	end,
})