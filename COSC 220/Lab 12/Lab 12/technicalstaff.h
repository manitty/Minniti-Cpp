#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

#ifndef TECHNICALSTAFF_H
#define TECHNICALSTAFF_H

class Technicalstaff : public Employee{

private:
	double profit_sharing;

public:
	Technicalstaff(const string&, const string&, const string&, double = 0.0, double = 0.0);

	void set_profit_sharing(double);
	double get_profit_sharing() const;

	double calculate_techstaff_salary() const;
	void print_profit_sharing() const;
	void print_all_techstaff() const;

};

#endif