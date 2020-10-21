#include"Window.h"

namespace Win
{
	Window::Window() :Window::Window(0, 0, L"") {}

	//Window Size
	Window::Window(const int width, const int height) :Window(width, height, L"") {}

	//window size,window name
	Window::Window(const int width, const int height, const std::wstring& name)
		: x(0), y(0), hwnd(NULL), style(WS_CAPTION), className(L"STATIC"),
		hParent(NULL), hMenu(NULL), lpParam(NULL)
	{
		this->width = width;
		this->height = height;
		this->title = name;
	}

	//Create window
	bool Window::Create(const HINSTANCE hInstance)
	{
		hwnd = CreateWindow(
			className.c_str(), title.c_str(), style,
			x, y, width, height, hParent, hMenu,
			hInstance, lpParam
		);

		if (hwnd == NULL)
		{
			return false;
		}

		ShowWindow(hwnd, SW_SHOW);

		return true;
	}

}