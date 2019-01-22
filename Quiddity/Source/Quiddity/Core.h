#pragma once




#ifdef QDTY_PLATFORM_WINDOWS

 #ifdef QDTY_BUILD_DLL

  #define QUIDDITY_API __declspec(dllexport)
 #else

  #define QUIDDITY_API __declspec(dllimport)
 #endif

#else
#error Hazel only supports Windows!

#endif