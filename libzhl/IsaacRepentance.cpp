#include "IsaacRepentance.h"
#include "HookSystem_private.h"

namespace _func0
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Ambush::StartChallenge", typeid(void (Ambush::*)()), "558bec83e4f083ec18a1????????5657894c240c8b80908101008b40048b4044", argdata, 1, 5, &func);
}

__declspec(naked) void Ambush::StartChallenge()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func0::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func1
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ANM2::Render", typeid(void (ANM2::*)(Vector *, Vector *, Vector *)), "558bec83e4??515356578bf98b????85d274??", argdata, 4, 5, &func);
}

__declspec(naked) void ANM2::Render(Vector *position, Vector *topleftclamp, Vector *bottomrightclamp)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+16]		// bottomrightclamp
		push [ebp+12]		// topleftclamp
		push [ebp+8]		// position
		call _func1::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 12
	}
}

namespace _func2
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ANM2::SetLayerFrame", typeid(void (ANM2::*)(int , int )), "558bec83??????565774608b????8d??", argdata, 2, 4, &func);
}

__declspec(naked) void ANM2::SetLayerFrame(int param_1, int param_2)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// param_2
		push [ebp+8]		// param_1
		call _func2::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func3
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ANM2::ReplaceSpritesheet", typeid(void (ANM2::*)(int , std::string *)), "558bec8b4508568bf185c078", argdata, 3, 5, &func);
}

__declspec(naked) void ANM2::ReplaceSpritesheet(int LayerId, std::string *PngFilename)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// PngFilename
		push [ebp+8]		// LayerId
		call _func3::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func4
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("ANM2::LoadGraphics", typeid(void (ANM2::*)(bool )), "558bec6aff68????????64a1000000005083ec28535657a1????????33c5508d45f464a3000000008bf933", argdata, 2, 5, &func);
}

__declspec(naked) void ANM2::LoadGraphics(bool unk)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// unk
		call _func4::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func5
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BossPool::GetBossId", typeid(int (BossPool::*)(int , int , RNG *)), "558bec83e4f083ec48a1????????8b550c56578b7d088bf16aff8bcf", argdata, 4, 1, &func);
}

__declspec(naked) int BossPool::GetBossId(int leveltype, int levelvariant, RNG *rng)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+16]		// rng
		push [ebp+12]		// levelvariant
		push [ebp+8]		// leveltype
		call _func5::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 12
	}
}

namespace _func6
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Camera::constructor", typeid(void (Camera::*)(Room *)), "538bdc83ec0883e4f883c404558b6b04896c24048bec6aff68????????64a100000000505383ec285657a1????????33c5508d45f464a3000000008bf18975d46a3ce8????????", argdata, 2, 5, &func);
}

__declspec(naked) void Camera::constructor(Room *room)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// room
		call _func6::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func7
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Camera::SetFocusPosition", typeid(void (Camera::*)(const Vector &)), "558bec51568bf1578b7e088b4e043bf975??85ff", argdata, 2, 5, &func);
}

__declspec(naked) void Camera::SetFocusPosition(const Vector &pos)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// pos
		call _func7::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func8
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CompletionWidget::Init", typeid(void (CompletionWidget::*)(bool , char )), "558bec6a??68????????64a1????????5083ec??a1", argdata, 2, 4, &func);
}

__declspec(naked) void CompletionWidget::Init(bool ispause, char alt)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// alt
		push [ebp+8]		// ispause
		call _func8::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func9
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CompletionWidget::Render", typeid(void (CompletionWidget::*)(Vector *, Vector *)), "558bec518b????5356578b??8981????????8b42??8981????????80b9??????????743e8079????8d79348b75??8d59??", argdata, 3, 5, &func);
}

__declspec(naked) void CompletionWidget::Render(Vector *pos, Vector *scale)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// scale
		push [ebp+8]		// pos
		call _func9::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func10
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Console::PrintError", typeid(void (Console::*)(const IsaacString &)), "558bec6aff68????????64a1000000005083ec48a1????????33c58945ec535657508d45f464a3000000008bf1", argdata, 2, 5, &func);
}

__declspec(naked) void Console::PrintError(const IsaacString &err)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// err
		call _func10::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func11
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Console::RunCommand", typeid(void (Console::*)(const std::string &, const std::string &, Entity_Player *)), "558bec6aff68????????64a1000000005081ec04020000a1????????33c58945f0535657508d45f464a3000000008bd9", argdata, 4, 5, &func);
}

__declspec(naked) void Console::RunCommand(const std::string &in, const std::string &out, Entity_Player *player)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+16]		// player
		push [ebp+12]		// out
		push [ebp+8]		// in
		call _func11::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 12
	}
}

namespace _func12
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Entity::constructor", typeid(void (Entity::*)()), "558bec6aff68????????64a1000000005083ec085657a1????????33c5508d45f464a3000000008bf9897df0c707????????c7470800000000", argdata, 1, 5, &func);
}

__declspec(naked) void Entity::constructor()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func12::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func13
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity::Init", typeid(void (Entity::*)(unsigned int , unsigned int , unsigned int , unsigned int )), "558bec83ec308b4508f30f7e05????????568bf1578946288b450c", argdata, 5, 5, &func);
}

__declspec(naked) void Entity::Init(unsigned int type, unsigned int variant, unsigned int subtype, unsigned int initSeed)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+20]		// initSeed
		push [ebp+16]		// subtype
		push [ebp+12]		// variant
		push [ebp+8]		// type
		call _func13::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 16
	}
}

namespace _func14
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Entity::Update", typeid(void (Entity::*)()), "558bec83e4f081ecd8010000a1????????33c4", argdata, 1, 5, &func);
}

__declspec(naked) void Entity::Update()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func14::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func15
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x2ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity::TakeDamage", typeid(bool (Entity::*)(float , unsigned __int64 , EntityRef *, int )), "558bec83e4??83ec??5356578bf9837f28", argdata, 5, 1, &func);
}

__declspec(naked) bool Entity::TakeDamage(float Damage, unsigned __int64 DamageFlags, EntityRef *Source, int DamageCountdown)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+24]		// DamageCountdown
		push [ebp+20]		// Source
		push [ebp+16]		// DamageFlags
		push [ebp+12]		// DamageFlags
		push [ebp+8]		// Damage
		call _func15::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 20
	}
}

namespace _func16
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity::PlaySound", typeid(void (*)(int , float , int , bool , float )), "558bec518b45088d4d08", argdata, 5, 4, &func);
}

__declspec(naked) void Entity::PlaySound(int ID, float Volume, int FrameDelay, bool Loop, float Pitch)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+24]		// Pitch
		push [ebp+20]		// Loop
		push [ebp+16]		// FrameDelay
		push [ebp+12]		// Volume
		push [ebp+8]		// ID
		call _func16::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 20
	}
}

namespace _func17
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity::CopyStatusEffects", typeid(void (Entity::*)(Entity *)), "558bec83e4f8515356578bd9e8????????84c00f84????????", argdata, 2, 5, &func);
}

__declspec(naked) void Entity::CopyStatusEffects(Entity *target)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// target
		call _func17::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func18
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity::AddBleeding", typeid(void (Entity::*)(const EntityRef &, int )), "558bec83e4f8515356578b7d088bf157e8????????84c00f85????????57", argdata, 3, 5, &func);
}

