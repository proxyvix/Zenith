#pragma once

#ifdef Z_PLATFORM_WINDOWS
    #ifdef Z_BUILD_DLL
        #define ZENITH_API __declspec(dllexport)
    #else
        #define ZENITH_API __declspec(dllimport)
    #endif
#else
    #error Zenith only supports Windows
#endif
