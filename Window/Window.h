#pragma once

#include"Pch.h"

namespace Win
{
	//Generate Window
	class Window
	{
	public:
		Window();
		Window(const int, const int);//Window Size
		Window(const int, const int,const std::wstring&);//window size,window name

		~Window() {};

		//Create window
		bool Create(const HINSTANCE);
		bool Create(const HINSTANCE, const int, const int);

		int width, height;//window width ans height
		int x, y;//window coordinate
		HWND hwnd;//window handle
		std::wstring className,title;//window title
		DWORD style;//dwStyle
		HWND hParent;
		HMENU hMenu;
		LPVOID lpParam;

	private:

	};
}