__declspec(naked) void Entity::AddBleeding(const EntityRef &ref, int duration)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// duration
		push [ebp+8]		// ref
		call _func18::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func19
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity::AddShrink", typeid(void (Entity::*)(const EntityRef &, int )), "558bec83e4f883ec10568b750857568bf9e8????????84c00f85????????8b078bcf", argdata, 3, 5, &func);
}

__declspec(naked) void Entity::AddShrink(const EntityRef &ref, int duration)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// duration
		push [ebp+8]		// ref
		call _func19::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func20
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity::AddMagnetized", typeid(void (Entity::*)(const EntityRef &, int )), "558bec83e4f883ec38a1????????33c48944243456578b7d088bf157e8????????84c00f85????????57", argdata, 3, 5, &func);
}

__declspec(naked) void Entity::AddMagnetized(const EntityRef &ref, int duration)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// duration
		push [ebp+8]		// ref
		call _func20::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func21
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity::AddBaited", typeid(void (Entity::*)(const EntityRef &, int )), "558bec83e4f883ec30a1????????33c48944242c56578b7d088bf157e8????????84c00f85????????57ff750c8bcee8????????8bce8bd0e8????????", argdata, 3, 5, &func);
}

__declspec(naked) void Entity::AddBaited(const EntityRef &ref, int duration)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// duration
		push [ebp+8]		// ref
		call _func21::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func22
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity::AddBrimstoneMark", typeid(void (Entity::*)(const EntityRef &, int )), "558bec83ec30a1????????33c58945fc56578b7d088bf157e8????????84c00f85????????57ff750c8bcee8????????", argdata, 3, 5, &func);
}

__declspec(naked) void Entity::AddBrimstoneMark(const EntityRef &ref, int duration)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// duration
		push [ebp+8]		// ref
		call _func22::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func23
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity::AddWeakness", typeid(void (Entity::*)(const EntityRef &, int )), "558bec83ec30a1????????33c58945fc56578b7d088bf157e8????????84c00f85????????576afd8bcee8????????8bce", argdata, 3, 5, &func);
}

__declspec(naked) void Entity::AddWeakness(const EntityRef &ref, int duration)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// duration
		push [ebp+8]		// ref
		call _func23::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func24
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity::AddIce", typeid(void (Entity::*)(const EntityRef &, int )), "558bec5156ff75088bf1e8????????84c00f85????????8b068bce8b4048", argdata, 3, 5, &func);
}

__declspec(naked) void Entity::AddIce(const EntityRef &ref, int duration)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// duration
		push [ebp+8]		// ref
		call _func24::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func25
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity::AddKnockback", typeid(void (Entity::*)(const EntityRef &, const Vector &, int , bool )), "558bec83e4f85156ff75088bf1e8????????84c00f85????????", argdata, 5, 5, &func);
}

__declspec(naked) void Entity::AddKnockback(const EntityRef &ref, const Vector &unk1, int unk2, bool unk3)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+20]		// unk3
		push [ebp+16]		// unk2
		push [ebp+12]		// unk1
		push [ebp+8]		// ref
		call _func25::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 16
	}
}

namespace _func26
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity::GetNullOffset", typeid(Vector (Entity::*)(const char *)), "558bec83e4f883ec14568bf1837e70000f84????????", argdata, 3, 1, &func);
}

__declspec(naked) Vector Entity::GetNullOffset(const char *nullLayerName)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// nullLayerName
		push [ebp+8]		// implicit_output
		call _func26::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func27
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity::RenderShadowLayer", typeid(bool (Entity::*)(Vector *)), "558bec83e4c081ecb4000000f3", argdata, 2, 1, &func);
}

__declspec(naked) bool Entity::RenderShadowLayer(Vector *offset)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// offset
		call _func27::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func28
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Bomb::Render", typeid(void (Entity_Bomb::*)(Vector *)), "558bec83e4c081ec????????53568bf15780be??????????0f84????????80be??????????", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Bomb::Render(Vector *offset)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// offset
		call _func28::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func29
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Effect::Render", typeid(void (Entity_Effect::*)(Vector *)), "558bec81ec????????a1????????33c58945fc568b7508578bf9", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Effect::Render(Vector *offset)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// offset
		call _func29::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func30
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Entity_Familiar::GetFollowerPriority", typeid(int (Entity_Familiar::*)()), "8b412c483dea00000077??0fb680????????", argdata, 1, 1, &func);
}

__declspec(naked) int Entity_Familiar::GetFollowerPriority()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		call _func30::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func31
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Familiar::Render", typeid(void (Entity_Familiar::*)(Vector *)), "558bec83e4c083ec745356578bf9e8", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Familiar::Render(Vector *offset)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// offset
		call _func31::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func32
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Knife::Render", typeid(void (Entity_Knife::*)(Vector *)), "558bec83e4f881ec????????568bf15780be??????????", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Knife::Render(Vector *offset)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// offset
		call _func32::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func33
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("EntityList::RenderShadows", typeid(void (EntityList::*)(Vector *)), "558bec83ec78535657", argdata, 2, 5, &func);
}

__declspec(naked) void EntityList::RenderShadows(Vector *offset)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// offset
		call _func33::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func34
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_NPC::Morph", typeid(void (Entity_NPC::*)(int , int , int , int )), "558bec83e4??83ec30a1????????33c489??????8b????8b????568b??8b????578b????3b????75??3b????75??3b????75??85c078??3b??????????75??32", argdata, 4, 4, &func);
}

__declspec(naked) void Entity_NPC::Morph(int EntityType, int Variant, int SubType, int Championid)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+20]		// Championid
		push [ebp+16]		// SubType
		push [ebp+12]		// Variant
		push [ebp+8]		// EntityType
		call _func34::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 16
	}
}

namespace _func35
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_NPC::Render", typeid(void (Entity_NPC::*)(Vector *)), "558bec6aff68????????64a1000000005081ece8", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_NPC::Render(Vector *offset)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// offset
		call _func35::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func36
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Pickup::Morph", typeid(void (Entity_Pickup::*)(int , int , int , bool , bool , bool )), "558bec6aff68????????64??????????5083ec74535657a1????????33c5508d????64??????????8b??80??????754d", argdata, 6, 4, &func);
}

__declspec(naked) void Entity_Pickup::Morph(int EntityType, int Variant, int SubType, bool KeepPrice, bool KeepSeed, bool IgnoreModifiers)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+28]		// IgnoreModifiers
		push [ebp+24]		// KeepSeed
		push [ebp+20]		// KeepPrice
		push [ebp+16]		// SubType
		push [ebp+12]		// Variant
		push [ebp+8]		// EntityType
		call _func36::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 24
	}
}

namespace _func37
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Pickup::TriggerShopPurchase", typeid(void (Entity_Pickup::*)(Entity_Player *, int )), "558bec6aff68????????64a1000000005083ec54535657a1????????33c5508d45f464a300000000894dec8b7d0c85ff75??8bf98bbf80040000897d0c85ff0f84????????", argdata, 3, 5, &func);
}

