#pragma once
#ifndef WINDOW_H
#define WINDOW_H

#include"..\Pch.h"

class Window
{
	WNDCLASSEX w = {};
	RECT wrc = {};

	void RegistClass();//ウィンドウクラスの作成・登録
	void Show();//ウィンドウの表示

public:
	Window();
	Window(const LONG, const LONG);
	~Window();

	void Create();//ウィンドウの作成

	HWND hwnd;//ウィンドウハンドル
	LONG width, height;//ウィンドウサイズ
};

//ウィンドウプロージャ
LRESULT WindowProcedure(HWND, UINT, WPARAM, LPARAM);

#endif // !WINDOW_H
