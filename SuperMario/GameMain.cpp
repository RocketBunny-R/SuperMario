#include "DxLib.h"

#define FLAME 60

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

    SetMainWindowText("�����ɃQ�[����");  //�^�C�g���ݒ�
    //SetWindowSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    //SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_COLOR_BIT_16);

    ChangeWindowMode(TRUE);		//�E�B���h�E���[�h�ŋN��

    if (DxLib_Init() == -1) return -1;	//DX���C�u�����̏���������

    SetDrawScreen(DX_SCREEN_BACK);  //�`����ʂ𗠂ɂ���

    SetFontSize(20);  //�����T�C�Y��ݒ�

    //��Ŏg����

    //SceneManager sceneMng((AbstractScene*)new Title());


    //Fps fps;

    ////�Q�[�����[�v
    //while (ProcessMessage() == 0 && sceneMng.Update() != nullptr)
    //{
    //    ClearDrawScreen();  //��ʂ̏�����

    //    sceneMng.Draw();

    //    fps.Update();	//�X�V
    //    //fps.Draw();		//�`��

    //    ScreenFlip();  //����ʂ̔|�{��\��ʂɔ��f

    //    PAD_INPUT::UpdateKey();

    //    fps.Wait();		//�ҋ@
    //}

    DxLib_End();  //DX���C�u�����g�p�̏I������

    return 0;
}