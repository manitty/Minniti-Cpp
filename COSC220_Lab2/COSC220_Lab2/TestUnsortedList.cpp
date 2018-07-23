//Nick Riley
//Created 12:53 2//11/14
//Lab 2 - Linked List

#include <iostream>
#include "UnsortedList.h"
using namespace std;

int main(){
	int choice;
	cout << "Linked List Menu: " << endl;
	cout << "     1)Insert a node" << endl;
	cout << "     2)Delete a node" << endl;
	cout << "     3)Print the List" << endl;
	cout << "     4)Search a node" << endl;
	cout << "     5)Quit the program" << endl;
	cin >> choice;
	
		while (choice != 5){
			if (choice ==1)
				cout << "1";
			else if (choice ==2)
				cout << "2";
			else if (choice == 3)
				cout << "3";
			}
	return 0;
}	
