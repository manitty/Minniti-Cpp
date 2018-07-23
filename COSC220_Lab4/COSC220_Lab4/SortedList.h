//Nick Riley
//Lab 3
//Created 3/17/14 12:10 pm

#include <string>
#ifndef SORTEDLIST_H
#define SORTEDLIST_H
using namespace std;
#include "Student.h"


template <class T>
class node{
 private:
  T value;
  node <T> *next;
 public:
  node(T obj, node* temp);
  node();
};


template <class T>
class sortedList {
  private:
  	int length;
  	T list;
  public:
  	sortedList();
  	~sortedList();
  	void insert(T obj);
  	void remove(T obj);
  	int getLength();
  	void print();
};

#endif
