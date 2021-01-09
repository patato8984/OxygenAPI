#pragma once
XRCORE_API xstring get_string(bool v);
XRCORE_API xstring get_string(const Fvector& v);
XRCORE_API xstring get_string(const Fmatrix& dop);
XRCORE_API xstring get_string(const Fbox &box);

XRCORE_API xstring dump_string(const char* name, const Fvector &v);
XRCORE_API xstring dump_string(const char* name, const Fmatrix &form);
XRCORE_API void dump(const char* name, const Fmatrix &form);
XRCORE_API void dump(const char* name, const Fvector &v);
