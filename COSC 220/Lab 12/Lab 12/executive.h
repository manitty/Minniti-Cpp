#include <iostream>
#include <string>
#include "employee.h"
#include "manager.h"
using namespace std;

#ifndef EXECUTIVE_H
#define EXECUTIVE_H

class Executive: public Manager{
  
private:
  double stock_option;
  
public:
    Executive(const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0);
    
    void set_stock_option(double);
    double get_stock_option() const;
    
    double calculate_executive_salary() const;
    void print_stock_opton() const;
    void print_all_executive() const;
     
};

#endif
