
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
	//MessageBoxA(NULL,"hello �й�","����: ASCII",MB_OK | MB_ICONINFORMATION);
	//MessageBoxW(NULL,L"hello �й�", L"����: Unicode", MB_OK | MB_ICONINFORMATION);
	MessageBox(NULL,TEXT("hello �й�"), TEXT("����: ͨ��"), MB_OK | MB_ICONINFORMATION);

	return 0;
}