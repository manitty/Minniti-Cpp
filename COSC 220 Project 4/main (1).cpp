#include <iostream>
#include <stdlib.h>
using namespace std;


int roll();
int addRoll(int b, int c);

int main ()
{
	int choice, roll1, roll2, target, result;
	//Introduction for the game
	cout << "Welcome!" << endl;
	cout << "You are playing The Dice Game." << endl;
	cout << "The game begins by having the player" << endl;
	cout << "toss two dice. Depending on the total," << endl;
	cout << "we can have an immediate winner. Otherwise," << endl;
	cout << "the game continues. If the total is a 2, 3, or 12, the house wins." << endl;
	cout << "If the total is a 7 or an 11, the player wins." << endl;
	cout << "If the total is 4, 5, 6, 8, 9, or 10, the game continues." << endl;
	cout << "The total from the initial toss becomes the target value. The player continues tossing the" << endl;
	cout << "two dice until the total matches the target or the total is 7. If the total is 7, the house wins" << endl;
	cout << "otherwise, the player wins." << endl;
	cout << "To roll the dice, enter 1" << endl;
	cin >> choice;
//Below are two random 
		roll1 = roll();
		roll2 = roll();
			result = addRoll(roll1, roll2);
		cout << "You rolled a " << result << endl;		
// Determines if the results of the first roll produce a win
		if (result == 7 || result == 11){
			cout << "Congrats, you won!" << endl;
		}
		if(result == 2 || result == 3 || result == 12){
			cout << "Sorry, The House won! " << endl;
		}
// If first roll didnt produce a win program then produces a second roll	
		else{
			cout << "Please enter 1 to roll again " << endl;
			cin >> choice;
		
		while (choice == 1){
			roll1 = roll();
			roll2 = roll();
			target = addRoll(roll1, roll2);
	
			cout << "You rolled a " << target << endl;
			if(result == target)// determines if the second roll equals the first roll in which case player wins
				cout << "Congrats, you won" << endl;
			else if(target == 7)// determines if the second roll equals seven in which case house wins
				cout << "Sorry, the house won" << endl;
			else// allows for replay
				cout << "Please enter 1 to roll again " << endl;
				cin >> choice;
		}
	}

}
//Below is a roll function for a random number
int roll(){
	    srand(time(0));
		int a = 1 + (rand() % 6);
		return a;
}
//Below is an addroll funtion
int addRoll(int c, int b){
		int a = c + b;
		return a;
}
