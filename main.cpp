#include "DxLib.h"
#include "AssetLoader.h"
#include <vector>

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	if (DxLib_Init() == -1)		// �c�w���C�u��������������
	{
		return -1;			// �G���[���N�����璼���ɏI��
	}

	std::vector<const char*> ImageName{"images/ice_skate_man.png","images/ice_skate_kaiten.png"};

	//�摜�̓ǂݍ���
	AssetLoader Loader;
	Loader.Load(ImageName);
	//�摜�̕\��
	DrawGraph(0, 0, Loader.getID(0), TRUE);
	//�W�����v���Ă�摜
	//DrawGraph(200, 0, Loader.getID(1),TRUE);

	WaitKey();				// �L�[���͑҂�

	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 
}