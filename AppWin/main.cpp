#include"AppWin.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	//AppWin win(); ウィンドウサイズとアプリケーション名が勝手に指定

	/*AppWin win(1000,800) ウィンドウサイズが幅1000,高さ800で指定
							アプリケーション名は勝手に指定*/

	AppWin win(500, 500, L"Example");//アプリケーション名を指定

	win.Show(L"Example");//ウィンドウの名前を指定して表示

	while (win.Present())//ウィンドウが破棄されていないならtrue
	{
		win.Update();//メッセージの更新
	}

	return 0;
}