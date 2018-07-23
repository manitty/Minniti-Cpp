//Nick Riley
//Created 9:17 pm
//Lab 5

#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

template <class T>
Node<T>:: Node(T info, Node *n){
	value = info;
	next = n;
}

template <class T>
Node<T>:: Node(){
	next =  NULL;
}

template <class T>
Stack<T>:: Stack(){
	top = NULL;
	stackSize = 10;
	nodeCount = 0;
}

template<class T>
Stack<T>:: ~Stack(){
}

template <class T>
void Stack<T>:: push(const T item){
	if(isFull())
		cout << "The stack is completely full" << endl;
	else
	{
		Node<T> *newNode = new Node<T>;
		if(top == NULL)
		{	newNode -> value = item;
			newNode -> next = NULL;
			top = newNode;
			stackSize++;
		}
		else
		{	
			newNode -> value = item;
			newNode -> next = top;
			top = newNode;
			stackSize++;
		}
	}
}

template <class T> 
bool Stack<T>:: isEmpty() const{
	if(stackSize == 0)
		return true;
	else
		return false;
}

template <class T> 
bool Stack<T>:: isFull() const{
	if(nodeCount == stackSize)
		return true;
	else 
		return false;
}

template <class T>
T Stack<T>:: Top() const{
	T info;
	if(!isEmpty())
	{
		info = top;
		return info;
	}
	else
		cout << "The stack is very empty" << endl;
}

template <class T>
T Stack<T>:: pop(){
	if(!isEmpty())
	{
		Node<T> *info = top;
		top = top -> next;
		stackSize--;
		T temp = info -> value;
		delete info;
		return temp;
	}
	else
		cout << "The stack is very empty" << endl;
}

template <class T>
void Stack<T>:: printStack(){
	Node<T> *temp;
	temp = top;
	while (temp != NULL)
	{
		cout << temp -> value << ", ";
		temp = temp -> next;
	}
}




		