__declspec(naked) void Entity_Pickup::TriggerShopPurchase(Entity_Player *player, int spentMoney)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// spentMoney
		push [ebp+8]		// player
		call _func37::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func38
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Pickup::Render", typeid(void (Entity_Pickup::*)(Vector *)), "558bec83e4c083ec3453568bf15780be??????????0f84????????80be??????????0f84????????83be??????????", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Pickup::Render(Vector *offset)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// offset
		call _func38::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func39
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Pickup::SetAlternatePedestal", typeid(void (Entity_Pickup::*)(int )), "558bec83e4f883ec145356578bf9837f2c640f85????????", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Pickup::SetAlternatePedestal(int pedestalType)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// pedestalType
		call _func39::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func40
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Entity_Pickup::TryRemoveCollectible", typeid(bool (Entity_Pickup::*)()), "568bf18b462c83f8640f85????????", argdata, 1, 1, &func);
}

__declspec(naked) bool Entity_Pickup::TryRemoveCollectible()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		call _func40::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func41
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Pickup::SetForceBlind", typeid(void (Entity_Pickup::*)(bool )), "558bec5183792c648a45088a917e04000088817e040000", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Pickup::SetForceBlind(bool setBlind)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// setBlind
		call _func41::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func42
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::AddCollectible", typeid(void (Entity_Player::*)(int , int , bool , int , int )), "558bec6a??68????????64a1????????5081ec????????a1????????33c58945f05657508d45f464a3????????8bf18975bc", argdata, 6, 5, &func);
}

__declspec(naked) void Entity_Player::AddCollectible(int type, int charge, bool firsttime, int slot, int vardata)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+24]		// vardata
		push [ebp+20]		// slot
		push [ebp+16]		// firsttime
		push [ebp+12]		// charge
		push [ebp+8]		// type
		call _func42::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 20
	}
}

namespace _func43
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::AddBombs", typeid(void (Entity_Player::*)(int )), "558bec83e4??8b550883ec??56", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Player::AddBombs(int amount)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// amount
		push ecx			// this
		call _func43::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func44
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::AddKeys", typeid(void (Entity_Player::*)(int )), "558bec83ec??8b45088d", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Player::AddKeys(int amount)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// amount
		push ecx			// this
		call _func44::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func45
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::AddJarFlies", typeid(void (Entity_Player::*)(int )), "558bec8b91????????b8", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Player::AddJarFlies(int amount)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// amount
		push ecx			// this
		call _func45::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func46
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Entity_Player::AddPrettyFly", typeid(void (Entity_Player::*)()), "568bf18b86????????ff", argdata, 1, 5, &func);
}

__declspec(naked) void Entity_Player::AddPrettyFly()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push ecx			// this
		call _func46::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func47
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::AddCoins", typeid(void (Entity_Player::*)(int )), "558bec83ec??5356578b7d088bd985", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Player::AddCoins(int amount)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// amount
		push ecx			// this
		call _func47::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func48
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x2ff, 0x1ff, 0x9ff};
	static FunctionDefinition funcObj("Entity_Player::GetMultiShotPositionVelocity", typeid(PosVel (*)(int , WeaponType , Vector , float , Weapon_MultiShotParams )), "558bec83e4??83ec??8b4d", argdata, 6, 2, &func);
}

__declspec(naked) PosVel Entity_Player::GetMultiShotPositionVelocity(int loopIndex, WeaponType weaponType, Vector shotDirection, float shotSpeed, Weapon_MultiShotParams multiShotParams)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+64]		// multiShotParams
		push [ebp+60]		// multiShotParams
		push [ebp+56]		// multiShotParams
		push [ebp+52]		// multiShotParams
		push [ebp+48]		// multiShotParams
		push [ebp+44]		// multiShotParams
		push [ebp+40]		// multiShotParams
		push [ebp+36]		// multiShotParams
		push [ebp+32]		// multiShotParams
		push [ebp+28]		// shotSpeed
		push [ebp+24]		// shotDirection
		push [ebp+20]		// shotDirection
		push [ebp+16]		// weaponType
		push [ebp+12]		// loopIndex
		push [ebp+8]		// implicit_output
		call _func48::func
		add esp, 60
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func49
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::GetMultiShotParams", typeid(Weapon_MultiShotParams (Entity_Player::*)(WeaponType )), "558bec83e4??83ec??8b450853568bf1", argdata, 3, 1, &func);
}

__declspec(naked) Weapon_MultiShotParams Entity_Player::GetMultiShotParams(WeaponType weaponType)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// weaponType
		push [ebp+8]		// implicit_output
		call _func49::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func50
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::InitTwin", typeid(Entity_Player *(Entity_Player::*)(int )), "558bec83e4f883ec0c53568bf18b0d????????57ff75088d8940ba0100e8????????", argdata, 2, 1, &func);
}

__declspec(naked) Entity_Player *Entity_Player::InitTwin(int playerType)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// playerType
		call _func50::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func51
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::Init", typeid(void (Entity_Player::*)(unsigned int , unsigned int , unsigned int , unsigned int )), "558bec6aff68????????64a1000000005081eca0010000a1????????33c58945f05657508d45f464a3000000008bf989bd74fffffff30f7e05????????", argdata, 5, 5, &func);
}

__declspec(naked) void Entity_Player::Init(unsigned int type, unsigned int variant, unsigned int subtype, unsigned int initSeed)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+20]		// initSeed
		push [ebp+16]		// subtype
		push [ebp+12]		// variant
		push [ebp+8]		// type
		call _func51::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 16
	}
}

namespace _func52
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Entity_Player::Update", typeid(void (Entity_Player::*)()), "558bec6aff68????????64a1000000005081ec8c010000a1????????33c58945f0", argdata, 1, 5, &func);
}

__declspec(naked) void Entity_Player::Update()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func52::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func53
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x2ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::TakeDamage", typeid(bool (Entity_Player::*)(float , unsigned __int64 , EntityRef *, int )), "558bec6aff68????????64a1????????5081ec????????a1????????33c58945f05657508d45f464a3????????8bf989bd????????83bf??????????", argdata, 5, 1, &func);
}

__declspec(naked) bool Entity_Player::TakeDamage(float Damage, unsigned __int64 DamageFlags, EntityRef *Source, int DamageCountdown)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+24]		// DamageCountdown
		push [ebp+20]		// Source
		push [ebp+16]		// DamageFlags
		push [ebp+12]		// DamageFlags
		push [ebp+8]		// Damage
		call _func53::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 20
	}
}

namespace _func54
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::ThrowHeldEntity", typeid(Entity *(Entity_Player::*)(Vector *)), "558bec83e4??81ec????????538bd1", argdata, 2, 1, &func);
}

__declspec(naked) Entity *Entity_Player::ThrowHeldEntity(Vector *Velocity)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// Velocity
		call _func54::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func55
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Entity_Player::InitPostLevelInitStats", typeid(void (Entity_Player::*)()), "558bec6aff68????????64a1000000005081ecd0000000a1????????33c58945f0", argdata, 1, 5, &func);
}

__declspec(naked) void Entity_Player::InitPostLevelInitStats()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func55::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func56
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::TriggerRoomExit", typeid(void (Entity_Player::*)(bool )), "558bec83e4f881ec3c0100005356578bf1e8????????", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Player::TriggerRoomExit(bool unk)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// unk
		call _func56::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func57
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::TriggerDeath", typeid(bool (Entity_Player::*)(bool )), "558bec83e4f883ec7ca1????????33c489442478538bd95657895c241c837b2c01753d807d08000f85????????e8????????a1????????538d88????????e8????????c683??????????32c05f5e5b8b4c247833cce8????????8be55dc20400", argdata, 2, 1, &func);
}

