//Nick Riley
//Lab 3
//Created 2/25/14 12:10 pm

#include <string>
#include <iostream>
#include "SortedList.h"
using namespace std;

students:: students(int studID, string first, string last){
  studentID = studID;
  firstName = first;
  lastName = last;
}

students:: students(){
	studentID = 0;
	firstName = " ";
	lastName = " ";
};

node:: node(students obj, node* temp){
  value = obj;
  temp = next;
};

node:: node(){
	value = students();
	next = NULL;
};

sortedList:: sortedList(){
	list = NULL;
	length = 0;
}

sortedList:: ~sortedList(){
}

void sortedList:: insert (students obj){
  node *temp = list;
  node *newNode = new node;
  newNode -> value = obj;
  newNode -> next = NULL;
  
  if (list == NULL)
  {
  		list = newNode;
  		length++;
  }
  else if (list -> value.studentID > newNode ->value.studentID)
  {
  		newNode -> next = list;
  		list = newNode;
  		length++;
  }
  else if (temp -> next == NULL)
  {
  		temp -> next = newNode;
  		length++;
  }
  else
  {
  		while(temp != NULL && temp != newNode)
  		{
  			if (temp -> next == NULL)
  			{
  					temp -> next = newNode;
  					length++;
  			}
  			else if (temp -> next -> value.studentID > newNode -> value.studentID)
  			{
  					newNode -> next = temp -> next;
  					temp -> next = newNode;
  					length++;
  			}
  			temp = temp -> next;
  		}
  	}	
}

void sortedList:: remove(students obj){
 	if (list == NULL)
 	{
 		cout << "List is empty" << endl;
 	}
 	else if (list -> value.studentID == obj.studentID)
 	{
 		node *temp = list;
 		list = list -> next;
 		delete temp;
 		length --;
 	}
 	else 
 	{
 		node *previous = list;
 		node *current = list -> next;
 		bool deletes = false;
 		while (!deletes)
 		{
 			if (current -> value.studentID == obj.studentID)
 			{
 				previous -> next = current -> next;
 				delete current;
 				length--;
 				deletes = true;
 			}
 				previous = current;
 				current = current -> next;
 		}
 	}		
  
}
      
int sortedList:: getLength(){
  return length;
}

void sortedList:: print(){		
  node *temp;
  temp = list;
  cout << "The students are " << endl;
  while (temp != NULL)
  {
  	cout << temp -> value.studentID << "---" << temp -> value.lastName << ", " << temp -> value.firstName << endl;
  	temp = temp -> next;
  }
}	

