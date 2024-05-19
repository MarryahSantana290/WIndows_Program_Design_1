////标准的C语言
//
////main()
////int main()
//int main(int argc, char *argv[])
//{
//	printf("hello,world\n");
//	return 0;
//}

#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
				   PSTR szCmdLine,int iCmdShow)
{
	MessageBox(NULL,TEXT("Hello, Windows 程序设计!"),
		TEXT("HelloMsg - 这是标题"),
		MB_OK | MB_ICONINFORMATION);

	return 0;
}