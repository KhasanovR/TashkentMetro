#include "Station.h"


std::string Station::getStation(int j)
{
	return "";
}

Station::Station()
{
	//Chilonzor line
	std::ifstream fin;
	fin.open("Chilonzor.txt");
	for (int i = 0; i < 12; i++)
	{
		std::string str;
		getline(fin, str);
		location[0][i] = str;
	}
	fin.close();

	//Yunusobod Line
	fin.open("Yunusobod.txt");
	for (int i = 0; i < 13; i++)
	{
		std::string str;
		getline(fin, str);
		location[1][i] = str;
	}
	fin.close();

	//Uzbekistan Line
	fin.open("Uzbekistan.txt");
	for (int i = 0; i < 11; i++)
	{
		std::string str;
		getline(fin, str);
		location[2][i] = str;
	}
	fin.close();
}