__declspec(naked) bool Entity_Player::TriggerDeath(bool checkOnly)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// checkOnly
		call _func57::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func58
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Entity_Player::Revive", typeid(void (Entity_Player::*)()), "558bec83e4f883ec08568bf15780", argdata, 1, 5, &func);
}

__declspec(naked) void Entity_Player::Revive()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func58::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func59
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::SetItemState", typeid(void (Entity_Player::*)(CollectibleType )), "558bec568bf1e8????????8b45088986341500005e", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Player::SetItemState(CollectibleType collectible)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// collectible
		call _func59::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func60
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::UseCard", typeid(void (Entity_Player::*)(int , unsigned int )), "558bec6aff68????????64a1000000005081ec38040000a1????????33c58945f056", argdata, 3, 5, &func);
}

__declspec(naked) void Entity_Player::UseCard(int cardType, unsigned int useFlag)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// useFlag
		push [ebp+8]		// cardType
		call _func60::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func61
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::UsePill", typeid(void (Entity_Player::*)(int , int , unsigned int )), "538bdc83ec0883e4f883c404558b6b04896c24048bec6aff68????????64a100000000505381ec78010000a1????????33c58945ec5657508d45f464a3000000008bf989bdacfeffff8b430c8b35????????8b4b08", argdata, 4, 5, &func);
}

__declspec(naked) void Entity_Player::UsePill(int ePillEffect, int ePillColor, unsigned int useFlag)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+16]		// useFlag
		push [ebp+12]		// ePillColor
		push [ebp+8]		// ePillEffect
		call _func61::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 12
	}
}

namespace _func62
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::Render", typeid(void (Entity_Player::*)(Vector *)), "558bec83e4c081ecb4000000a1????????33c4898424b0000000538bd9568b", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Player::Render(Vector *offset)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// offset
		call _func62::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func63
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Entity_Player::GetHealthType", typeid(int (Entity_Player::*)()), "8b810c13000083c0fc83f82477??0fb680????????", argdata, 1, 1, &func);
}

__declspec(naked) int Entity_Player::GetHealthType()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		call _func63::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func64
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::RenderHead", typeid(void (Entity_Player::*)(Vector *)), "558bec83e4f85153568bf15780????????????0f", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Player::RenderHead(Vector *position)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// position
		call _func64::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func65
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::RenderBody", typeid(void (Entity_Player::*)(Vector *)), "558bec83e4??83ec1453568b??5780??", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Player::RenderBody(Vector *position)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// position
		call _func65::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func66
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Entity_Player::TriggerRoomClear", typeid(void (Entity_Player::*)()), "558bec6aff68????????64a1000000005081ec88000000a1????????33c58945f05657508d45f464a3000000008bf9897d94688f000000", argdata, 1, 5, &func);
}

__declspec(naked) void Entity_Player::TriggerRoomClear()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func66::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func67
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::CanUseCollectible", typeid(bool (Entity_Player::*)(CollectibleType , int )), "558bec83e4f883ec0c538b5d0c56578bf985db78??53e8????????53", argdata, 3, 1, &func);
}

__declspec(naked) bool Entity_Player::CanUseCollectible(CollectibleType collectible, int slot)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// slot
		push [ebp+8]		// collectible
		call _func67::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func68
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::HasCollectible", typeid(bool (Entity_Player::*)(CollectibleType , bool )), "558bec83e4f883ec1c538b5d08", argdata, 3, 1, &func);
}

__declspec(naked) bool Entity_Player::HasCollectible(CollectibleType type, bool ignoreModifiers)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// ignoreModifiers
		push [ebp+8]		// type
		call _func68::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func69
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Entity_Player::GetCollectibleCount", typeid(int (Entity_Player::*)()), "8b91f01500", argdata, 1, 1, &func);
}

__declspec(naked) int Entity_Player::GetCollectibleCount()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		call _func69::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func70
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Entity_Player::EvaluateItems", typeid(void (Entity_Player::*)()), "558bec6aff68????????64a1000000005081ec7006", argdata, 1, 5, &func);
}

__declspec(naked) void Entity_Player::EvaluateItems()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func70::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func71
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::AddCacheFlags", typeid(void (Entity_Player::*)(int )), "558bec8b45080981b8", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Player::AddCacheFlags(int flags)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// flags
		call _func71::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func72
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::GetActiveItem", typeid(int (Entity_Player::*)(int )), "558bec8b55088d04d5000000002bc28b8481c41400005dc20400", argdata, 2, 1, &func);
}

__declspec(naked) int Entity_Player::GetActiveItem(int slot)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// slot
		call _func72::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func73
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::GetTotalActiveCharge", typeid(int (Entity_Player::*)(int )), "558bec8b55085356578d04d500000000", argdata, 2, 1, &func);
}

__declspec(naked) int Entity_Player::GetTotalActiveCharge(int slot)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// slot
		call _func73::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func74
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::GetActiveMaxCharge", typeid(int (Entity_Player::*)(int , int )), "558bec8b450c568b750881fe1e010000", argdata, 3, 1, &func);
}

__declspec(naked) int Entity_Player::GetActiveMaxCharge(int collectible, int vardata)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// vardata
		push [ebp+8]		// collectible
		call _func74::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func75
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::GetActiveMinUsableCharge", typeid(int (Entity_Player::*)(int )), "558bec518b550883fa0374??83fa0275??81b9fc1400004402000075??a1????????83b89c311c002c74??8d04d5000000002bc28d14818b82c41400003d63020000", argdata, 2, 1, &func);
}

__declspec(naked) int Entity_Player::GetActiveMinUsableCharge(int slot)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// slot
		call _func75::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func76
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::SetActiveVarData", typeid(void (Entity_Player::*)(int , int )), "558bec8b450c8d14c5000000002bd08b4508898491dc1400005dc20800", argdata, 3, 5, &func);
}

__declspec(naked) void Entity_Player::SetActiveVarData(int vardata, int slot)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// slot
		push [ebp+8]		// vardata
		call _func76::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func77
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::AddActiveCharge", typeid(int (Entity_Player::*)(unsigned int , int , bool , bool , bool )), "558bec83e4f883ec1c538b5d0c56578bf985db79??", argdata, 6, 1, &func);
}

__declspec(naked) int Entity_Player::AddActiveCharge(unsigned int charge, int slot, bool unk, bool overcharge, bool force)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+24]		// force
		push [ebp+20]		// overcharge
		push [ebp+16]		// unk
		push [ebp+12]		// slot
		push [ebp+8]		// charge
		call _func77::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 20
	}
}

namespace _func78
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::DropCollectible", typeid(int (Entity_Player::*)(int , int , bool )), "558bec83e4f883ec14538b5d??b841020000", argdata, 4, 1, &func);
}

__declspec(naked) int Entity_Player::DropCollectible(int collectible, int param2, bool param3)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+16]		// param3
		push [ebp+12]		// param2
		push [ebp+8]		// collectible
		call _func78::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 12
	}
}

