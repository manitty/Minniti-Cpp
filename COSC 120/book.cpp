/*This program will read a data file that contains book store sales for 12
months. Each month record will contain 6 category book sales (Math, CS, Physics,
Chemistry, Biology, Geography). The file will be processed by the program and will
produce a report.
The report contains the following parts:
1) The total, highest and lowest sales for each month among 6 category book sales
2) The total, highest and lowest sales for each category book among 12 month.
3) Sorting 12 months in descendent order of the total sale
4) Sorting 6 book categories in descendent order of the total sale
5) Search the sale by user inputting the month and book category*/



//Paul Minniti



#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;





const int MONTH=12, BOOK=6;
void btotal(int[MONTH][BOOK], int&, int&, int&, int&, int&, int&);
void bhigh(int[MONTH][BOOK]);
void blow(int[MONTH][BOOK]);
int mtotal(int[MONTH][BOOK], int);
void mhigh(int[MONTH][BOOK], int);
void mlow(int[MONTH][BOOK], int);

int main()
{
	int mSearch = 0, cSearch = 0;
	int msales[12][2];
	int bsales[6][2];
	int book1 = 0, book2 = 0, book3 = 0, book4 = 0, book5 = 0, book6;
	int bookstore[MONTH][BOOK];
	ifstream inFile;
	inFile.open("sale.dat");

	if (!inFile)
		cout << "problem" << endl;

	//The total, highest and lowest sales for each month among 6 category book sales
	//The total, highest and lowest sales for each category book among 12 month
	cout << setw(4) << "Month	Math	CS	Psy	Chem	Bio	Geo	Total	High	Low" << endl;
	while (inFile.good())
	{
		for (int i = 0; i < MONTH; i++)
		{
			if (i == 0){
				cout << "Jan	";

			}
			if (i == 1){
				cout << "Feb	";

			}
			if (i == 2){
				cout << "Mar	";

			}
			if (i == 3){
				cout << "Apr	";

			}
			if (i == 4){
				cout << "May	";

			}
			if (i == 5){
				cout << "Jun	";

			}
			if (i == 6){
				cout << "Jul	";

			}
			if (i == 7){
				cout << "Aug	";

			}
			if (i == 8){
				cout << "Sep	";

			}
			if (i == 9){
				cout << "Oct	";

			}
			if (i == 10){
				cout << "Nov	";

			}
			if (i == 11){
				cout << "Dec	";

			}
			
			for (int j = 0; j < 6; j++)
			{
				inFile >> bookstore[i][j];
				cout << bookstore[i][j] << "	";
				j;
			}
			msales[i][0] = i;
			msales[i][1]= mtotal(bookstore, i);
			mhigh(bookstore, i);
			cout << "	";
			mlow(bookstore, i);
			cout << endl;
			
			
		}
		
		btotal(bookstore,book1,book2,book3,book4,book5,book6);
		bhigh(bookstore);
		cout << endl;
		blow(bookstore);

		
	}
	//Sorting 12 months in descendent order of the total sale
	for (int x = 0; x<MONTH; x++)
	{
		for (int y = 0; y < MONTH - 1; y++)
		{

			if (msales[y][1] < msales[y + 1][1])
			{
				int set = msales[y + 1][1];
				int unset = msales[y + 1][0];

				msales[y + 1][1] = msales[y][1];
				msales[y + 1][0] = msales[y][0];

				msales[y][1] = set;
				msales[y][0] = unset;
			}
		}
	}
	
	cout << endl << endl;
	cout << " Sorting month in descending order of total sale" << endl;
	for (int j = 0; j < MONTH; j++){
		if (msales[j][0] == 0){
			cout << "Jan  ";
		}
		if (msales[j][0] == 1){
			cout << "Feb  ";
		}
		if (msales[j][0] == 2){
			cout << "Mar  ";
		}
		if (msales[j][0] == 3){
			cout << "Apr  ";
		}
		if (msales[j][0] == 4){
			cout << "May  ";
		}
		if (msales[j][0] == 5){
			cout << "Jun  ";
		}
		if (msales[j][0] == 6){
			cout << "Jul  ";
		}
		if (msales[j][0] == 7){
			cout << "Aug  ";
		}
		if (msales[j][0] == 8){
			cout << "Sep  ";
		}
		if (msales[j][0] == 9){
			cout << "Oct  ";
		}
		if (msales[j][0] == 10){
			cout << "Nov  ";
		}
		if (msales[j][0] == 11){
			cout << "Dec  ";
		}
		cout << msales[j][1];
		cout << endl;

	}
	for (int i = 0; i < BOOK; i++){
		bsales[i][0] = i;
	}
	bsales[0][1] = book1;
	bsales[1][1] = book2;
	bsales[2][1] = book3;
	bsales[3][1] = book4;
	bsales[4][1] = book5;
	bsales[5][1] = book6;
	//Sorting 6 book categories in descendent order of the total sale
	for (int x = 0; x< BOOK; x++)
	{
		for (int y = 0; y < BOOK - 1; y++)
		{

			if (bsales[y][1] < bsales[y + 1][1])
			{
				int set = bsales[y + 1][1];
				int unset = bsales[y + 1][0];

				bsales[y + 1][1] = bsales[y][1];
				bsales[y + 1][0] = bsales[y][0];

				bsales[y][1] = set;
				bsales[y][0] = unset;
			}
		}
	}
	cout << endl << endl;

	cout << "Sorting Book in descending order of total sale" << endl;
	for (int j = 0; j < BOOK; j++)
	{
		if (bsales[j][0] == 0)
			cout << "Math";
		if (bsales[j][0] == 1)
			cout << "CS";
		if (bsales[j][0] == 2)
			cout << "Psy";
		if (bsales[j][0] == 3)
			cout << "Chem";
		if (bsales[j][0] == 4)
			cout << "Bio";
		if (bsales[j][0] == 5)
			cout << "Geo";
		cout << bsales[j][1];
	}
	//Search the sale by user inputting the month and book category
	cout << endl << endl;
	while (mSearch != -1)
	{
		cout << "Please Input Number of Month and book category you want to search ( -1 for exit)" << endl;
		cout << "Month";
		cin >> mSearch;

		if (mSearch == -1)
			break;
		
		cout << "Book";
		cin >> cSearch;
		cout << "The Total sale is " << bookstore[mSearch - 1][cSearch - 1] << endl;
	}
	cout << "BYE!" << endl;
	inFile.close();
}

