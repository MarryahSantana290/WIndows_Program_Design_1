#include <stdio.h>
#include <windows.h>
#include <tchar.h>
#include <stdarg.h>

//int my_printf(const char * szFormat,...)
//{
//	int iReturn;
//	va_list pArgs;
//	
//	va_start(pArgs,szFormat);
//
//	iReturn = vprintf(szFormat,pArgs);
//
//	va_end(pArgs);
//
//	return iReturn;
//}
//
//int main()
//{
//	int a = 12;
//	char szBuffer[100];
//	int x = 100, y = 200, z = 300;
//
//	printf("hello %d, %d, %d\n",x,y,z);
//	my_printf("hello %d, %d\n",x,y);
//	sprintf(szBuffer,"不安全的: hello %d\n", a);
//	puts(szBuffer);
//
//	_snprintf(szBuffer,100,"安全的 hello %d\n",a);
//	printf("%s",szBuffer);
//	
//	//printf("hello %d\n", a);
//	return 0;
//}


//int WINAPI WinMain(HINSTANCE hInstance,
//				   HINSTANCE hPrevInstane,
//				   PSTR szCmdLine,
//				   int iCmdShow)
//{
//	int a = 12;
//	char szBuffer[100];
//
//	//sprintf(szBuffer,"Hello %d",a);
//	_snprintf(szBuffer,100,"安全的 Hello %d",a);
//	MessageBoxA(NULL,szBuffer,"Hello ASCII",MB_OK|MB_ICONINFORMATION);
//	
//	return 0;
//}

//int WINAPI WinMain(HINSTANCE hInstance,
//				   HINSTANCE hPrevInstane,
//				   PSTR szCmdLine,
//				   int iCmdShow)
//{
//	int a = 12;
//	wchar_t szBuffer[100];//WCHAR
//
//	//swprintf(szBuffer,100,L"Hello %d",a);
//	_snwprintf(szBuffer,100,L"安全的 Hello %d",a);
//	MessageBoxW(NULL,szBuffer,L"Hello Unicode",MB_OK|MB_ICONINFORMATION);
//	
//	return 0;
//}

//int WINAPI WinMain(HINSTANCE hInstance,
//				   HINSTANCE hPrevInstane,
//				   PSTR szCmdLine,
//				   int iCmdShow)
//{
//	int a = 12;
//	TCHAR szBuffer[100];//
//
//	//_stprintf(szBuffer,TEXT("Hello %d"),a);
//	_sntprintf(szBuffer,100,TEXT("安全的 Hello %d"),a);
//	MessageBox(NULL,szBuffer,TEXT("Hello TCHAR"),MB_OK|MB_ICONINFORMATION);
//	
//	return 0;
//}

int CDECL MessageBoxPrintf(TCHAR * szCaption, TCHAR * szFormat,...)
{
	TCHAR szBuffer[1024];
	va_list pArgList;
	va_start(pArgList,szFormat);
	_vsntprintf(szBuffer,sizeof(szBuffer)/sizeof(TCHAR),szFormat,pArgList);
	va_end(pArgList);

	return MessageBox(NULL,szBuffer,szCaption,MB_OK | MB_ICONINFORMATION);
}

int WINAPI WinMain(HINSTANCE hInstance,
				   HINSTANCE hPrevInstane,
				   PSTR szCmdLine,
				   int iCmdShow)
{
	int x = 100, y = 200, z = 300;
	int cxScreen, cyScreen;

	cxScreen = GetSystemMetrics(SM_CXSCREEN);
	cyScreen = GetSystemMetrics(SM_CYSCREEN);

	MessageBoxPrintf(TEXT("我的标题"),TEXT("Hello %d, %d, %d"),x,y,z);
	MessageBoxPrintf(TEXT("屏幕大小"),TEXT("我的屏幕宽度是: %d, 高度是: %d"),cxScreen,cyScreen);

	return 0;
}