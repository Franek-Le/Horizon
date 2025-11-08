#pragma once

#ifdef HZN_PLATFORM_WINDOWS
	#ifdef HZN_BUILD_DLL
		#define HORIZON_API __declspec(dllexport)
	#else
		#define HORIZON_API __declspec(dllimport)
	#endif
#else
	#error Horizon only supports Windows!
#endif