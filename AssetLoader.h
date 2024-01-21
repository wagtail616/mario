#pragma once
#include<vector>

class AssetLoader
{
private:
	std::vector <int> ID{};
public:
	int Load(std::vector<const char*>);
	int getID(int);
};

