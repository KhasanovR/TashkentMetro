#ifndef UZBEKISTON_H
#define UZBEKISTON_H
#include <iostream>
#include <string>
#include "Station.h"

class Uzbekiston : public Station
{
public:
	Uzbekiston();
	virtual std::string getStation(int j);
};
#endif