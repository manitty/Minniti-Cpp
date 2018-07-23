//Node.cpp

#include "Node.h"
#include  "LinkedList.h"
#include<iostream>
using namespace std;



Node :: Node(){
    cout << "enter last name" << endl;
    cin >> lastName;
    cout << "enter first name" << endl;
    cin >> firstName;
    cout << "enter idNumber" << endl;
    cin >> idNumber;
    next = NULL;

}



void Node :: printNode(){
    cout << "the first name is " << firstName;
    cout << " the last name is " << lastName;
    cout << " the idNumber is " << idNumber << endl;


}

