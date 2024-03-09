#include "framework.h"

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#ifndef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)
#endif 

#define FUNC extern "C" MATHLIBRARY_API 

FUNC void Sum(const unsigned long long a, const unsigned long long b);