#include <iostream>
#include <iterator>
#include <list>
using namespace std;

#ifndef MINISTACKLT_H
#define MINISTACKLT_H

template<typename T>
class miniStackLT{

private:
	list<T> MQL;

public:
	miniStackLT();
	bool Empty() const; //Checks if stack is empty
	void pop(); // deletes from the stack
	void push(const T& item); // adds to the stack
	int size() const; //checks the size of the stack
	T& front(); //returns the front item
	void PrintStack() const; // prints the stack
};

template<typename T>
miniStackLT<T>::miniStackLT(){

}

//Checks if stack is empty
template<typename T>
bool miniStackLT<T>::Empty() const{
	if (MQL.empty())
	{
		cout << "StackLT is empty" << endl;
	}
	else
	{
		cout << "StackLT is not empty" << endl;
	}
	return 0;
}

// deletes from the stack
template<typename T>
void miniStackLT<T>::pop(){
	if (Empty())
	{
		cout << "Cannot pop an empty Stack!" << endl;
	}
	MQL.pop_front();
}

// adds to the stack
template<typename T>
void miniStackLT<T>::push(const T& item){
	MQL.push_front(item);
}

//checks the size of the stack
template<typename T>
int miniStackLT<T>::size() const{
	return MQL.size();
}

//returns the front item
template<typename T>
T& miniStackLT<T>::front(){
	return MQL.front();
}

// prints the stack
template<typename T>
void miniStackLT<T>::PrintStack() const
{
	typename list<T>::const_iterator iter;

	for (iter = MQL.begin(); iter != MQL.end(); iter++)
	{
		cout << *iter << endl;
	}
}

#endif