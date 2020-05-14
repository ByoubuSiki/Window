#include"Window.h"

Window::Window()
	: Window(800, 600)
{

}

Window::Window(const LONG win_width, const LONG win_height)
{
	width = win_width;
	height = win_height;
}

Window::~Window()
{
	UnregisterClass(w.lpszClassName, w.hInstance);
}

//�N���X�̓o�^
void Window::RegistClass()
{
	w.cbSize = sizeof(WNDCLASSEX);
	w.lpfnWndProc = (WNDPROC)WindowProcedure;//�R�[���o�b�N�֐��̎w��
	w.lpszClassName = _T("DXSample");//�A�v���P�[�V�����N���X��
	w.hInstance = GetModuleHandle(nullptr);//�n���h���̎擾

	RegisterClassEx(&w);//�A�v���P�[�V�����N���X�̓o�^

	wrc = { 0,0,width,height };//�E�B���h�E�T�C�Y
}

//�E�B���h�E�̕\��
void Window::Show()
{
	//�E�B���h�E�T�C�Y�̕␳
	AdjustWindowRect(&wrc, WS_OVERLAPPEDWINDOW, false);

	//�E�B���h�E�I�u�W�F�N�g�̍쐬
	hwnd = CreateWindow(
		w.lpszClassName,//�N���X��
		_T("DX12�e�X�g"),//�^�C�g���o�[
		WS_OVERLAPPEDWINDOW,//�^�C�g���o�[�Ƌ��E��������E�B���h�E
		CW_USEDEFAULT,//OS�ɔC����
		CW_USEDEFAULT,//OS�ɔC����
		width,//�E�B���h�E����
		height,//�E�B���h�E�c��
		nullptr,//�e�E�B���h�E�n���h��
		nullptr,//���j���[�n���h��
		w.hInstance,//�Ăяo���A�v���P�[�V�����n���h��
		nullptr//�ǉ��p�����[�^
	);

	//�E�B���h�E�\��
	ShowWindow(hwnd, SW_SHOW);
}

//�E�B���h�E�̍쐬
void Window::Create()
{
	RegistClass();

	Show();
}

//�E�B���h�E�v���[�W��
LRESULT WindowProcedure(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
{
	//�E�B���h�E���폜
	if (msg == WM_DESTROY)
	{
		//OS�ɏI����ʒm
		PostQuitMessage(0);
		return 0;
	}

	//�K��̏��������s
	return DefWindowProc(hwnd, msg, wparam, lparam);
}