#include <iomanip>
#include <string>

using namespace std;

#ifndef SORTEDLIST_H
#define SORTEDLIST_H

class Student{
public:
	int studentID;
	string firstName;
	string lastName;

	Student(int, string, string);
	Student();
};

class Node{
public:
	Student value;
	Node *next;

	Node(Student, Node*);
	Node();

};

class SortedList{
public:
	Node *list;
	int length;

	SortedList();
	~SortedList();
	void insert(Student);
	void remove(Student);
	int getLength();
	void printList();

};



#endif
