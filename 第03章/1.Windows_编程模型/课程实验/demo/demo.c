#include <windows.h>

//���ڹ��̻ص�����       H��Handler�ļ�д�����
LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);

//�൱�� int main()
//                 ʵ�����
int WINAPI WinMain(HINSTANCE hInstance,
				   HINSTANCE hPrevInstance,
				   LPSTR lpszCmdLine,
				   int nCmdShow)
{
	HWND hwnd;//���ھ��
	MSG msg;//��Ϣ
	WNDCLASS wc;//������
	
	//1.���һ��������
	wc.style = 0;
	wc.lpfnWndProc = (WNDPROC)WndProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = hInstance;
	wc.hIcon = LoadIcon(NULL, IDI_WINLOGO);
	wc.hCursor = LoadCursor(NULL,IDC_ARROW);
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszMenuName = NULL;
	wc.lpszClassName = TEXT("MyWndClass");

	//2.ע�ᴰ����
	RegisterClass(&wc);

	//3.��������
	hwnd = CreateWindow(
		TEXT("MyWndClass"),
		TEXT("Hello SDK Application"),
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		NULL,//�����ھ��
		NULL,//���ڲ˵����
		hInstance,
		NULL);

	//4.��ʾ�͸��´���
	ShowWindow(hwnd,nCmdShow);
	UpdateWindow(hwnd);
	//5.��Ϣѭ��
	while(GetMessage(&msg,NULL,0,0)){
		TranslateMessage(&msg);
		DispatchMessage(&msg);//ת�������ڹ���
	}

	return msg.wParam;
}

LRESULT CALLBACK WndProc(HWND hwnd,
						 UINT message,
						 WPARAM wParam,
						 LPARAM lParam)
{
	PAINTSTRUCT ps;
	HDC hdc;//DC���
	RECT rect;

	//�Ը�����Ϣ���д���
	switch(message)
	{
	case WM_SIZE:
		//�ػ� Paint
		return 0;
	case WM_LBUTTONDOWN:
		//MessageBox(hwnd,TEXT("Mouse Clicked!"),TEXT("��Ϣ"),MB_OK);
		//PostQuitMessage(0);
		return 0;
	case WM_PAINT: //������Ϣ
		hdc = BeginPaint(hwnd,&ps);
		GetClientRect(hwnd,&rect);
		//Ellipse(hdc,0,0,200,100);
		DrawText(hdc,TEXT("Hello, Windows!"),-1,&rect,
			DT_SINGLELINE | DT_CENTER | DT_VCENTER);
		EndPaint(hwnd,&ps);
		return 0;
	case WM_DESTROY://���ٴ�����Ϣ���رգ�
		PostQuitMessage(0);
		return 0;
	}
	return DefWindowProc(hwnd,message,wParam,lParam);
}