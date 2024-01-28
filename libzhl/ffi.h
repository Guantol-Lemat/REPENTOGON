#pragma once

#include <stdio.h>
#include "IsaacRepentance.h"

extern "C" {
    LIBZHL_API void L_Console_Print(const char* str, unsigned int color);
    LIBZHL_API void L_Console_PrintError(const char* str);
    LIBZHL_API void L_Game_ClearDonationModGreed();
    LIBZHL_API unsigned int L_GetTime();
    LIBZHL_API unsigned int L_Random(unsigned int max);
    LIBZHL_API void L_Spawn(int type, int variant, unsigned int subtype, void* pos);
}