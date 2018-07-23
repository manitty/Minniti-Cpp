#include <iostream>
using namespace std;



Executive::Executive(const string& last, const string& first, const string& job, double base, double bonus, double stock): Manager( last, first, job, base, bonus)
{
 set_stock_option(stock);
}

void Executive::set_stock_option(double stock)
{
	stock_option = (stock < 0.0) ? 0.0 : stock;
}

double Executive::get_stock_option() const
{
	return stock_option;
}

double Executive::calculate_executive_salary() const
{
	return calculate_manager_salary() + stock_option;
}

void Executive::print_stock_opton() const
{
	cout << "Stock Option: " << stock_option << endl;
}

void Executive::print_all_executive() const
{
	print_all_manager();
	cout << "Stock Option: " << stock_option << endl;
}
