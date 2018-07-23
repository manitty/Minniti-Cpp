#include <iostream>
#include <iterator>
#include <list>
using namespace std;

#ifndef MINIQUEUELT_H
#define MINIQUEUELT_H

template<typename T>
class miniQueueLT{

private:
	list<T> MQL;

public:
	miniQueueLT();
	bool Empty() const; //checks if queue is empty
	void dequeue(); // removes from queue
	void enqueue(const T& item); //adds to queue
	int size() const; //checks size of queue
	T& front(); //returns front item
	void PrintQueue() const; // prints queue
};

template<typename T>
miniQueueLT<T>::miniQueueLT(){

}

//checks if queue is empty
template<typename T>
bool miniQueueLT<T>::Empty() const{
	if (MQL.empty())
	{
		cout << "QueueLT is empty" << endl;
	}
	else
	{
		cout << "QueueLT is not empty" << endl;
	}
	return 0;
}

// removes from queue
template<typename T>
void miniQueueLT<T>::dequeue(){
	if (Empty())
	{
		cout << "Cannot dequeue an empty queue!" << endl;
	}
	MQL.pop_front();
}

//adds to queue
template<typename T>
void miniQueueLT<T>::enqueue(const T& item){
	MQL.push_back(item);
}

//checks size of queue
template<typename T>
int miniQueueLT<T>::size() const{
	return MQL.size();
}

//returns front item
template<typename T>
T& miniQueueLT<T>::front(){
	return MQL.front();
}

// prints queue
template<typename T>
void miniQueueLT<T>::PrintQueue() const
{
	typename list<T>::const_iterator iter;

	for (iter = MQL.begin(); iter != MQL.end(); iter++)
	{
		cout << *iter << endl;
	}
}

#endif