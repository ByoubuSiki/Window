#pragma once
#ifndef WINDOW_H
#define WINDOW_H

#include"..\Pch.h"

class Window
{
	WNDCLASSEX w = {};
	RECT wrc = {};

	void RegistClass();//�E�B���h�E�N���X�̍쐬�E�o�^
	void Show();//�E�B���h�E�̕\��

public:
	Window();
	Window(const LONG, const LONG);
	~Window();

	void Create();//�E�B���h�E�̍쐬

	HWND hwnd;//�E�B���h�E�n���h��
	LONG width, height;//�E�B���h�E�T�C�Y
};

//�E�B���h�E�v���[�W��
LRESULT WindowProcedure(HWND, UINT, WPARAM, LPARAM);

#endif // !WINDOW_H
