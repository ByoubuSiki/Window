#include"AppWin.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	//AppWin win(); ウィンドウサイズとアプリケーション名が勝手に指定

	AppWin win(500, 500, L"Example");//アプリケーション名を指定

	win.Show(L"Example");//ウィンドウの名前を指定して表示

	while (win.Present())//ウィンドウが破棄されていないならtrue
	{

	}

	return 0;
}