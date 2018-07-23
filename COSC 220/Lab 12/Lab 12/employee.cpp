#include <iostream>
using namespace std;

#include "employee.h"

Employee::Employee(const string&, const string&, const string&, double)
{
  last_name = last;
  first_name = first;
  job_title = job;
  set_base_salary(base);
}

double Employee::get_base_salary() const
{
  return base_salary;
}

string Employee::get_first_name() const
{
  return first_name;
}

string Employee::get_job_title() const
{
  return job_title;
}

string Employee::get_last_name() const
{
  return last_name;
}

void Employee::set_base_salary(double base)
{
  base_salary = ( base < 0.0 ) ? 0.0 : base;
}

void Employee::set_first_name(const string& first)
{
  first_name=first;
}

void Employee::set_job_title(const string& job)
{
  job_title=job;
}

void Employee::set_last_name(const string& last)
{
  last_name=last;
}

double Employee::calculate_salary() const
{
  return base_salary;
}

void Employee::print_all() const
{
  cout << "Last Name: " << last_name << endl;
  cout << "First Name: " << first_name << endl;
  cout << "Job Title: " << job_title << endl;
  cout << "Base Salary: " << base_salary << endl;
}

void Employee::print_first_last() const
{
  cout << "Last Name: " << last_name << endl;
  cout << "First Name: " << first_name << endl;
}

void Employee::print_job() const
{
   cout << "Job Title: " << job_title << endl;
}

void Employee::print_salary() const
{
  cout << "Base Salary: " << base_salary << endl;
}



