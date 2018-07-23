
#include <iostream> 
#include <string>
using namespace std;

void laser(int location);
void guess();
void score();
void printBoard();
void quit();
void printContinue();
void setBaffle();

int main(){
	//varbable declarations
	char choice;
	int laserPosition = 0;
	//Welcome Message
    cout << "Welcome to Baffle, please enter a letter from the list" << endl;	
	cout << " L to shoot a laser \n G to guess \n S for the score \n P to print the baffles \n Q to quit the game \n C to print the baffles but continue playing" << endl;
	cin >> choice;

	setBaffle();
	//User choice calls the function for the appropriate game method
	
		switch (choice)
		{
		case 'L':
		laser(laserPosition);
		break;
		case 'G':
			//guess();
		break;
		case 'S':
			//score();
		break;
		case 'P':
			printBoard();
		break;
		case 'Q':
			//quit();
		break;
		case 'C':
			//printContinue();
		break;
		}


}


void laser(int location){
	cout << "Please input a location to shoot from, an integer between 0 - 39" << endl;
	cin >> location;

	//Location of laser shot validation
	while (location != 0 && location != 1 && location != 2 && location != 3 && location != 4 && location != 5 && location != 6 && location != 7 && location != 8 && location != 9 && 
		location != 10 && location != 11&& location != 12 && location != 13 && location != 14 && location != 15 && location != 16 && location != 17 && location != 18 && location != 19 && 
		location != 20 && location != 21 && location != 22 && location != 23 && location != 24 && location != 25 && location != 26 && location != 27 && location != 28 && location != 29 && 
		location != 30 && location != 31 && location != 32 && location != 33 && location != 34 && location != 35 && location != 36 && location != 37 && location != 38 && location != 39){
			cout << "---Guess out of bounds, please input the location again---" << endl;
			cin >> location;
	}
	
}


void printBoard(){
	cout << "   10 11 12 13 14 15 16 17 18 19     " << endl;
	cout << "9 -+--+--+--+--+--+--+--+--+--+- 20 " << endl;
	cout << "8 -+--+--+--+--+--+--+--+--+--+- 21 " << endl;
	cout << "7 -+--+--+--+--+--+--+--+--+--+- 22 " << endl;
	cout << "6 -+--+--+--+--+--+--+--+--+--+- 23 " << endl;
	cout << "5 -+--+--+--+--+--+--+--+--+--+- 24 " << endl;
	cout << "4 -+--+--+--+--+--+--+--+--+--+- 25 " << endl;
	cout << "3 -+--+--+--+--+--+--+--+--+--+- 26 " << endl;
	cout << "2 -+--+--+--+--+--+--+--+--+--+- 27 " << endl;
	cout << "1 -+--+--+--+--+--+--+--+--+--+- 28 " << endl;
	cout << "0 -+--+--+--+--+--+--+--+--+--+- 29 " << endl;
	cout << "   39 38 37 36 35 34 33 32 31 39     " << endl;
}

void setBaffle(){
	int	baffle1 = rand(),
		baffle2 = rand(),
		baffle3 = rand(),
		baffle4 = rand();


	cout << baffle1 << endl;
	cout << baffle2 << endl;
	cout << baffle3 << endl;
	cout << baffle4 << endl;
}