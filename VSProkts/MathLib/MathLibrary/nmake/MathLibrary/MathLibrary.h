#pragma once
// MathLibrary.h - Contains declarations of math functions
#pragma once

// File: SampleDLL.h
//
#ifndef MATHLIBRARY
#define MATHLIBRARY

#ifdef __CPLUSPLUS// if its' a c++ program 9compiled by cpp compiler
#define EXTERN_C extern "C"
else //!__CPLUSPLUS
#define EXTERN_C
#endif // !__CPLUSPLUS


#include <stdio.h>
#include <string.h>

extern "C" { FILE __iob_func[3] = { *stdin,*stdout,*stderr }; }

#ifdef EXPORTING_DLL
extern __declspec(dllexport) int printHello();
#else
extern __declspec(dllimport) int printHello();
#endif

#endif