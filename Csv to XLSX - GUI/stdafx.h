

#pragma once


#include <stdio.h>
#include <tchar.h>


#ifdef _WIN64
#pragma comment(lib, "..\\include\\zlib.lib")
#ifdef _DEBUG
#pragma comment(lib, "..\\include\\LibXlsxWriter.lib")
#else
#pragma comment(lib, "..\\include\\LibXlsxWriter.lib")
#endif
#else
#pragma comment(lib, "..\\include\\zlib.lib")
#ifdef _DEBUG
#pragma comment(lib, "..\\include\\LibXlsxWriter.lib")
#else
#pragma comment(lib, "..\\include\\LibXlsxWriter.lib")
#endif
#endif
