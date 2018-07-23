#include <iostream>
using namespace std;

#ifndef MINISTACKDA_H
#define MINISTACKDA_H

template<typename T>
class miniStackDA
{
private:
	int StackCnt;
	T* arr, *nArr;
	int arraySize;

public:
	miniStackDA();
	bool Empty() const; //Checks if stack is empty
	void push(const T& item); // adds to the stack
	T pop(); // deletes from the stack
	int size() const; //checks the size of the stack
	T& front() const; //returns the front item
	void PrintStack() const; // prints the stack
};

template<typename T>
miniStackDA<T>::miniStackDA()
{
	StackCnt = 0;
	arraySize = 10;
	arr = new T[arraySize];
}

//Checks if stack is empty
template<typename T>
bool miniStackDA<T>::Empty() const
{
	if (StackCnt == 0)
	{
		cout << "StackDA is empty" << endl;
	}
	else
	{
		cout << "StackDA is not empty" << endl;
	}
	return 0;
}

// adds to the stack
template<typename T>
void miniStackDA<T>::push(const T& item)
{
	if (StackCnt == arraySize)
	{
		arraySize *= 2;
		nArr = new T[arraySize];
		for (int i = 0; i < StackCnt; i++)
		{
			nArr[i] = arr[i];
		}
		delete[] arr;
		arr = nArr;
	}

	StackCnt++;
	for (int i = StackCnt; i > 0 ; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[0] = item;
}

// deletes from the stack
template<typename T>
T miniStackDA<T>::pop()
{
	if (Empty())
	{
		cout << "Cannot pop an empty Stack!" << endl;
		throw exception();
	}
	T removedElement = arr[0];
	for (int i = 0; i < StackCnt - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	StackCnt--;
	return removedElement;
}

//checks the size of the stack
template<typename T>
int miniStackDA<T>::size() const
{
	return StackCnt;
}

//returns the front item
template<typename T>
T& miniStackDA<T>::front() const
{
	return arr[0];
}

// prints the stack
template<typename T>
void miniStackDA<T>::PrintStack() const
{
	for (int i = 0; i < StackCnt; i++)
	{
		cout << arr[i] << endl;
	}
}

#endif