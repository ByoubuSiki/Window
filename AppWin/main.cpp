#include"AppWin.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	//AppWin win(); �E�B���h�E�T�C�Y�ƃA�v���P�[�V������������Ɏw��

	/*AppWin win(1000,800) �E�B���h�E�T�C�Y����1000,����800�Ŏw��
							�A�v���P�[�V�������͏���Ɏw��*/

	AppWin win(500, 500, L"Example");//�A�v���P�[�V���������w��

	win.Show(L"Example");//�E�B���h�E�̖��O���w�肵�ĕ\��

	while (win.Present())//�E�B���h�E���j������Ă��Ȃ��Ȃ�true
	{
		win.Update();//���b�Z�[�W�̍X�V
	}

	return 0;
}