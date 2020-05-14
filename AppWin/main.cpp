#include"AppWin.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

	AppWin win(500, 500);
	win.Show(L"aaa");

	MSG msg = {};

	while (msg.message != WM_QUIT)
	{
		if (PeekMessage(&msg, nullptr, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}

	return 0;
}