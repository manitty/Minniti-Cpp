#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;





const int MONTH=12, BOOK=6;
int bookstore[12][6];
int monthTotal(int[MONTH][BOOK], int);
void monthHigh(int[MONTH][BOOK], int);
void monthLow(int[MONTH][BOOK], int);
void bookTotal(int[MONTH][BOOK], int&, int&, int&, int&, int&, int&);
void bookHigh(int[MONTH][BOOK]);
void bookLow(int[MONTH][BOOK]);
int bookSales(int[MONTH][BOOK], int);


int main()
{
	int monthSearch = 0, catSearch = 0, numMonths=0, numBooks=0;
	int book1 = 0, book2 = 0, book3 = 0, book4 = 0, book5 = 0, book6 = 0;
	int table[MONTH][BOOK];
	int monthSales[12][2];
	int bookSales[6][2];

	ifstream inFile;
	inFile.open("sales.dat");

	if (!inFile)
		cout << "problem" << endl;
	
	while (inFile.good());
	{

		cout << setw(2) << "Month	Math	CS	Psy	Chem	Bio	Geo	Total	High	Low" << endl;

		for (int numMonths = 0; numMonths < MONTH; numMonths++)//Reads in totals into array
		{
			if (numMonths == 0)
				cout << "Jan	";
			if (numMonths == 1)
				cout << "Feb	";
			if (numMonths == 2)
				cout << "Mar	";
			if (numMonths == 3)
				cout << "Apr	";
			if (numMonths == 4)
				cout << "May	";
			if (numMonths == 5)
				cout << "Jun	";
			if (numMonths == 6)
				cout << "Jul	";
			if (numMonths == 7)
				cout << "Aug	";
			if (numMonths == 8)
				cout << "Sep	";
			if (numMonths == 9)
				cout << "Oct	";
			if (numMonths == 10)
				cout << "Nov	";
			if (numMonths == 11)
				cout << "Dec	";
		}
		for (int numBooks = 0; numBooks < 6; numBooks++)
		{
			inFile >> table[numMonths][numBooks];
			cout << table[numMonths][numBooks] << "	";
			numBooks;
		}
			monthSales[numMonths][0] = numMonths;
			monthSales[numMonths][1]=monthTotal(table, numMonths);
			monthHigh(table, numMonths);
			cout << "	";
			monthLow(table, numMonths);
			cout << endl;	
		}
				bookTotal(table,book1,book2,book3,book4,book5,book6);//Passes variables for total book sales
				bookHigh(table);
				cout << endl;
				bookLow(table);
	}

	for (int x = 0; x<nmonths; x++)//Orders monthly sales in descending order
	{
		for (int y = 0; y < nmonths - 1; y++)
		{

			if (monthSales[y][1] < monthSales[y + 1][1])
			{
				int temp = monthSales[y + 1][1];
				int tmpMonth = monthSales[y + 1][0];

				monthSales[y + 1][1] = monthSales[y][1];
				monthSales[y + 1][0] = monthSales[y][0];

				monthSales[y][1] = temp;
				monthSales[y][0] = tmpMonth;
			}
		}
	}
	
	cout << endl;
	cout << endl;
	cout << "Sorting month in descending order of total sale" << endl;
	for (int j = 0; j < nmonths; j++){//Prints out monthly sales
		if (monthSales[j][0] == 0){
			cout << "Jan  ";
		}
		if (monthSales[j][0] == 1){
			cout << "Feb  ";
		}
		if (monthSales[j][0] == 2){
			cout << "Mar  ";
		}
		if (monthSales[j][0] == 3){
			cout << "Apr  ";
		}
		if (monthSales[j][0] == 4){
			cout << "May  ";
		}
		if (monthSales[j][0] == 5){
			cout << "Jun  ";
		}
		if (monthSales[j][0] == 6){
			cout << "Jul  ";
		}
		if (monthSales[j][0] == 7){
			cout << "Aug  ";
		}
		if (monthSales[j][0] == 8){
			cout << "Sep  ";
		}
		if (monthSales[j][0] == 9){
			cout << "Oct  ";
		}
		if (monthSales[j][0] == 10){
			cout << "Nov  ";
		}
		if (monthSales[j][0] == 11){
			cout << "Dec  ";
		}
		cout << monthSales[j][1];
		cout << endl;

	}
	for (int i = 0; i < nbook; i++){
		bookSales[i][0] = i;
	}
	bookSales[0][1] = book1;
	bookSales[1][1] = book2;
	bookSales[2][1] = book3;
	bookSales[3][1] = book4;
	bookSales[4][1] = book5;
	bookSales[5][1] = book6;

	for (int x = 0; x<nbook; x++)//orders total book sales by category
	{
		for (int y = 0; y < nbook - 1; y++)
		{

			if (bookSales[y][1] < bookSales[y + 1][1])
			{
				int temp = bookSales[y + 1][1];
				int tmpMonth = bookSales[y + 1][0];

				bookSales[y + 1][1] = bookSales[y][1];
				bookSales[y + 1][0] = bookSales[y][0];

				bookSales[y][1] = temp;
				bookSales[y][0] = tmpMonth;
			}
		}
	}

	
	cout << endl << endl << "Sorting book category in descending order of total sale" << endl;
	
	for (int j = 0; j < nbook; j++)
	{
		if (bookSales[j][0] == 0)
			cout << "Math  ";
		if (bookSales[j][0] == 1)
			cout << "CS    ";
		if (bookSales[j][0] == 2)
			cout << "Psy   ";
		if (bookSales[j][0] == 3)
			cout << "Chem  ";
		if (bookSales[j][0] == 4)
			cout << "Bio   ";
		if (bookSales[j][0] == 5)
			cout << "Geo   ";
		cout << bookSales[j][1];
		cout << endl;
	}

	while (monthSearch != -1)
	{
		cout << "Please Input Number of Month and book category you want to search ( -1 for exit)" << endl;
		cout << "1 for Math, 2 for CS, 3 for Psy, 4 for Chem, 5 for Bio, 6 for Geo." << endl;
		cout << "Month:";
		cin >> monthSearch;
		if (monthSearch == -1){
			break;
		}
		cout << "Category:";
		cin >> catSearch;
		cout << "The Total sale is " << table[monthSearch - 1][catSearch - 1] << endl;
}
	
	cout << "BYE!" << endl;
	
	inFile.close();
	


}

