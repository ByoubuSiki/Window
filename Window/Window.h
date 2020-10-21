#pragma once

#include"Pch.h"

namespace Win
{
	//Generate Window
	class Window
	{
	public:
		Window();
		Window(const LONG, const LONG);//Window Size
		Window(const LONG, const LONG,const std::wstring&);//window size,window name

		~Window() {};

		bool Create(const HINSTANCE,const LONG, const LONG);//Create window

		LONG width, height;
		HWND hwnd;
		std::wstring name;

	private:

	};
}