namespace _func79
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Projectile::Render", typeid(void (Entity_Projectile::*)(Vector *)), "558bec83ec2ca1????????5356f30f7e05????????", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Projectile::Render(Vector *offset)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// offset
		call _func79::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func80
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Slot::Render", typeid(void (Entity_Slot::*)(Vector *)), "558bec56ff75088bf1e8????????8b462c", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Slot::Render(Vector *offset)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// offset
		call _func80::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func81
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Entity_Tear::Render", typeid(void (Entity_Tear::*)(Vector *)), "558bec83e4c083ec3453568bf15780be??????????0f84????????80be??????????0f84????????f30f108e????????83ec08f30f588e????????f30f1005????????f30f5c05????????f30f101d????????f30f591d????????f30f5c0d????????f30f5905????????f30f115c24??f30f590d????????f30f58c8f30f59cbf30f580d????????f30f114c24??d9442440", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Tear::Render(Vector *offset)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// offset
		call _func81::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func82
{
	static void *func = 0;
	static short argdata[] = {0x100};
	static FunctionDefinition funcObj("Game::constructor", typeid(void (Game::*)()), "538bdc83ec0883e4f883c404558b6b04896c24048bec6aff68????????64a100000000505383ec105657a1????????33c5508d45f464a3000000008bf9897dec897de468????????", argdata, 1, 5, &func);
}

__declspec(naked) void Game::constructor()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		mov eax, ecx	// this
		call _func82::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func83
{
	static void *func = 0;
	static short argdata[] = {0x100};
	static FunctionDefinition funcObj("Game::IsPaused", typeid(bool (Game::*)()), "83b9??????????8b15", argdata, 1, 1, &func);
}

__declspec(naked) bool Game::IsPaused()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		mov eax, ecx	// this
		call _func83::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func84
{
	static void *func = 0;
	static short argdata[] = {0x100};
	static FunctionDefinition funcObj("Game::IsHardMode", typeid(bool (Game::*)()), "a1????????8b80????????83f80174??83f80374??32c0", argdata, 1, 1, &func);
}

__declspec(naked) bool Game::IsHardMode()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		mov eax, ecx	// this
		call _func84::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func85
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Game::Spawn", typeid(Entity *(Game::*)(unsigned int , unsigned int , const Vector &, const Vector &, Entity *, unsigned int , unsigned int , unsigned int )), "558bec83e4f883ec6c8b450853568b751857894424148bf98d4520897c2410508d451c508b451456508b4510508d450c508d44242c50e8????????", argdata, 9, 1, &func);
}

__declspec(naked) Entity *Game::Spawn(unsigned int type, unsigned int variant, const Vector &position, const Vector &velocity, Entity *spawner, unsigned int subtype, unsigned int seed, unsigned int unk)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+36]		// unk
		push [ebp+32]		// seed
		push [ebp+28]		// subtype
		push [ebp+24]		// spawner
		push [ebp+20]		// velocity
		push [ebp+16]		// position
		push [ebp+12]		// variant
		push [ebp+8]		// type
		call _func85::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 32
	}
}

namespace _func86
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Game::ShakeScreen", typeid(void (Game::*)(int )), "558beca1????????538b", argdata, 2, 5, &func);
}

__declspec(naked) void Game::ShakeScreen(int timeout)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// timeout
		call _func86::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func87
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Game::MakeShockwave", typeid(void (Game::*)(const Vector &, float , float , int )), "558bec83ec088b45085657f30f1000f30f104804a1????????", argdata, 5, 5, &func);
}

__declspec(naked) void Game::MakeShockwave(const Vector &pos, float amplitude, float speed, int duration)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+20]		// duration
		push [ebp+16]		// speed
		push [ebp+12]		// amplitude
		push [ebp+8]		// pos
		call _func87::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 16
	}
}

namespace _func88
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Game::GetPlayer", typeid(Entity_Player *(Game::*)(unsigned int )), "558bec5156578bf98b97????????8b", argdata, 2, 1, &func);
}

__declspec(naked) Entity_Player *Game::GetPlayer(unsigned int Index)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// Index
		call _func88::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func89
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Game::Update", typeid(void (Game::*)()), "558bec83e4f083ec38a1????????33c4", argdata, 1, 5, &func);
}

__declspec(naked) void Game::Update()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func89::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func90
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Game::AchievementUnlocksDisallowed", typeid(bool (Game::*)()), "568bf180be04bb0100008d8e04bb010075??e8????????84c0", argdata, 1, 1, &func);
}

__declspec(naked) bool Game::AchievementUnlocksDisallowed()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		call _func90::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func91
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Game::PlaceRoom", typeid(bool (Game::*)(LevelGenerator_Room *, RoomConfig *, unsigned int , int )), "558bec83ec??53568b750c578bf9", argdata, 5, 1, &func);
}

__declspec(naked) bool Game::PlaceRoom(LevelGenerator_Room *room, RoomConfig *data, unsigned int Seed, int dimension)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+20]		// dimension
		push [ebp+16]		// Seed
		push [ebp+12]		// data
		push [ebp+8]		// room
		call _func91::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 16
	}
}

namespace _func92
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Game::UpdateVisibility", typeid(void (Game::*)()), "558bec83e4??515356578bf96a", argdata, 1, 5, &func);
}

__declspec(naked) void Game::UpdateVisibility()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func92::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func93
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Game::GetRoomDescriptorsOffsetsArrayForDimension", typeid(uint32_t *(Game::*)(uint32_t )), "558bec8b450885c0790a", argdata, 2, 1, &func);
}

__declspec(naked) uint32_t *Game::GetRoomDescriptorsOffsetsArrayForDimension(uint32_t dimension)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// dimension
		call _func93::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func94
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Game::GetRoomByIdx", typeid(RoomDescriptor *(Game::*)(uint32_t , int32_t )), "558bec6aff68????????64a1????????505657a1????????33c5508d45f464a3????????8bf164a1????????8b10a1????????3b82????????", argdata, 3, 1, &func);
}

__declspec(naked) RoomDescriptor *Game::GetRoomByIdx(uint32_t idx, int32_t dimension)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// dimension
		push [ebp+8]		// idx
		call _func94::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func95
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Game::GetPlanetariumChance", typeid(double (Game::*)()), "558bec83ec1cf30f1005", argdata, 1, 9, &func);
}

__declspec(naked) double Game::GetPlanetariumChance()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push ecx
		push ebx
		push esi
		push edi
		call _func95::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		mov esp, ebp
		pop ebp
		ret
	}
}

Game **__ptr_g_Game;

namespace _var96
{
	static VariableDefinition varObj("g_Game", ".e8????????c745fcffffffffa3(????????)e8", &__ptr_g_Game);
}

namespace _func97
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Game::StartStageTransition", typeid(void (Game::*)(bool , int , Entity_Player *)), "558bec83????568bf18b??????????578b??8b96????????8b????3b86????????7e??83b9??????????76??3b??????", argdata, 3, 4, &func);
}

__declspec(naked) void Game::StartStageTransition(bool SameStage, int param_2, Entity_Player *param_3)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+16]		// param_3
		push [ebp+12]		// param_2
		push [ebp+8]		// SameStage
		call _func97::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 12
	}
}

namespace _func98
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CreateGridEntity", typeid(GridEntity *(*)(GridEntityType , unsigned int )), "558bec6aff68????????64a1000000005051535657a1????????33c5508d45f464a3000000008bda8bf983ff1b0f87????????", argdata, 2, 0, &func);
}

