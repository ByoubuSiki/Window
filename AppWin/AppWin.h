#pragma once
#ifndef WINDOW_H
#define WINDOW_H

#include<Windows.h>
#include<tchar.h>

//ウィンドウアプリケーションクラス
class AppWin
{
	void RegistClass(const wchar_t*);//ウィンドウクラスの作成・登録

public:
	AppWin();
	AppWin(const LONG, const LONG);//画面サイズ指定
	AppWin(const LONG, const LONG, const wchar_t*);//アプリケーション名指定
	~AppWin();

	void Show(const wchar_t*);//ウィンドウの表示

	bool Present();//ウィンドウが存在するかを判定

	WNDCLASSEX w = {};
	RECT wrc = {};
	HWND hwnd = {};//ウィンドウハンドル
	MSG msg = {};//メッセージ
	LONG width, height;//ウィンドウサイズ
};

//ウィンドウプロージャ
LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);

#endif // !WINDOW_H
