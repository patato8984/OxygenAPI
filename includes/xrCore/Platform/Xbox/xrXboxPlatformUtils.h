// Giperion February 2020
// [EUREKA] 3.13.0
// X-Ray Oxygen, Oxygen Team

//////////////////////////////////////////////////////////////
// Desc		: Xbox One miscellaneous functions
// Author	: Giperion
//////////////////////////////////////////////////////////////
// Oxygen Engine 2016-2020
//////////////////////////////////////////////////////////////
#pragma once
#include "Platform/xrPlatformUtils.h"

class XRCORE_API xrXboxPlatformUtils : public xrGenericPlatformUtils
{
public:
	xrXboxPlatformUtils& operator=(const xrXboxPlatformUtils& Other) = delete;

	virtual LPCSTR GetName() override;
	virtual int ShowCursor(bool bShowCursor) override;
	virtual void GetUsername(string64& OutUsername) override;
	virtual void GetComputerName(string64& OutComputer) override;
	virtual u64 GetProcessorFrequency() override;
	virtual void SetCurrentThreadName(const string128& ThreadName) override;

};

extern XRCORE_API xrXboxPlatformUtils PlatformUtils;