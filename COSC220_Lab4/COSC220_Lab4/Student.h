//Nick Riley
//Lab 3
//Created 3/17/14 12:10 pm

#include <string>
#ifndef STUDENT_H
#define STUDENT_H
using namespace std;

class students{
  public:
  int studentID;
  string firstName;
  string lastName;
  students(int studID, string first, string last);
  students();
};

#endif
