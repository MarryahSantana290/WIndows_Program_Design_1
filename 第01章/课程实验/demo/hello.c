////��׼��C����
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
	MessageBox(NULL,TEXT("Hello, Windows �������!"),
		TEXT("HelloMsg - ���Ǳ���"),
		MB_OK | MB_ICONINFORMATION);

	return 0;
}