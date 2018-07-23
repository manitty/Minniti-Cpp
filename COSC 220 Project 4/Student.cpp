#include <iomanip>
#include <string>
#include <iostream>
#include "Student.h"
using namespace std;


	Student::Student(){
		lastName = "";
		firstName = "";
		birthDate = "";
		year = "";
		gender = 'x';
		GPA = 0.0;
		studentID = 00000000;

	}

	Student::Student(string &ln, string &fn, string &bd, string &y, char &g, float &gr, int &id){
		lastName = ln;
		firstName = fn;
		birthDate = bd;
		year = y;
		gender = g;
		GPA = gr;
		studentID = id;

	}

	void Student::setlastName(string ln){
		lastName = ln;
	}

	void Student::setfirstName(string fn){
		firstName = fn;
	}

	void Student::setbirthDate(string bd){
		birthDate = bd;
	}

	void Student::setyear(string y){
		year = y;
	}

	void Student::setgender(char gn){
		gender = gn;
	}

	void Student::setGPA(float grade){
		GPA = grade;
	}

	void Student::setid(int id){
		studentID = id;
	}



	string Student::getlastName(){
		return lastName;
	}

	string Student::getfirstName(){
		return firstName;
	}

	string Student::getbirthDate(){
		return birthDate;
	}

	string Student::getyear(){
		return year;
	}

	char Student::getgender(){
		return gender;
	}

	float Student::getGPA(){
		return GPA;
	}

	int &Student::getid(){
		return studentID;
	}

