#include "AssetLoader.h"
#include "DxLib.h"

 int AssetLoader::Load(std::vector<const char*> ImageID) {

	 for (const char* IDs:ImageID) {
		 this->ID.push_back(LoadGraph(IDs));
	 }
	 return 0;
}
 int AssetLoader::getID(int number) {
	 return ID[number];
}