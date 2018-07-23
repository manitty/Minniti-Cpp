// Nick Riley
// Lab 3
// Created 2/25/14 12:10 pm

#include <iostream>
using namespace std;
#include "SortedList.h"

int main(){
  // variable declaration
	sortedList *create = new sortedList();
	students info;
	int choice;
	string first, last;
  // menu choice
  cout << "Enter a number from the menu (no letters):" << endl;
  cout << "1 - Insert a student" << endl;
  cout << "2 - Remove a student" << endl;
  cout << "3 - Print the list" << endl;
  cout << "4 - Display the length" << endl;
  cout << "5 - Quit the program" << endl;
	cin >> choice;

  while (choice > 0 && choice <5)
  {
   	if (choice == 1)
   	{
   		cout << "Enter an id number" << endl;
   		cin >> info.studentID;
   		cout << "Enter first name" << endl;
   		cin >> info.firstName;
   		cout << "Enter last name" << endl;
   		cin >> info.lastName;
   		create -> insert(info);
   	}
   	else if (choice == 2)
   	{
   		cout << "Enter a student ID to remove" << endl;
   		cin >> info.studentID;
   		create -> remove(info);
   	}
   	else if (choice == 3)
   	{
   		create -> print();
   	}
   	else if (choice == 4)
   	{
   		if (create -> getLength() == 0)
   			cout << "The list is empty" << endl;
   		else 
   			cout << "The length is: " << create -> getLength() << endl;
   	}
	cout << "Enter a number from the menu (no letters):" << endl;
  	cout << "1 - Insert a student" << endl;
 	cout << "2 - Remove a student" << endl;
  	cout << "3 - Print the list" << endl;
  	cout << "4 - Display the length" << endl;
  	cout << "5 - Quit the program" << endl;
		cin >> choice;
	}
	return 0;
}
