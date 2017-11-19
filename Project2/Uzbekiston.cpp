#include "Uzbekiston.h"

Uzbekiston::Uzbekiston() : Station()
{
}

/*void Uzbekiston::showStation()
{
	for (int i = 0; i < 11; i++)
	{
		std::cout << "\t" <<  i + 26 << ". " << location[2][i] << std::endl;

	}

}*/

std::string Uzbekiston::getStation(int j)
{
	return location[2][j];
}
