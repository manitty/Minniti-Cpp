#include <iostream>
#include <vector>
using namespace std;

#ifndef MINIQUEUEVT_H
#define MINIQUEUEVT_H

template<typename T>
class miniQueueVT{

private:
	vector<T> MQV;

public:
	miniQueueVT();
	bool Empty() const; //checks if queue is empty
	void dequeue(); // removes item from queue
	void enqueue(const T& item); //adds item to queue
	int size() const; //checks size of the queue
	T& front(); //returns front item
	void PrintQueue() const; //prints queue

};

template<typename T>
miniQueueVT<T>::miniQueueVT(){

}

//checks if queue is empty
template<typename T>
bool miniQueueVT<T>::Empty() const{
	if (MQV.empty())
	{
		cout << "QueueVT is empty" << endl;
	}
	else
	{
		cout << "QueueVT is not empty" << endl;
	}
	return 0;
}

// removes item from queue
template<typename T>
void miniQueueVT<T>::dequeue(){
	MQV.pop_back();
}

//adds item to queue
template<typename T>
void miniQueueVT<T>::enqueue(const T& item){
	MQV.push_back(item);
}

//checks size of the queue
template<typename T>
int miniQueueVT<T>::size() const{
	return MQV.size();
}

//returns front item
template<typename T>
T& miniQueueVT<T>::front(){
	return MQV.back();
}

//prints queue
template<typename T>
void miniQueueVT<T>::PrintQueue() const
{
	typename vector<T>::const_iterator iter;

	for (iter = MQV.begin(); iter != MQV.end(); iter++)
	{
		cout << *iter << endl;
	}
}

#endif