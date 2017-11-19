#ifndef CHILONZOR_H
#define CHILONZOR_H
#include <iostream>
#include <string>
#include "Station.h"

using namespace std;

class Chilonzor : public Station
{
 public:
 	Chilonzor();
	virtual std::string getStation(int j);
};
#endif