__declspec(naked) GridEntity *__stdcall CreateGridEntity(GridEntityType type, unsigned int seed)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// seed
		push [ebp+8]		// type
		call _func98::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func99
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("GridEntity::Init", typeid(void (GridEntity::*)(unsigned int )), "558bec8b4508568bf1894614", argdata, 2, 5, &func);
}

__declspec(naked) void GridEntity::Init(unsigned int Seed)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// Seed
		call _func99::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func100
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("GridEntity_Rock::Update", typeid(void (GridEntity_Rock::*)()), "558bec6aff68????????64a1000000005081ec88000000a1????????33c58945f05657508d45f464a3000000008bf9897da48b57048b0d????????83fa0474??", argdata, 1, 5, &func);
}

__declspec(naked) void GridEntity_Rock::Update()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func100::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func101
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("GridEntity_Rock::Destroy", typeid(bool (GridEntity_Rock::*)(bool )), "558bec83ec40a1????????33c58945fc538b1d????????56", argdata, 2, 1, &func);
}

__declspec(naked) bool GridEntity_Rock::Destroy(bool Immediate)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// Immediate
		call _func101::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func102
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("HUD::Render", typeid(void (HUD::*)()), "538bdc83ec0883e4f883c404558b6b04896c24048bec6aff68????????64a100000000505381ece8010000a1????????33c58945ec5657508d45f464a3000000008bf989bd38ffffff80bfb63e0c0000", argdata, 1, 5, &func);
}

__declspec(naked) void HUD::Render()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func102::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func103
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("HUD::Update", typeid(void (HUD::*)()), "558bec515356578bf980bfbc3e0c000074??ff8fc03e0c00", argdata, 1, 5, &func);
}

__declspec(naked) void HUD::Update()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func103::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func104
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("HUD::PostUpdate", typeid(void (HUD::*)()), "558bec83e4f85153568bd9578bf3bf08000000833e0074??8bcee8????????81c6b0060000", argdata, 1, 5, &func);
}

__declspec(naked) void HUD::PostUpdate()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func104::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func105
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("HUD::LoadGraphics", typeid(void (HUD::*)()), "538bdc83ec0883e4f883c404558b6b04896c24048bec6aff68????????64a100000000505381ec88000000a1????????33c58945ec5657508d45f464a3000000008bf180beb73e0c0000", argdata, 1, 5, &func);
}

__declspec(naked) void HUD::LoadGraphics()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func105::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func106
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x102};
	static FunctionDefinition funcObj("Isaac::CreateGridEntity", typeid(GridEntity *(*)(int , unsigned int )), "558bec6aff68????????64a1000000005051535657a1????????33c5508d45f464a3000000008bda", argdata, 2, 0, &func);
}

__declspec(naked) GridEntity *Isaac::CreateGridEntity(int Type, unsigned int Index)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		mov ecx, [ebp+8]	// Type
		mov edx, [ebp+12]	// Index
		call _func106::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func107
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Level::SetStage", typeid(void (Level::*)(int , int )), "558bec568b35????????578b??8b??85d27e??83fa067f??8b??????????33c0", argdata, 2, 4, &func);
}

__declspec(naked) void Level::SetStage(int stageid, int alt)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// alt
		push [ebp+8]		// stageid
		call _func107::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func108
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("Level::Init", typeid(void (Level::*)()), "538bdc83ec0883e4f883c404558b????89??????????6aff68????????64??????????505383ec70a1????????33c589????5657508d????64??????????8b??89????8b??????????6a016a00", argdata, 0, 4, &func);
}

__declspec(naked) void Level::Init()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func108::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func109
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Level::ChangeRoom", typeid(void (Level::*)(int , int )), "558bec6aff68????????64a1000000005083ec2c535657a1????????33c5508d45f464a3000000008bd98b8b90810100c745e800000000e8????????", argdata, 3, 5, &func);
}

__declspec(naked) void Level::ChangeRoom(int targetRoomIDX, int dimension)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// dimension
		push [ebp+8]		// targetRoomIDX
		call _func109::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func110
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("LevelGenerator::PlaceRoom", typeid(int (LevelGenerator::*)(LevelGenerator_Room *)), "558bec83e4??83ec??538b5d08b8????????56", argdata, 2, 1, &func);
}

__declspec(naked) int LevelGenerator::PlaceRoom(LevelGenerator_Room *room)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// room
		call _func110::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func111
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("LevelGenerator::CreateRoom", typeid(LevelGenerator_Room *(LevelGenerator::*)(int , int , int , int , int , Direction )), "558BEC6AFF68????????64A1????????5083EC50A1????????33C58945F05657508D45F464A3????????8BF98B4510508B450883EC088BCC89018B450C8941048D4DA8E8????????508BCFC745??????????", argdata, 7, 1, &func);
}

__declspec(naked) LevelGenerator_Room *LevelGenerator::CreateRoom(int x, int y, int shape, int connectX, int connectY, Direction connectDir)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+28]		// connectDir
		push [ebp+24]		// connectY
		push [ebp+20]		// connectX
		push [ebp+16]		// shape
		push [ebp+12]		// y
		push [ebp+8]		// x
		call _func111::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 24
	}
}

namespace _func112
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("LevelGenerator::Generate", typeid(void (LevelGenerator::*)(int , bool , bool , bool , const unsigned int &, int , LevelGenerator_Room *)), "558bec83ec??8a45", argdata, 8, 5, &func);
}

__declspec(naked) void LevelGenerator::Generate(int unk, bool unk2, bool unk3, bool unk4, const unsigned int &allowedShapes, int unk5, LevelGenerator_Room *startRoom)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+32]		// startRoom
		push [ebp+28]		// unk5
		push [ebp+24]		// allowedShapes
		push [ebp+20]		// unk4
		push [ebp+16]		// unk3
		push [ebp+12]		// unk2
		push [ebp+8]		// unk
		call _func112::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 28
	}
}

namespace _func113
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("LevelGenerator::GetNewEndRoom", typeid(LevelGenerator_Room *(LevelGenerator::*)(int , const unsigned int &)), "558bec83e4??515356578bf98bb7", argdata, 3, 1, &func);
}

__declspec(naked) LevelGenerator_Room *LevelGenerator::GetNewEndRoom(int roomShape, const unsigned int &possibleDoors)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// possibleDoors
		push [ebp+8]		// roomShape
		call _func113::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func114
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("LuaEngine::Init", typeid(void (LuaEngine::*)(bool )), "558bec83e4??83ec??56578bf9????????ff", argdata, 2, 5, &func);
}

__declspec(naked) void LuaEngine::Init(bool Debug)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// Debug
		call _func114::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func115
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("LuaEngine::RegisterClasses", typeid(void (LuaEngine::*)()), "558bec6aff68????????64a1000000005081ec3c01000053", argdata, 1, 5, &func);
}

__declspec(naked) void LuaEngine::RegisterClasses()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func115::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func116
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("LuaEngine::RunBundledScript", typeid(bool (LuaEngine::*)(const char *)), "558bec53565768????????8b", argdata, 2, 1, &func);
}

__declspec(naked) bool LuaEngine::RunBundledScript(const char *path)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// path
		call _func116::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

