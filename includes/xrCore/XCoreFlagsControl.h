#pragma once

enum ECoreFlags = 
{
	eCoreNoPrefetch 	= 1 << 0,  // Skip prefetch for sound/models
	eCoreDev			= 1 << 1,  // Enable developer mode 
	eCoreFileSpy		= 1 << 2,  // Enable open/close files contorl 
	eCoreNoLog			= 1 << 3,  // Disable engine log writting 
	eCoreTexStoring 	= 1 << 4,  // Disable textures unloading 
	eCoreRenderDbg		= 1 << 5,  // For Shader/Render debbuger
	eCoreEditor			= 1 << 6,  // Enable weather editor. Need use define INGAME_EDITOR
	eCoreNoSound		= 1 << 7,  // Disable all sounds 
	eCoreGameDgb		= 1 << 8,  // Use all engine events. Only for debbuging. Very slow..
	eCoreNoOCCQ			= 1 << 9,  // Disable OcclusionCulling .
	eCoreSkinColor		= 1 << 10, // Set SKIN_COLOR to 1 (shaders)
	eCorePlaceHoolder 	= 1 << 11, // If texture not found - use Place Holder 
	eGameMixed			= 1 << 12, // Use the xrGameMixed.dll game module by default 
	eGameSkip			= 1 << 13  // Don't use game module 
};

class XRCORE_API CCoreFlags
{
	Flags64 CoreParams;
	
public:
	void Enable(ECoreFlags eFlags);
	bool Get(ECoreFlags eFlags);
};

extern CCoreFlags gCoreFlags;