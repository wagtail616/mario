#pragma once
//Actor�N���X��錾
class Actor {
private:
	//x,y���W
	int x = 0, y = 0;
	//�`���摜��ID
	int ID = 0;

public:
	//Draw�֐��̐錾
	void Draw();
	Actor(int ID)
	{
		this->ID = ID;
	}

};
/*
�R���X�g���N�^�ɕ�����킽��
���ǂݍ���
��int ID�ŕԂ�
ID�ɑ��
*/