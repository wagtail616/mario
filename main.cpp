#include "DxLib.h"
#include "AssetLoader.h"
#include "ActorClass.h"
#include <vector>

// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	if (DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}
	//画像
	std::vector<const char*> ImageName{"ice_skate_man.png","ice_skate_kaiten.png"};
	

	//画像の読み込み
	AssetLoader Loader;
	Loader.Loading(ImageName);
	//画像の表示
	Actor actor(Loader.getValue(ImageName[0]));//Actorクラスのactorを宣言

	while (ProcessMessage() == 0) {

		actor.Draw();

		int end = CheckHitKey(KEY_INPUT_ESCAPE);
		//ゲーム終了処理
		if (end ==1) {
			break;
		}
	}


	//ジャンプしてる画像
	//DrawGraph(200, 0, Loader.getID(1),TRUE);


	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 
}