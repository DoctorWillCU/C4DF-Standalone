#pragma once

#ifndef C4DF_MOD_H
#define C4DF_MOD_H

// Defining this as true, because this is my mod! (for CPP, this define is defined more complex. Unsuitable for my individual purposes)
#define MOD_DIPLOMACY_CIV4_FEATURES true

#define MOD_DLL_C4DF_GUID { 0xcd9958cc, 0xfa3f, 0x468e, { 0x89, 0xdc, 0x34, 0x6e, 0x9d, 0x30, 0x36, 0xaf } };
#define MOD_DLL_C4DF_NAME "Civilization IV Diplomatic Features v1"
#define MOD_DLL_C4DF_VERSION_NUMBER ((uint) 1)

// LUA API wrappers
// Thanks Community Patch Project - copying here because lazy
#define LUAAPIEXTN(method, type, ...) static int l##method(lua_State* L)
#define LUAAPIIMPL(object, method) int CvLua##object::l##method(lua_State* L) { return BasicLuaMethod(L, &Cv##object::##method); }
#define LUAAPIINLINE(method, hasMethod, type) inline bool method() const { return hasMethod(type); }

#endif