int monthTotal(int table[nmonths][nbook], int month){//Calculates month totals and returns them
	int total1 = 0;
	int monthTotal[12];
	for (int i = 0; i < nbook; i++){
			total1 += table[month][i];
		
	}
	cout << total1 << "	";
	return total1;


}

void monthHigh(int table[nmonths][nbook], int month)
{
	int max = table[month][0];
	for (int i = 0; i < nbook; i++){
		if (table[month][i] > max){
			max = table[month][i];
		}
	}
	cout << max;
}

void monthLow(int table[nmonths][nbook], int month){//Calculates month lows
	int low = table[month][0];
	for (int i = 0; i < nbook; i++){
		if (table[month][i] <low){
			low = table[month][i];
		}

	}
	cout << low;
}
//Calculates book sale totals
void bookTotal(int table[nmonths][nbook], int &book1, int &book2, int &book3, int &book4, int &book5, int &book6){
	int total0 = 0,total1=0,total2=0,total3=0,total4=0,total5=0;
	for (int i = 0; i < nmonths; i++){
		total0 += table[i][0];
		total1 += table[i][1];
		total2 += table[i][2];
		total3 += table[i][3];
		total4 += table[i][4];
		total5 += table[i][5];

	}
	book1 = total0;
	book2 = total1;
	book3 = total2;
	book4 = total3;
	book5 = total4;
	book6 = total5;
	cout << endl;
	cout << "Total	" << total0 << "	" << total1 << "	" << total2 << "	" << total3 << "	" << total4 << "	" << total5 << endl;


}
void bookHigh(int table[nmonths][nbook]){//Finds highest book sales
	int max = table[0][0];
	cout << "High	";
	for (int i = 0; i < nbook; i++){
		for (int j = 0; j < nmonths; j++) {
			if (table[j][i] > max){
				max = table[j][i];

			}
			
		}
		cout << max << "	";
		max = 0;
	}

}

void bookLow(int table[nmonths][nbook]){//Calculates lowest book sales
	int low = table[0][0];
	cout << "Low	";
	for (int i = 0; i < nbook; i++){
		for (int j = 0; j < nmonths; j++) {
			if (table[j][i] < low){
				low = table[j][i];

			}

		}
		cout << low << "	";
		low = 99999999;
	}
	cout << endl;
}












