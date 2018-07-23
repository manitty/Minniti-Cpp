#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

#ifndef MANAGER_H
#define MANAGER_H

class Manager : public Employee{

private:
  double bonus_pay;

public:
    Manager(const string&, const string&, const string&, double = 0.0, double=0.0);
    
    void set_bonus_pay(double);
    double get_bonus_pay() const;
    
    double calculate_manager_salary() const;
    void print_bonus_pay() const;
    void print_all_manager() const;
    
};

#endif