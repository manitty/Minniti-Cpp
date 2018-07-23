//Nick Riley
//Lab 3
//Created 2/25/14 12:10 pm


#include <string>
#ifndef SORTEDLIST_H
#define SORTEDLIST_H
using namespace std;

class students{
  public:
  int studentID;
  string firstName;
  string lastName;
  students(int studID, string first, string last);
  students();
};

class node{
  public:
  students value;
  node *next;
  node(students obj, node* temp);
  node();
};

class sortedList {
 public:
  node *list;
  int length;
  sortedList();
  ~sortedList();
  void insert(students obj);
  void remove(students obj);
  int getLength();
  void print();
};

#endif
