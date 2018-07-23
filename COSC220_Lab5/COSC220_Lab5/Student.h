//Nick Riley
//Created 8:53 pm
//Lab 5

#include <iostream>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student{
	private:
		int studentID;
		string firstName;
		string lastName;
	public:
		Student(int student, string last, string first);
		Student();
		bool operator ==(Student student);
		bool operator >(Student student);
		friend ostream& operator <<(ostream& stream, Student student);
		bool operator <(Student student);
	};
	
#endif //STUDENT_H

