// Nick Riley
// Lab 3
// Created 2/25/14 12:10 pm

#include <string>
#include <iostream>
#include "Student.h"
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


