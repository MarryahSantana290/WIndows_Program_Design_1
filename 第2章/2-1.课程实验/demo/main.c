#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include <tchar.h>

//ASCII码字符集，双字节字符集，多字节字符集
//int main()
//{
//	char c = 'A';//char是一个字节
//	char str[] = "中国";
//	int i;
//
//	i = strlen(str);
//
//	printf("%c\n",c);
//	printf("%s\n",str);
//	printf("长度: %d\n",i);
//	return 0;
//}


//Unicode宽字符集
//int main()
//{
//	wchar_t c = L'国'; //宽字符,Unicode,二个字节
//	wchar_t str[] = L"中国";
//	int i;
//
//	setlocale(LC_ALL, "chs");
//	
//	i = wcslen(str);
//
//	wprintf(L"%lc\n",c);
//	wprintf(L"%ls\n",str);
//	wprintf(L"长度: %d\n", i);
//}

//通用的类型、函数
int main()
{
	//不要用
	//char c;
	//wchar_t c;
	//CHAR c;
	//WCHAR c;
	TCHAR str[] = _T("中国");

	//setlocale(LC_ALL,"chs");
	_tprintf(_T("%s\n"),str);
	return 0;
}