#include <Windows.h>

LONG WINAPI WndProc(HWND hWnd, UINT nMessageID, WPARAM wParam, LPARAM lParam);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCommandLine, int nCMDShow)
{
	WNDCLASS wc;
	HWND  hWnd;
	MSG   msg;

	wc.style		= 0;                 //class style
	wc.lpfnWndProc	= (WNDPROC) WndProc; //windows procedure
	wc.cbClsExtra	= 0;                 //class extra bytes
	wc.hInstance	= hInstance;         // instance handle - instance is one run of the application
	wc.hIcon		= LoadIcon(NULL, IDI_WINLOGO);
	wc.hCursor		= LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);//COLOR_WINDOW + 1 would be COLOR_WINDOWFRAME.
	wc.lpszMenuName = NULL;
	wc.lpszClassName = "MyWndClass";     //wndclass name

	RegisterClass(&wc);

	return msg.wParam;
}

LONG WndProc(HWND hWnd, UINT nMessageID, WPARAM wParam, LPARAM lParam)
{
	return 0;
}
