// Nick Riley
// Lab 3
// Created 2/25/14 12:10 pm

#include <iostream>
#include "SortedList.h"
#include "Student.h"

using namespace std;
void characterList();

int main(){
  // variable declaration
    int choice;
  // primary menu choice
    cout << "Enter a number from the menu (no letters)" << endl;
    cout << "1 - List of characters" << endl;
    cout << "2 - List of integers" << endl;
    cout << "3 - List of students" << endl;
  	cin >> choice;
  	
  	if (choice == 1)
  		characterList();
  		
    
    return 0;
}

//***************************************
//***************************************
//***************************************

template <class T>
void characterList(){
  
  //variable declaration 
  	sortedList <char> info;
  	T *create = new sortedList <T>;
  	int choice;
  	char ch;
  
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
           cout << "Enter a character" << endl;
           create -> insert(ch);
       }
       else if (choice == 2)
       {
           cout << "Enter a student ID to remove" << endl;
           cin >> ch;
           create -> remove(ch);
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

}