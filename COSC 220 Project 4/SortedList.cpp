//SortedList.cpp
//Programmer: Toby Harro
//03/01/2014

#include <iostream>
#include <string>
#include "SortedList.h"
using namespace std;

Student::Student(int id, string first, string last){
  studentID = id;
	firstName = first;
	lastName = last;
}
Student::Student(){
	studentID = 0;
	firstName = " ";
	lastName = " ";
}

Node::Node(Student info, Node *nxt){
	value = info;
	nxt = next;
}
Node::Node(){
	value = Student();
	next = NULL;
}

SortedList::SortedList(){
	list = NULL;
	length = 0;
}

SortedList::~SortedList(){
}

void SortedList::insert(Student info){
	Node *temp = list;
	Node *newNode = new Node;
	newNode->value = info;
	newNode->next = NULL;

	if(list == NULL)
	{
		list = newNode;
		length++;
	}
	else if(list->value.studentID > newNode->value.studentID)
	{
		newNode->next = list;
		list = newNode;
		length++;
	}
	else if(temp->next == NULL)
	{
		temp->next = newNode;
		length++;
	}
	else
	{
		while(temp != NULL && temp != newNode)
		{
			if(temp->next == NULL)
			{
				temp->next = newNode;
				length++;
			}
			else if(temp->next->value.studentID > newNode->value.studentID)
			{
				newNode->next = temp->next;
				temp->next = newNode;
				length++;
			}

			temp = temp->next;
		}
	}
}

void SortedList::remove(Student info){
	if(list == NULL)
	{
		cout << "List is empty" << endl;
	}
	else if(list->value.studentID == info.studentID)
	{
		Node *temp = list;
		list = list->next;
		delete temp;
		length--;
	}
	else{
		Node *prev = list;
		Node *current = list->next;
		bool deleted = false;
		while(!deleted)
		{
			if(current->value.studentID == info.studentID)
			{
				prev->next = current->next;
				delete current;
				length--;
				deleted = true;
			}
			prev = current;
			current = current->next;
		}
	}
}
int SortedList::getLength(){
	return length;
}
void SortedList::printList(){
	Node *temp;
	temp = list;
	cout <<"The students are as follows: " << endl;
	while(temp != NULL)
	{
		cout << temp->value.studentID << "-" << temp->value.lastName << ", " << temp->value.firstName << endl;
		temp = temp->next;
	}

	  }
