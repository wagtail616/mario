#include "AssetLoader.h"
#include<Vector>
#include "DxLib.h"

 int AssetLoader::Load(std::vector<int> ID,std::vector<char*> ImageID) {

	 for (char* IDs:ImageID) {
		 ID.push_back(LoadGraph(IDs));
	 }
}