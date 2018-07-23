//Nick Riley
//Created 9:11 pm
//Lab 5

#include <iostream>
#include <string>
using namespace std;

#ifndef STACK_H
#define STACK_H

template <class T>
class Node{
	public:
		T value;
		Node *next;
		Node(T, Node*);
		Node();
};

template <class T>
class Stack{
	private:
		Node<T> *top;
		int stackSize;
		int nodeCount;
	public:
		Stack();
		~Stack();
		bool isEmpty() const;
		bool isFull() const;
		T Top() const;
		void push(const T);
		T  pop();
		void printStack();
};

#endif //!Stack_H