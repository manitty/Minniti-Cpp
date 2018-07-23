#include <iostream>
#include <string>
#include "technicalstaff.h"
using namespace std;

#ifndef SOFTWAREENGINEER_H
#define SOFTWREENGINEER_H

class Software_enginner : public Technicalstaff
{
private:
	double overtime;
public:
	Technicalstaff(const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0);



};

#endif