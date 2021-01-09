#pragma once

BOOL XRCORE_API IsCharAlphaNumeric(CHAR ch);

BOOL XRCORE_API GetSystemTimes(PFILETIME lpIdleTime, PFILETIME lpKernelTime, PFILETIME lpUserTime);
//
//int XRCORE_API MessageBox(HWND hWnd, LPCTSTR lpText, LPCTSTR lpCaption, UINT uType);
int XRCORE_API MessageBoxA(HWND hWnd, LPCTSTR lpText, LPCTSTR lpCaption, UINT uType);

BOOL XRCORE_API ClipCursor(const RECT *lpRect);

int XRCORE_API _heapwalk(_HEAPINFO* _EntryInfo);

BOOL XRCORE_API SetPriorityClass(HANDLE hProcess, DWORD dwPriorityClass);