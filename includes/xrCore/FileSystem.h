#pragma once
#define BACKUP_FILE_LEVEL 5

class XRCORE_API EFS_Utils {
protected:
	bool 		GetOpenNameInternal		(const char* initial, char* buffer, int sz_buf, bool bMulti=false, const char* offset=0, int start_flt_ext=-1 ) const;
public:
				EFS_Utils		();
	virtual 	~EFS_Utils		();
	void 		_initialize		(){}
    void 		_destroy		(){}

	const char*		GenerateName	(const char* base_path, const char* base_name, const char* def_ext, char* out_name, u32 const out_name_size);

	bool 		GetOpenName		(const char* initial, string_path& buffer, int sz_buf, bool bMulti=false, const char* offset=0, int start_flt_ext=-1 );
	bool 		GetOpenName		(const char* initial, xstring& buf, bool bMulti=false, const char* offset=0, int start_flt_ext=-1 );

	bool 		GetSaveName		(const char* initial, string_path& buffer, const char* offset=0, int start_flt_ext=-1 );
	bool 		GetSaveName		(const char* initial, xstring& buf, const char* offset=0, int start_flt_ext=-1 );

	void 		MarkFile		(const char* fn, bool bDeleteSource);

	xstring 	AppendFolderToName(xstring& tex_name, int depth, BOOL full_name);

	const char*		AppendFolderToName(char* tex_name, u32 const tex_name_size, int depth, BOOL full_name);
	const char*		AppendFolderToName(const char* src_name, char* dest_name, u32 const dest_name_size, int depth, BOOL full_name);

    xstring	ChangeFileExt	(const char* src, const char* ext);
    xstring	ChangeFileExt	(const xstring& src, const char* ext);

    xstring	ExtractFileName		(const char* src);
    xstring	ExtractFilePath		(const char* src);
    xstring	ExtractFileExt		(const char* src);
    xstring	ExcludeBasePath		(const char* full_path, const char* excl_path);
};
extern XRCORE_API	EFS_Utils*	xr_EFS;
#define EFS (*xr_EFS)

