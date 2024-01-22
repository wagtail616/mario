#include "DxLib.h"
#include"ActorClass.h"

void Actor::Draw() {
	DrawGraph(this->x, this->y, this->ID, TRUE);
}