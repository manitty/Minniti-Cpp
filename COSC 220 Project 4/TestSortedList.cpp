#include <iostream>
#include “Student.h”
#include “Node.h”
#include <string>

using namespace std;

int main()
{
	SortedList *make = new SortedList();
	Student info;
	int choice;
	string first;
	string last;
       
	cout << "Menu:" << endl;
	cout << "1) Insert a node" << endl;
	cout << "2) Delete a node" << endl;
	cout << "3) Print List" << endl;
	cout << "4) Get length" << endl;
	cout << "5) Quit" << endl;
	cin >> choice;

	while(choice >= 1 && choice < 5){

		if(choice == 1){
			cout << "Enter a id number: " << endl;
			cin >> info.studentID;
			cout << "Enter first name: " << endl;
			cin >> info.firstName;
			cout << "Enter last name: " << endl;
			cin >> info.lastName;
			make->insert(info);
		}
		if(choice == 2){
			cout << "Enter a student id to remove: ";
			cin >> info.studentID;
			make -> remove(info);
		}
		if(choice == 3){
			make -> printList();
		}
		if(choice == 4)
		{
			cout << "The length is: " << make->getLength() << endl;
		}

		cout << "Menu:" << endl;
		cout << "1) Insert a node" << endl;
		cout << "2) Delete a node" << endl;
		cout << "3) Print List" << endl;
		cout << "4) Get length" << endl;
		cout << "5) Quit" << endl;
		cin >> choice;
	}




	return 0;
}
