#include "Yunusobod.h"

Yunusobod::Yunusobod() : Station()
{
}

/*void Yunusobod::showStation()
{

	for (int i = 0; i < 13; i++)
	{
		std::cout << i + 13 << ". " << location[1][i] << std::endl;
	}
}*/

std::string Yunusobod::getStation(int j)
{
	return location[1][j];
}
