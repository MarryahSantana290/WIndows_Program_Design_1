#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include <tchar.h>

//ASCII���ַ�����˫�ֽ��ַ��������ֽ��ַ���
//int main()
//{
//	char c = 'A';//char��һ���ֽ�
//	char str[] = "�й�";
//	int i;
//
//	i = strlen(str);
//
//	printf("%c\n",c);
//	printf("%s\n",str);
//	printf("����: %d\n",i);
//	return 0;
//}


//Unicode���ַ���
//int main()
//{
//	wchar_t c = L'��'; //���ַ�,Unicode,�����ֽ�
//	wchar_t str[] = L"�й�";
//	int i;
//
//	setlocale(LC_ALL, "chs");
//	
//	i = wcslen(str);
//
//	wprintf(L"%lc\n",c);
//	wprintf(L"%ls\n",str);
//	wprintf(L"����: %d\n", i);
//}

//ͨ�õ����͡�����
int main()
{
	//��Ҫ��
	//char c;
	//wchar_t c;
	//CHAR c;
	//WCHAR c;
	TCHAR str[] = _T("�й�");

	//setlocale(LC_ALL,"chs");
	_tprintf(_T("%s\n"),str);
	return 0;
}