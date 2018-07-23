#include <iostream>
using namespace std;

class Node {
	public:
		int a;
		Node *next;
		Node (int, Node*);
		~Node();
};

class UnsortedList{
	private:
		int length;
		Node *list;
	public:
		void Insert(int value);
		void Remove(int value);
		int getLength();
		void printList();
		UnsortedList();
		~UnsortedList();
	};

