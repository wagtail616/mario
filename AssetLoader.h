
#pragma once
#include <string>
class AssetLoader
{
	std::vector <int> ID{};
	std::vector <char*> ImageID{};
	int Load(std::vector<int>,std::vector<char*>);
};

