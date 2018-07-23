#include <iostream>
#include <stdlib.h>
using namespace std;


int roll();
int addRoll(int b, int c);

int main ()
{
	//variable declaration
	int choice, roll1, roll2, target, result;

	cout << "Welcome to the dice game, to roll the dice, enter 1" << endl;
	cin >> choice;

		roll1 = roll();
		roll2 = roll();
			result = addRoll(roll1, roll2);
		cout << "You rolled a " << result << endl;		

		if(result == 7 || result == 11){
			cout << "Congrats, you won!" << endl;
		}
		if(result == 2 || result == 3 || result == 12){
			cout << "Sorry, you crapped out! " << endl;
		}
		
		else{
			target = result;
			cout << "Please enter 1 to roll again " << endl;
				cin >> choice;
		while(choice == 1){
			roll1 = roll();
			roll2 = roll();
			result = addRoll(roll1,roll2);

			cout << "You rolled a " << result << endl;
			if(result == target)
				cout << "Congrats, you won" << endl;
			else if(result == 7)
				cout << "Sorry, the house won" << endl;
			else
				cout << "Please enter 1 to roll again " << endl;
				cin >> choice;
		}
	}

}

int roll(){
		int a = 1 + (rand() % 6);
		return a;
}

int addRoll(int c, int b){
		int a = c + b;
		return a;
}
