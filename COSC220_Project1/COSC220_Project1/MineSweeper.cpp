//Nick Riley
//Project 1
//Created 7:56 pm

#include "GameBoard.h"
#include <iostream>

using namespace std;

int main(){
//Variable declaration 
int height,
	width,
	choice,
	coord1,
	coord2,
	mines;
bool winnerC,
	 winnerH;
//Main menu
cout << "Hello, Welcome to Minesweeper, Please enter \nthe height and width of the board you would like to create: \n" << endl;
cout << "Height: " << endl;
cin >> height;
cout << "Width:" << endl;
cin >> width;
cout << "Now enter the number of mines you would like to set" << endl;
cin >> mines;

while (mines > height * width){
	cout << "sorry, the amount of mines entered will not fit on the board \n try again:" << endl;
	cin >> mines;
}

	GameBoard mainBoard(height,width,mines);
	mainBoard.buildBoard();
	mainBoard.setMines();
	mainBoard.printBoard();
//Game menu
do{ 
	cout << "Enter what move you would like to make: " << endl;
	cout << " 1) uncover a spot" << endl;
	cout << " 2) flag a spot" << endl;
	cout << " 3) quit " << endl;
	cin >> choice;
	
	if(choice < 1 || choice > 3)
		cout << "Sorry, invalid choice... please try again " << endl << endl;
	else if (choice == 1){
		cout << "enter the first coordinate you would like to uncover" << endl;
		cin >> coord1;
		cout << "enter the second coordinate you would like to uncover" << endl;
		cin >> coord2;
			mainBoard.uncover(coord1,coord2);
			mainBoard.printBoard();
			winnerC = mainBoard.iscomputerWin();
			winnerH = mainBoard.isplayerWin();

		}
	else if(choice == 2){
		cout << "enter the first coordinate you would like to flag" << endl;
		cin >> coord1;
		cout << "enter the second coordinate you would like to flag" << endl;
		cin >> coord2;
			mainBoard.toggleFlag(coord1,coord2);
			mainBoard.printBoard();

	}
}
while (choice != 3);

}
