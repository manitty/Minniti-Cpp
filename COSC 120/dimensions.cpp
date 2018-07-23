#include <iostream>
#include <iomanip>
using namespace std;


struct taxpayer
{
	float income;
	float taxrate;
	float taxes;
};

int main()
{
	taxpayer citizen[5];

	cout << fixed << showpoint << setpercision(2);

	cout << "Please enter the annual income and tax rate for 5 tax payers: ";
	cout << endl << endl << endl;

	for (int count = 0; count < 5; count++)
	{
		cout << "Enter this years income for tax payer" << (count + 1);
		cout << ": ";

		cin >> citizen[count].income;

		cout << "Enter the tax rate for tax payer #" << (count + 1);
		cout << ": ";

		cin >> citizen[count].taxrate;
		citizen[count].taxes = citizen[count].income * citizen[count].taxrate;

		cout << endl;
	}
	cout << "Taxes due for this year: " << endl << endl;

	for (int index = 0; index < 5; index++)
	{
		cout << "Tax Payer #" << (index + 1) << ": " << "$ "
			<< citizen[index].taxes << endl;

	}



	return 0;
}