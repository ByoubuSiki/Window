#include"Window.h"

namespace Win
{
	Window::Window() :Window::Window(0, 0, L"")
	{

	}

	//Window Size
	Window::Window(const LONG width, const LONG height) :Window(width, height, L"")
	{

	}

	//window size,window name
	Window::Window(const LONG width, const LONG height,const std::wstring& name)
		:hwnd(NULL)
	{
		this->width = width;
		this->height = height;
		this->name = name;
	}

	//Create window
	bool Window::Create(const HINSTANCE hInstance,const LONG x,const LONG y)
	{
		hwnd = CreateWindow(
			L"Unknown", name.c_str(), WS_CAPTION,
			x, y, width, height, NULL, NULL,
			hInstance, NULL
		);
	}

}