LuaEngine **__ptr_g_LuaEngine;

namespace _var117
{
	static VariableDefinition varObj("g_LuaEngine", "8b0d(????????)c745dc01000000", &__ptr_g_LuaEngine);
}

namespace _func118
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("Manager::Update", typeid(void (Manager::*)()), "558bec83e4??83ec??56578b3d", argdata, 0, 4, &func);
}

__declspec(naked) void Manager::Update()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func118::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

Manager **__ptr_g_Manager;

namespace _var119
{
	static VariableDefinition varObj("g_Manager", ".e8????????83c414898544feffff8bc8c745fc05000000e8????????c745fcffffffffa3(????????)e8????????e8????????", &__ptr_g_Manager);
}

namespace _func120
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("Menu_Character::Update", typeid(void (Menu_Character::*)()), "558bec83ec??a1????????33c58945fca1????????535657", argdata, 0, 4, &func);
}

__declspec(naked) void Menu_Character::Update()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func120::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func121
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("Menu_Character::Render", typeid(void (Menu_Character::*)()), "538bdc83ec0883e4??83c404558b????89??????8bec6aff68????????64a1????????505381??????????a1????????33c589????5657508d????64??????????8bf989??????????80????????????0f57d2", argdata, 0, 4, &func);
}

__declspec(naked) void Menu_Character::Render()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func121::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func122
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Menu_Character::Init", typeid(void (Menu_Character::*)(Vector *)), "538bdc83ec0883e4f883c404558b????89??????8bec6aff684d??????64a1????????505383ec48a1b4??????33c589????5657508d????64a3????????8bf189", argdata, 1, 4, &func);
}

__declspec(naked) void Menu_Character::Init(Vector *unk)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// unk
		call _func122::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func123
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("MenuManager::constructor", typeid(void (MenuManager::*)()), "538bdc83ec0883e4f083c404558b6b04896c24048bec6aff68????????64a100000000505383ec28", argdata, 1, 5, &func);
}

__declspec(naked) void MenuManager::constructor()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func123::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

MenuManager **__ptr_g_MenuManager;

namespace _var124
{
	static VariableDefinition varObj("g_MenuManager", "c745fcffffffff8bc8a3(????????)e8????????", &__ptr_g_MenuManager);
}

namespace _func125
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Minimap::Render", typeid(void (Minimap::*)()), "558bec83????81ec18010000a1????????33c489????????????56578b??????????89", argdata, 1, 5, &func);
}

__declspec(naked) void Minimap::Render()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func125::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func126
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ModManager::RenderCustomCharacterMenu", typeid(void (*)(int , Vector *, ANM2 *)), "558bec6aff68????????64a1????????5083ec28a1????????33c58945ec535657508d45f464a3????????8b7d088b5d0c8b75108b0d????????895dcc85ff0f88????????8b81????????8b89????????2bc88945d0b8????????", argdata, 3, 4, &func);
}

__declspec(naked) void ModManager::RenderCustomCharacterMenu(int CharacterId, Vector *RenderPos, ANM2 *DefaultSprite)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+16]		// DefaultSprite
		push [ebp+12]		// RenderPos
		push [ebp+8]		// CharacterId
		call _func126::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 12
	}
}

namespace _func127
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Music::Play", typeid(void (Music::*)(int , float )), "558bec51538b5d??568bf18975fc5785db78238b8e????????b8ab??????8bbe1c03????2bcff7e9c1fa048bc2c1e81f", argdata, 2, 4, &func);
}

__declspec(naked) void Music::Play(int musicid, float volume)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// volume
		push [ebp+8]		// musicid
		call _func127::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func128
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Music::Crossfade", typeid(void (Music::*)(int , float )), "558BEC51538B5D085657", argdata, 2, 4, &func);
}

__declspec(naked) void Music::Crossfade(int musicid, float faderate)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// faderate
		push [ebp+8]		// musicid
		call _func128::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func129
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("PersistentGameData::TryUnlock", typeid(bool (PersistentGameData::*)(int )), "558bec83e4f883ec0c5356578bf9807f01000f85????????", argdata, 2, 1, &func);
}

__declspec(naked) bool PersistentGameData::TryUnlock(int achievementID)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// achievementID
		call _func129::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func130
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("PersistentGameData::IncreaseEventCounter", typeid(void (PersistentGameData::*)(int , int )), "558bec81ecd4000000a1????????33c58945fc8b450c538b5d08568bf157807e01000f85????????", argdata, 3, 5, &func);
}

__declspec(naked) void PersistentGameData::IncreaseEventCounter(int eEventCounters, int num)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// num
		push [ebp+8]		// eEventCounters
		call _func130::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func131
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("PersistentGameData::Unlocked", typeid(bool (PersistentGameData::*)(int )), "558bec8b450883f8fe74??85c079??", argdata, 2, 1, &func);
}

__declspec(naked) bool PersistentGameData::Unlocked(int achievementID)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// achievementID
		call _func131::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func132
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("PlayerHUD::Update", typeid(void (PlayerHUD::*)()), "538bdc83ec0883e4f883c404558b6b04896c24048bec6aff68????????64a100000000505381ecd8040000a1????????33c58945ec5657508d45f464a300000000", argdata, 1, 5, &func);
}

__declspec(naked) void PlayerHUD::Update()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func132::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func133
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("PlayerHUD::RenderActiveItem", typeid(void (PlayerHUD::*)(unsigned int , const Vector &, float , float )), "558bec83e4f081ecc802000056578b39f30f115c241c898c24a0000000897c241880bf881f0000000f85????????8b55088b4904898c24dc0000008d04d5000000002bc2", argdata, 5, 5, &func);
}

__declspec(naked) void PlayerHUD::RenderActiveItem(unsigned int slot, const Vector &pos, float alpha, float unk4)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+20]		// unk4
		push [ebp+16]		// alpha
		push [ebp+12]		// pos
		push [ebp+8]		// slot
		call _func133::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 16
	}
}

namespace _func134
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("PlayerManager::SpawnCoPlayer", typeid(Entity_Player *(PlayerManager::*)(int )), "558bec6aff68????????64a1000000005083ec20535657a1????????33c5508d45f464a3000000008bf9897de08b47142b4710c1f8024083f84076??68????????", argdata, 2, 1, &func);
}

__declspec(naked) Entity_Player *PlayerManager::SpawnCoPlayer(int unk)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// unk
		call _func134::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func135
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("PlayerManager::SpawnCoPlayer2", typeid(Entity_Player *(PlayerManager::*)(int )), "558bec6aff68????????64a1000000005083ec10535657a1????????33c5508d45f464a3000000008bf9837d08ff0f85????????6880250000e8????????", argdata, 2, 1, &func);
}

__declspec(naked) Entity_Player *PlayerManager::SpawnCoPlayer2(int unk)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// unk
		call _func135::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func136
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("PlayerManager::FirstCollectibleOwner", typeid(Entity_Player *(PlayerManager::*)(CollectibleType , RNG &, bool )), "558bec83e4f883ec0c538b5d0856578bf98b0d????????53", argdata, 4, 1, &func);
}

__declspec(naked) Entity_Player *PlayerManager::FirstCollectibleOwner(CollectibleType collectibleID, RNG &rng, bool unk)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+16]		// unk
		push [ebp+12]		// rng
		push [ebp+8]		// collectibleID
		call _func136::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 12
	}
}

