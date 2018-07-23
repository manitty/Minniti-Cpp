//Nick Riley
//Created 9:00 pm
//Lab 5

#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

Student:: Student(int student, string first, string last){
	studentID = student;
	firstName = first; 
	lastName = last;
}

Student:: Student(){
	studentID = 0;
	firstName = " ";
	lastName = " ";
}

bool Student:: operator ==(Student student){
	if(studentID == student.studentID)
		return true;
	else 
		return false;
}

bool Student:: operator >(Student student){
	if(studentID > student.studentID)
		return true;
	else	
		return false;
}

ostream& operator<<(ostream& stream, Student student){
	stream << student.studentID << " " << student.lastName << ", " << student.firstName << endl;
	return(stream);
}

bool Student:: operator <(Student student){
	if(studentID < student.studentID)
		return true;
	else 
		return false;
}
		