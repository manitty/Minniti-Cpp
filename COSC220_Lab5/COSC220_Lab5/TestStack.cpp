//Nick Riley
//Created 9:37 pm
//Lab 5

#include <iostream>
#include <string>
#include "Stack.cpp"
#include "Student.cpp"
using namespace std;

int test_Integer();
int test_Students();

int main(){
	int type;
	
	cout << "Please choose what type of list you would like to make: " << endl;
	cout << "1) Students" << endl;
	cout << "2) Integers" << endl;
	cout << "3) Quit" << endl;
	cin >> type;
	
	while (type > 0 && type < 3)
	{
		if(type == 1)
			test_Students();
		else if(type == 2)
			test_Integer();
	}
	
	return 0;
}

int test_Integer()
{
	Stack<int> list;
	int choice, 
		number;
	
	cout << "Please choose what you would like to do" << endl;
	cout << "1) Display the status of the stack" << endl;
	cout << "2) Push a value into the stack" << endl;
	cout << "3) Pop a value from the stack" << endl;
	cout << "4) Print the stack" << endl;
	cin >> choice;
	
	while (choice > 0 || choice < 5)
	{
		if (choice == 1)
		{
			bool full;
			full = list.isEmpty();
			if(full == true)
				cout << "The stack is empty" << endl;
			else 
				cout << "The stack has members" << endl;
		}
		else if (choice == 2)
		{
			cout << "Enter a number to insert into the stack" << endl;
			cin >> number;
			list.push(number);
		}
		else if(choice == 3)
		{
			int pop;
			pop = list.pop();
			cout << "The integer that was popped from the stack is " << pop << endl;
		}
		else if(choice == 4)
			list.printStack();
		
		cout << "Please choose what you would like to do" << endl;
		cout << "1) Display the status of the stack" << endl;
		cout << "2) Push a value into the stack" << endl;
		cout << "3) Pop a value from the stack" << endl;
		cout << "4) Print the stack" << endl;
		cin >> choice;
	}
	return 0;
}


int test_Students()
{
	Stack<Student> list;
	int choice, 
		idNumber;
	string first,
			last;
	
	cout << "Please choose what you would like to do" << endl;
	cout << "1) Display the status of the stack" << endl;
	cout << "2) Push a value into the stack" << endl;
	cout << "3) Pop a value from the stack" << endl;
	cout << "4) Print the stack" << endl;
	cin >> choice;
	
	while (choice > 0 || choice < 5)
	{
		if (choice == 1)
		{
			bool full;
			full = list.isEmpty();
			if(full == true)
				cout << "The stack is empty" << endl;
			else 
				cout << "The stack has members" << endl;
		}
		else if (choice == 2)
		{
			cout << "Enter an ID number" << endl;
			cin >> idNumber;
			cout << "Enter a first name" << endl;
			cin >> first;
			cout << "Enter a last name" << endl;
			cin >> last;
			Student info(idNumber, first, last);
			list.push(info);
			
		}
		else if(choice == 3)
		{
			Student pop;
			pop = list.pop();
			cout << "The student that was popped from the stack is " << pop << endl;
		}
		else if(choice == 4)
			list.printStack();
		
		cout << "Please choose what you would like to do" << endl;
		cout << "1) Display the status of the stack" << endl;
		cout << "2) Push a value into the stack" << endl;
		cout << "3) Pop a value from the stack" << endl;
		cout << "4) Print the stack" << endl;
		cin >> choice;
	}
	return 0;
}
