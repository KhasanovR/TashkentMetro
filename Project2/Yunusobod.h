#ifndef YUNUSOBOD_H
#define YUNUSOBOD_H

#include <iostream>
#include <string>
#include "Station.h"

class Yunusobod : public Station
{

public:
	Yunusobod();



	virtual std::string getStation(int j);

};

#endif
