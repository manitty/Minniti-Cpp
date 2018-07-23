#include <iostream>
#include <string>
using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee{
  
private:
  string last_name;
  string first_name;
  string job_title;
  double base_salary;
  
public:
  Employee(const string&, const string&, const string&, double=0.0);
  
  void set_first_name(const string&);
  string get_first_name() const;
 
  void set_last_name(const string&);
  string get_last_name() const;
  
  void set_job_title(const string&);
  string get_job_title() const;
  
  void set_base_salary(double);
  double get_base_salary() const;
  
  double calculate_salary() const;
  void print_first_last() const;
  void print_salary() const;
  void print_job() const;
  void print_all() const;
};

#endif