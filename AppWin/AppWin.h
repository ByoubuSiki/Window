#pragma once
#ifndef WINDOW_H
#define WINDOW_H

#include<Windows.h>
#include<tchar.h>

//�E�B���h�E�A�v���P�[�V�����N���X
class AppWin
{
	void RegistClass(const wchar_t*);//�E�B���h�E�N���X�̍쐬�E�o�^

public:
	AppWin();
	AppWin(const LONG, const LONG);//��ʃT�C�Y�w��
	AppWin(const LONG, const LONG, const wchar_t*);//�A�v���P�[�V�������w��
	~AppWin();

	void Show(const wchar_t*);//�E�B���h�E�̕\��

	WNDCLASSEX w = {};
	RECT wrc = {};
	HWND hwnd = {};//�E�B���h�E�n���h��
	LONG width, height;//�E�B���h�E�T�C�Y
};

//�E�B���h�E�v���[�W��
LRESULT WindowProcedure(HWND, UINT, WPARAM, LPARAM);

#endif // !WINDOW_H
