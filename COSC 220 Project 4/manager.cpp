#include <iostream>
using namespace std;



Manager::Manager(const string& last, const string& first, const string& job, double base, double bonus) : Employee(last, first, job, base){
	set_bonus_pay(bonus);
}

void Manager::set_bonus_pay(double bonus)
{
  bonus_pay = (bonus < 0.0)? 0.0: bonus;
}

double Manager::get_bonus_pay() const
{
  return bonus_pay;
}

double Manager::calculate_manager_salary() const
{
 return get_base_salary()+bonus_pay;
}

void Manager::print_bonus_pay() const
{
  cout << "Bonus Pay: " << bonus_pay << endl;
}

void Manager::print_all_manager() const
{
  print_all();
  cout << "Bonus Pay: " << bonus_pay << endl;  
}
