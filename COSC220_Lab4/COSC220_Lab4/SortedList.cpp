// Nick Riley
// Lab 3
// Created 2/25/14 12:10 pm

#include <string>
#include <iostream>
#include "SortedList.h"

using namespace std;

template <class T>
node <T>:: node(T obj, node* temp){
  value = obj;
  temp = next;
};

template <class T>
node <T>:: node(){
    value = students();
    next = NULL;
};

template <class T>
sortedList <T>:: sortedList(){
    list = NULL;
    length = 0;
}

template <class T>
sortedList <T>:: ~sortedList(){
}

template <class T>
void sortedList<T>::  insert (T obj){
  node <T> *temp = list;
  node <T> *newNode = new node <T>;
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

template <class T>
void sortedList<T>:: remove(T obj){
     if (list == NULL)
     {
         cout << "List is empty" << endl;
     }
     else if (list -> value.studentID == obj.studentID)
     {
         node <T> *temp = list;
         list = list -> next;
         delete temp;
         length --;
     }
     else 
     {
         node <T> *previous = list;
         node <T> *current = list -> next;
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

template <class T>
int sortedList<T>:: getLength(){
  return length;
}

template <class T>
void sortedList<T>:: print(){        
  node <T> *temp;
  temp = list;
  cout << "The students are " << endl;
  while (temp != NULL)
  {
      cout << temp -> value.studentID << "---" << temp -> value.lastName << ", " << temp -> value.firstName << endl;
      temp = temp -> next;
  }
}    
