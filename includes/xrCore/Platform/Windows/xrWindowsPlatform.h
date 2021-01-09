// Giperion February 2020
// [EUREKA] 3.13.0
// X-Ray Oxygen, Oxygen Team
#pragma once

class xrPlatformWindows
{
public:

	/// Initialize all platform specifics 
	static void InitializePlatform();
};

extern XRCORE_API xrPlatformWindows Platform;