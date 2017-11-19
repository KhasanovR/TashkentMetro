#include "Chilonzor.h"

Chilonzor::Chilonzor() : Station()
{
}

/*void Chilonzor::showStation()
{
	for (int i = 0; i < 12; i++)
	{
		std::cout << "\t" << i + 1 << ". " << location[0][i] << std::endl;
	}
}*/

std::string Chilonzor::getStation(int j)
{
	return location[0][j];
}
