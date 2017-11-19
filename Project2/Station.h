
#ifndef STATION_H
#define STATION_H
#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>

class Station
{
protected:
	std::string location[3][13];
public:
	virtual std::string getStation(int j) = 0;
	Station();
};
#endif
