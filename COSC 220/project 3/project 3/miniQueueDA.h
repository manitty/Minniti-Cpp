#include <iostream>
using namespace std;

#ifndef MINIQUEUEDA_H
#define MINIQUEUEDA_H

template<typename T>
class miniQueueDA
{
private:
	int QueueCnt;
	T* arr, *nArr;
	int arraySize;

public:
	miniQueueDA();
	bool Empty() const; //checks if queue is empty
	void enqueue(const T& item); // adds to queue
	T dequeue(); //removes from queue
	int size() const; // checks the size of queue
	T& front() const; //returns front item
	void PrintQueue() const; //prints queue
};

template<typename T>
miniQueueDA<T>::miniQueueDA()
{
	QueueCnt = 0;
	arraySize = 10;
	arr = new T[arraySize];
}


//checks if queue is empty
template<typename T>
bool miniQueueDA<T>::Empty() const
{
	if (QueueCnt == 0)
	{
		cout << "QueueDA is empty" << endl;
	}
	else
	{
		cout << "QueueDA is not empty" << endl;
	}
	return 0;
}


// adds to queue
template<typename T>
void miniQueueDA<T>::enqueue(const T& item)
{
	if (QueueCnt == arraySize)
	{
		arraySize *= 2;
		nArr = new T[arraySize];
		for (int i = 0; i < QueueCnt; i++)
		{
			nArr[i] = arr[i];
		}
		delete[] arr;
		arr = nArr;
	}
	arr[QueueCnt] = item;
	QueueCnt++;
}


//removes from queue
template<typename T>
T miniQueueDA<T>::dequeue()
{
	if (Empty())
	{
		cout << "Cannot dequeue an empty queue!" << endl;
		return 0;
	}
	T removedElement = arr[0];
	for (int i = 0; i < QueueCnt - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	QueueCnt--;
	return removedElement;
}


// checks the size of queue
template<typename T>
int miniQueueDA<T>::size() const
{
	return QueueCnt;
}


//returns front item
template<typename T>
T& miniQueueDA<T>::front() const
{
	return arr[0];
}

//prints queue
template<typename T>
void miniQueueDA<T>::PrintQueue() const
{
	for (int i = 0; i < QueueCnt; i++)
	{
		cout << arr[i] << endl;
	}
}

#endif