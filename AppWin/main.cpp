#include"AppWin.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	//AppWin win(); �E�B���h�E�T�C�Y�ƃA�v���P�[�V������������Ɏw��

	AppWin win(500, 500, L"Example");//�A�v���P�[�V���������w��

	win.Show(L"Example");//�E�B���h�E�̖��O���w�肵�ĕ\��

	while (win.Present())//�E�B���h�E���j������Ă��Ȃ��Ȃ�true
	{

	}

	return 0;
}