#pragma once
//Actorクラスを宣言
class Actor {
private:
	//x,y座標
	int x = 0, y = 0;
	//描く画像のID
	int ID = 0;

public:
	//Draw関数の宣言
	void Draw();
	Actor(int ID)
	{
		this->ID = ID;
	}

};
/*
コンストラクタに文字列わたす
→読み込む
→int IDで返す
IDに代入
*/