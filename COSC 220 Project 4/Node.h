//Node.h

#ifndef NODE_H
#define NODE_H

//Creates the node class
class Node{
    public:
        Student s;
	Node* next;
	
	Node();
	Node(Student, Node*);
	~Node();
	void insert(Student);
	void remove(Student);
	//modify
	//search

};


#endif

