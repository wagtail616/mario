#include "AssetLoader.h"
#include "DxLib.h"


 int AssetLoader::Load(std::vector<const char*> ImageID) {

	 for (const char* IDs:ImageID) {
		 this->ID.push_back(LoadGraph(IDs));
	 }

	 return 0;
}

 int  AssetLoader::Loading(std::vector<const char*> Key) {
	 for (const char* Keys:Key){
		 char images[255] = "images/";
		 strcat_s(images, Keys);
		 this->Key[Keys] = LoadGraph(images);
	 }
	 return 0;
 }

 int AssetLoader::getID(int number) {
	 return ID[number];
}
 int AssetLoader::getValue(const char* ImageName) {
	 return Key[ImageName];
 }