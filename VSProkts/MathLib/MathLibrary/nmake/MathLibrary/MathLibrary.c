#include <stdio.h>
// Exclude rarely-used stuff from Windows headers
#define WIN32_LEAN_AND_MEAN	

#include <windows.h>


//**********************
#define EXPORTING_DLL
#include "MathLibrary.h"
//***********************/


/***********************************************************************
*
*  DLL Entry point.
*
************************************************************************/
//
//BOOL WINAPI DllMain(HINSTANCE hModule, DWORD dwReason, LPVOID lpReserved)
//{
//	// add any additional DLL initialization code here
//
//	switch (dwReason)
//	{
//		case DLL_PROCESS_ATTACH:
//		case DLL_THREAD_ATTACH:
//		case DLL_THREAD_DETACH:
//		case DLL_PROCESS_DETACH:
//	 							break;
//	 }
//	return TRUE;
//}

int WINAPI printHello()
{
	printf("%s", "Hello World");
	return 0;
}