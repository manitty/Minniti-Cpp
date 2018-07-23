#include <iostream>
#include <iomanip>
using namespace std;



struct taxpayer
{
	char name[25];
	long int social;
	float taxrate;
	float income;
	float taxes;
};


int main()
{
	taxpayer citizen1 = { "Tim McGuiness", 255871234, .35 };
	taxpayer citizen2 = { "John Kane", 278990582, .29 };

	cout << fixed << showpoint << setprecision(2);

	cout << citizen1.name << " Please enter your income for this year: ";
	cin >> citizen1.income;
	citizen1.taxes = citizen1.income*citizen1.taxrate;

	cout << "Name: " << citizen1.name << endl;
	cout << "Social Security Number: " << citizen1.social << endl;

	cout << "Taxes due for this year: $" << citizen1.taxes << endl << endl;

	cout << citizen2.name << " Please enter your income for this year: ";
	cin >> citizen2.income;
	citizen2.taxes = citizen2.income*citizen2.taxrate;

	cout << "Name: " << citizen2.name << endl;
	cout << "Social Security Number: " << citizen2.social << endl;

	cout << "Taxes due for this year: $" << citizen2.taxes << endl << endl;



	return 0;
}