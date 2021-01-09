#pragma once
/////////////////////////////////////////////
// Desc: Current language data 
/////////////////////////////////////////////
// Oxygen Engine 2.0s (2016 - 2020) 
/////////////////////////////////////////////

struct XRCORE_API CLangManager
{
	enum EGameLanguage : u32
	{
		eglRussian = 0,
		eglEnglish = 1,

		eglNoFound = u32(-1)
	};

	static xr_token language_type_token[];
	EGameLanguage CurrentLanguage;

public:
	CLangManager();

	inline const char* GetCurrentTokenLang() const
	{
		return language_type_token[CurrentLanguage].name;
	}

	inline const char* GetCurrentLang() const
	{
		if (CurrentLanguage == EGameLanguage::eglEnglish)
		{
			return "eng";
		}
		else if (CurrentLanguage == EGameLanguage::eglRussian)
		{
			return "rus";
		}

		return "eng";
	}

	inline void SwitchLang(EGameLanguage NewLang)
	{
		CurrentLanguage = NewLang;
	}
};

extern XRCORE_API CLangManager gLangManager;