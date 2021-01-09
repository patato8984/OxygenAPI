// Giperion February 2020
// [EUREKA] 3.13.0
// X-Ray Oxygen, Oxygen Team
#pragma once
#include <XUser.h>
#include <XGame.h>
#include "xal\xal.h"
#include "xsapi-c\services_c.h"
#include "xsapi-c\achievements_c.h"

class xrXboxLive
{
public:

	void Initialize();

	const xstring& GetGamerTag() const;

private:

	void InitializeXboxServices();

	void SetCurrentUser(XUserHandle userHandle);
	void HandleError(HRESULT hr);

	XTaskQueueHandle asyncQueue;
	XblContextHandle xboxLiveContext;

	XUserHandle xboxLiveUser;
	u64 xboxUserId;
	xr_string gamertag;

	u32 titleId;
	xstring titleIdHex;
};

extern XRCORE_API xrXboxLive xboxLive;