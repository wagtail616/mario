#include "DxLib.h"
#include "AssetLoader.h"
#include "ActorClass.h"
#include <vector>

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	if (DxLib_Init() == -1)		// �c�w���C�u��������������
	{
		return -1;			// �G���[���N�����璼���ɏI��
	}
	//�摜
	std::vector<const char*> ImageName{"ice_skate_man.png","ice_skate_kaiten.png"};
	

	//�摜�̓ǂݍ���
	AssetLoader Loader;
	Loader.Loading(ImageName);
	//�摜�̕\��
	Actor actor(Loader.getValue(ImageName[0]));//Actor�N���X��actor��錾

	while (ProcessMessage() == 0) {

		actor.Draw();

		int end = CheckHitKey(KEY_INPUT_ESCAPE);
		//�Q�[���I������
		if (end ==1) {
			break;
		}
	}


	//�W�����v���Ă�摜
	//DrawGraph(200, 0, Loader.getID(1),TRUE);


	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 
}