//Function that finds the book totals
void btotal(int bookstore[MONTH][BOOK], int &book1, int &book2, int &book3, int &book4, int &book5, int &book6){
	int setb0 = 0, setb1 = 0, setb2 = 0, setb3 = 0, setb4 = 0, setb5 = 0;
	for (int i = 0; i < MONTH; i++){
		setb0 += bookstore[i][0];
		setb1 += bookstore[i][1];
		setb2 += bookstore[i][2];
		setb3 += bookstore[i][3];
		setb4 += bookstore[i][4];
		setb5 += bookstore[i][5];

	}
	book1 = setb0;
	book2 = setb1;
	book3 = setb2;
	book4 = setb3;
	book5 = setb4;
	book6 = setb5;
	
	cout << endl << "Total	" << setb0 << " " << setb1 << " " << setb2 << " " << setb3 << " " << setb4 << " " << setb5 << endl;


}



//Function that finds the lowest book sales
 void blow(int bookstore[MONTH][BOOK]){
	int low = bookstore[0][0];
	cout << "Low	";
	for (int i = 0; i < BOOK; i++){
		for (int j = 0; j < MONTH; j++) {
			if (bookstore[j][i] < low){
				low = bookstore[j][i];

			}

		}
		cout << low << "	";
		low = 99999999;
	}
	cout << endl;
}

 //Function that finds the highest book sales
void bhigh(int bookstore[MONTH][BOOK]){
	int max = bookstore[0][0];
	cout << "High	";
	for (int i = 0; i < BOOK; i++){
		for (int j = 0; j < MONTH; j++) {
			if (bookstore[j][i] > max){
				max = bookstore[j][i];

			}
			
		}
		cout << max << "	";
		max = 0;
	}

}

//Function that finds month totals 
int mtotal(int bookstore[MONTH][BOOK], int month){
	int total1 = 0;
	for (int i = 0; i < BOOK; i++){
		total1 += bookstore[month][i];

	}
	cout << total1 << "	";
	return total1;


}
//Function that finds the month lows
void mlow(int bookstore[MONTH][BOOK], int month){
	int low = bookstore[month][0];
	for (int i = 0; i < BOOK; i++){
		if (bookstore[month][i] <low){
			low = bookstore[month][i];
		}

	}
	cout << low;
}

//Function that finds the month highs 
void mhigh(int bookstore[MONTH][BOOK], int month){
	int max = bookstore[month][0];
	for (int i = 0; i < BOOK; i++){
		if (bookstore[month][i] > max){
			max = bookstore[month][i];
		}

	}
	cout << max;
}



