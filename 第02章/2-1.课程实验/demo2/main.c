
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
				   PSTR szCmdLine, int iCmdShow)
{
	//char a;
	//wchar_t b;
	//CHAR c;
	//WCHAR d;

	TCHAR e;
	PTCHAR p;
	//MessageBoxA(NULL,"hello 中国","标题: ASCII",MB_OK | MB_ICONINFORMATION);
	//MessageBoxW(NULL,L"hello 中国", L"标题: Unicode", MB_OK | MB_ICONINFORMATION);
	MessageBox(NULL,TEXT("hello 中国"), TEXT("标题: 通用"), MB_OK | MB_ICONINFORMATION);

	return 0;
}