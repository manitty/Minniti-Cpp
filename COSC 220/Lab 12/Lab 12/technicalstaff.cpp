#include <iostream>
using namespace std;



Technicalstaff::Technicalstaff(const string& last, const string& first, const string& job, double base, double profit) : Employee(last, first, job, base)
{
	set_profit_sharing(profit);
}

void Technicalstaff::set_profit_sharing(double profit)
{
	profit_sharing = (profit < 0.0) ? 0.0 : profit;
}

double Technicalstaff::get_profit_sharing() const
{
	return profit_sharing;
}

double Technicalstaff::calculate_techstaff_salary() const
{
	return get_base_salary() + profit_sharing;
}

void Technicalstaff::print_profit_sharing() const
{
	cout << "Profit Sharing: " << profit_sharing << endl;
}

void Technicalstaff::print_all_techstaff() const
{
	print_all();
	cout << "Profit Sharing: " << profit_sharing << endl;
}