namespace _func137
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("PlayerManager::IsCoopPlay", typeid(bool (PlayerManager::*)()), "558bec518b4110538b59142bd8", argdata, 1, 1, &func);
}

__declspec(naked) bool PlayerManager::IsCoopPlay()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		call _func137::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func138
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("PlayerManager::GetNumCollectibles", typeid(int (PlayerManager::*)(CollectibleType )), "558bec83e4f883ec0c535657ff7508", argdata, 2, 1, &func);
}

__declspec(naked) int PlayerManager::GetNumCollectibles(CollectibleType type)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// type
		call _func138::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func139
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("PlayerManager::FirstTrinketOwner", typeid(Entity_Player *(PlayerManager::*)(TrinketType , RNG **, bool )), "558bec83ec08a1????????53", argdata, 4, 1, &func);
}

__declspec(naked) Entity_Player *PlayerManager::FirstTrinketOwner(TrinketType trinketType, RNG **rng, bool unk)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+16]		// unk
		push [ebp+12]		// rng
		push [ebp+8]		// trinketType
		call _func139::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 12
	}
}

namespace _func140
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("Random", typeid(unsigned int (*)()), "a1????????3d70020000", argdata, 0, 0, &func);
}

__declspec(naked) unsigned int __stdcall Random()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		call _func140::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func141
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Room::GetDevilRoomChance", typeid(float (Room::*)()), "558bec83ec08f30f1005????????56578bf9f30f1145fc8b0d????????", argdata, 1, 1, &func);
}

__declspec(naked) float Room::GetDevilRoomChance()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		call _func141::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func142
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Room::GetGridEntity", typeid(GridEntity *(Room::*)(uint32_t )), "558bec8b45083dbf0100007708", argdata, 2, 1, &func);
}

__declspec(naked) GridEntity *Room::GetGridEntity(uint32_t idx)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// idx
		call _func142::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func143
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Room::ShopRestockFull", typeid(void (Room::*)()), "558bec6aff68????????64a1000000005083ec7ca1????????33c58945f0535657508d45f464a3000000008bd9", argdata, 1, 5, &func);
}

__declspec(naked) void Room::ShopRestockFull()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func143::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func144
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Room::ShopRestockPartial", typeid(void (Room::*)()), "558bec83ec1c53568bf1", argdata, 1, 5, &func);
}

__declspec(naked) void Room::ShopRestockPartial()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func144::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func145
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Room::GetShopItemPrice", typeid(int (Room::*)(unsigned int , unsigned int , int )), "558bec83ec30f30f7e05????????", argdata, 4, 1, &func);
}

__declspec(naked) int Room::GetShopItemPrice(unsigned int entVariant, unsigned int entSubType, int shopItemID)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+16]		// shopItemID
		push [ebp+12]		// entSubType
		push [ebp+8]		// entVariant
		call _func145::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 12
	}
}

namespace _func146
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Room::SpawnGridEntity", typeid(bool (Room::*)(int , unsigned int , unsigned int , unsigned int , int )), "558bec53568b75088bd95785", argdata, 6, 1, &func);
}

__declspec(naked) bool Room::SpawnGridEntity(int GridIndex, unsigned int Type, unsigned int Variant, unsigned int Seed, int VarData)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+24]		// VarData
		push [ebp+20]		// Seed
		push [ebp+16]		// Variant
		push [ebp+12]		// Type
		push [ebp+8]		// GridIndex
		call _func146::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 20
	}
}

namespace _func147
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Room::SpawnGridEntity", typeid(bool (Room::*)(int , GridEntityDesc *)), "558bec5153568b75088bd95785", argdata, 3, 1, &func);
}

__declspec(naked) bool Room::SpawnGridEntity(int GridIndex, GridEntityDesc *Desc)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// Desc
		push [ebp+8]		// GridIndex
		call _func147::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func148
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Room::RemoveGridEntityImmediate", typeid(void (Room::*)(int , int , bool )), "558bec8b5508568bf181", argdata, 4, 5, &func);
}

__declspec(naked) void Room::RemoveGridEntityImmediate(int GridIndex, int PathTrail, bool KeepDecoration)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+16]		// KeepDecoration
		push [ebp+12]		// PathTrail
		push [ebp+8]		// GridIndex
		call _func148::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 12
	}
}

namespace _func149
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Room::TriggerClear", typeid(void (Room::*)(bool )), "558bec83ec08538bd956578b3d????????8b4304", argdata, 2, 5, &func);
}

__declspec(naked) void Room::TriggerClear(bool playSound)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// playSound
		call _func149::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func150
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("RoomConfigHolder::GetRoomByStageTypeAndVariant", typeid(RoomConfig *(RoomConfigHolder::*)(uint32_t , uint32_t , uint32_t , int32_t )), "558bec518b55145356578b7d0869f7c4000000", argdata, 5, 1, &func);
}

__declspec(naked) RoomConfig *RoomConfigHolder::GetRoomByStageTypeAndVariant(uint32_t stage, uint32_t type, uint32_t variant, int32_t difficulty)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+20]		// difficulty
		push [ebp+16]		// variant
		push [ebp+12]		// type
		push [ebp+8]		// stage
		call _func150::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 16
	}
}

namespace _func151
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("RoomConfigHolder::GetRandomRoom", typeid(RoomConfig *(RoomConfigHolder::*)(unsigned int , bool , int , int , int , unsigned int , unsigned int , int , int , const unsigned int &, unsigned int , int )), "558bec6aff68????????64a1????????5083ec74a1????????33c58945f0535657508d45f464a3????????894dd08b45088945b88a450c8845cf88", argdata, 13, 1, &func);
}

__declspec(naked) RoomConfig *RoomConfigHolder::GetRandomRoom(unsigned int seed, bool reduceWeight, int stage, int roomType, int roomShape, unsigned int unk1, unsigned int unk2, int minDifficulty, int maxDifficulty, const unsigned int &requiredDoors, unsigned int roomSubtype, int unk3)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+52]		// unk3
		push [ebp+48]		// roomSubtype
		push [ebp+44]		// requiredDoors
		push [ebp+40]		// maxDifficulty
		push [ebp+36]		// minDifficulty
		push [ebp+32]		// unk2
		push [ebp+28]		// unk1
		push [ebp+24]		// roomShape
		push [ebp+20]		// roomType
		push [ebp+16]		// stage
		push [ebp+12]		// reduceWeight
		push [ebp+8]		// seed
		call _func151::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 48
	}
}

namespace _func152
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SFXManager::Play", typeid(void (SFXManager::*)(int , float , int , bool , float , float )), "558bec6aff68????????64a1????????5083ec0c535657a1????????33c5508d45f464a3????????8bd964a1????????8b10a1????????3b82????????0f8f????????8b7d", argdata, 7, 5, &func);
}

__declspec(naked) void SFXManager::Play(int ID, float Volume, int FrameDelay, bool Loop, float Pitch, float Pan)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+28]		// Pan
		push [ebp+24]		// Pitch
		push [ebp+20]		// Loop
		push [ebp+16]		// FrameDelay
		push [ebp+12]		// Volume
		push [ebp+8]		// ID
		call _func152::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 24
	}
}

