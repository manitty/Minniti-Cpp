#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

/* Nick Riley	
	This project will run a filestream and 
	output information
	Project Created 11/25/13 */

// Class declaration
class studentInfo{
private:	
	string firstName, 
		   lastName,
		   grade;
	int testScore;
		
public: 
	 studentInfo();
	 void setFirstName(string first);
	 void setLastName(string last);
	 void setGrade (int score);
	 void setLetterGrade(string grade);
	 string getFirstName() const;
	 string getLastName() const;
	 int getGrade() const;
	 string getLetterGrade();
	 void operator=(const studentInfo &right);
	 bool operator< (const studentInfo &right, const studentInfo &left);
	 bool operator< (const studentInfo &right, const studentInfo &left);
};

// Prototype Declaration
void findGreatest(studentInfo * ptr, ofstream &outfile);
void setLetter (studentInfo *ptr, int size);
int getSize(ifstream &infile);
studentInfo *getArray(ifstream &infile, int size);
void outputFile(ifstream &infile, ofstream &outfile, studentInfo *ptr, int size, studentInfo p);
void sort (studentInfo *ptr, int size);
void displayHighest(studentInfo *ptr);

int main (){

int size;
studentInfo *student;
studentInfo highest;

ifstream infile;
ofstream outfile;
infile.open('grades.dat');
outfile.open('prog3.out');

size = getSize(infile);
student = getArray(infile, size);
setLetter(student,size);
highest = displayHighest(student, size);
outputFile(infile, outfile, student, size, highest);
infile.close();

return 0;
}

int getSize(ifstream &infile)
{
	string temp;
	int i = 0;
	while(infile.peek() != EOF)
	{
		getline(infile, temp);
		i++;
	}
	infile.close();
	return i;
}


studentInfo findGreatest(studentInfo *ptr, int size){
	studentInfo highest = ptr[0];
		for (int i = 0; i < size; i++){
			if (ptr.getGrade() > highest.getGrade())
				highest = ptr[i];
		}
		return highest;
}

void assignLetter(studentInfo *ptr, int size){
	for (int i = 0; i < size; i++){
	if(ptr[i].getGrade() >=0 && ptr[i].getGrade() < 60)
		ptr[i].setLetter("F");
	else if(ptr[i].getGrade() >= 60 && ptr[i].getGrade() < 70)
		ptr[i].setLetter("D");
	else if(ptr[i].getGrade() >=70 && ptr[i].getGrade() < 80)
		ptr[i].setLetter("C");
	else if(ptr[i].getGrade() >= 80 && ptr[i].getGrade() < 90)
		ptr[i].setLetter("B");
	else if(ptr[i].getGrade() >= 90 && ptr[i].getGrade() < 100)
		ptr[i].setLetter("A");
	else 
		ptr[i].setLetter("I  invalid grade!");
	}
}

studentInfo *getArray(ifstream &infile, int size){
	studentInfo * student;
	student = new studentInfo[size];
	infile.open("grades.dat");
	string first,
		   last;
	int score; 
	
	for (int i = 0; i < size; < i++){
		infile >> first;
		student[i].setFirst(first);
		infile >> last;
		student[i].setLast(last);
		infile >> score;
		student[i].setGrade(score);
	}
	return student;
}

void outputFile(ifstream &infile, ofstream &outfile, studentInfo *ptr, int size, studentInfo p){
	for(int i = 0; i < size; i++){
		cout << left << setw(15) << ptr[i].getFirstName() << setw(15) << ptr[i].getLastName() << setw(15) << ptr[i].getGrade();
		outfile << left << setw(15) << ptr[i].getFirstName() << setw(15) << ptr[i].getLastName() << setw(15) << ptr[i].getGrade();
	}
}

void sort(studentInfo *ptr, int size){
	studentInfo temp;
	int bottom = size - 1;
	bool swap = true;

	do{
		swap= false;
		for (int i = 0; i < bottom; i++){
			if (ptr[i] < ptr[i+1]){
			 	temp = ptr[i];
			 	ptr[i] = ptr[i+1];
			 	swap = true;
			 }
		}
	bottom --;
	}
		while (swap != false);
}


//Member function implementation
studentInfo:: studentInfo(){
	lastName = ' ';
	firstName = ' ';
	testScore = ' ';
	grade = 0;
}

void studentInfo:: setLetter (string letter){
testScore = letter;
}	
void studentInfo:: setFirstName(string first){
	firstName = first;
}
void studentInfo:: setLastName(string last){
	lastName = last;
}
void studentInfo:: setGrade(int score){
	testScore = score;
}
string studentInfo:: getFirstName() const {
	return firstName;
}
string studentInfo:: getLastName() const {
	return lastName;
}
int studentInfo:: getGrade(){
	return testScore;
}
string studentInfo:: getLetter(){
	return grade;
}
void studentInfo:: operator=(const studentInfo &right){
	firstName = right.getFirstName();
	lastName = right.getLastName();
}
bool studentInfo:: operator<(const studentInfo &right){
	if(right.getLastName < lastName)
		return true;
	else	
		return false;
}
bool studentInfo:: operator>(const studentInfo &right){
	if (right.getLast() > lastName)
		return true;
	else 
		return false;
}


