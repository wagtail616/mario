#pragma once
#include<vector>
#include <map>

class AssetLoader
{
private:
	std::vector <int> ID{};
	std::map<const char*, int>Key;

public:
	int Load(std::vector<const char*>);
	int Loading(std::vector<const char*>);
	int getID(int);
	int getValue(const char*);
};

