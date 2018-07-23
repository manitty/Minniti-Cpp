#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

/*Nick Riley
	Computer Science 120 Section 501, Project 3
	This project was created on 11/24/13
*/

class studentInfo{
private:
	string firstName;
	string lastName;
	string grade;
	int testScore;
public:
	studentInfo(){
	firstName = " ";
	lastName = " ";
	string grade = " ";
	int testScore = 0;
	};
	void setFirstName(string first){
		firstName = first;
	};
	void setLastName(string last){
		lastName = last;
	};
	void setTestScore(int score){
		testScore = score;
	};
	void setLetterGrade(string grade){
		grade = letter;
	};
	string getFirstName() const{
		return firstName;
	};
	string getLastName() const{
		return lastName;
	};
	int getTestScore() const{
		return testScore;
	};
	string getLetterGrade() const{
		return grade;
	};
	void operator= (const studentInfo &right){
		lastName = right.getLastName();
		firstName = right.getFirstName();
	};
	bool operator< (const studentInfo &right){
		if(right.getLastName() < lastName){
			return true;
	};
		else
			return false;
	};
	bool operator> (const studentInfo &right){
		if(right.getLastName() > lastName){
			return true;
	};
		else
			return false;
	};
};

//Free function prototype
int getSize(ifstream &infile);
studentInfo* createArray(ifstream &, int);
void writeLetterGrade(int, studentInfo*);
void sortInfo(studentInfo*, int);
void highestScore(int, studentInfo *, ofstream &);
void outputInfo(ofstream &, studentInfo*, int);

int main(){
//Declaration of variables
int size;
studentInfo *students;
ifstream infile;
ofstream outfile;
//Opens the two files
infile.open("grades.dat");
outfile.open("prog3.out");
//Calls that implement the program
size = getSize(infile);
students = createArray(infile, size);
writeLetterGrade(size, students);
sortInfo(student, size);
outputInfo(outfile, students, size);
highestScore(size, students, outfile);
infile.close();

}


//Gets the size from the file
int getSize(ifstream &infile)
{
string a;
int i = 0;
//loop that goes throughout the number of lines in the file
while(infile.peek() != EOF)
{
//Reads that there is a line
getline(infile, a);
i++;
}
//Closes the file
infile.close();
return i;
}

//Gets the array from the file and creates the array
studentInfo* createArray(ifstream &infile, int size)
{
//Creating the array
studentInfo *student;
student = new studentInfo[size];
//Opening the file
infile.open("grades.dat");
int i = 0;
string first;
string last;
int score;
//Reads in the info from the file to the array
for(int i = 0; i < size; i++)
{
infile >> first;
student[i].setFirstName(first);
infile >> last;
student[i].setLastName(last);
infile >> score;
student[i].setTestScore(score);
}
return student;
}

//Assigns the letter to the grade value
void writeLetterGrade(int size, studentInfo *ptr){
for(int i = 0; i < size; i++)
{
if(ptr[i].getTestScore() >= 0 && ptr[i].getTestScore() < 60)
ptr[i].setLetterGrade("F");
else if(ptr[i].getTestScore() >= 60 && ptr[i].getTestScore() < 70)
ptr[i].setLetterGrade("D");
else if(ptr[i].getTestScore() >= 70 && ptr[i].getTestScore() < 80)
ptr[i].setLetterGrade("C");
else if(ptr[i].getTestScore() >= 80 && ptr[i].getTestScore() < 90)
ptr[i].setLetterGrade("B");
else if(ptr[i].getTestScore() >= 90 && ptr[i].getTestScore() <= 100)
ptr[i].setLetterGrade("A");
else
ptr[i].setLetterGrade("I Invalid grade!");
}
}

//sortInfos the array in alphabetical order
void sortInfo(studentInfo *ptr, int size)
{
studentInfo placeHold;
int bottom = size - 1;
 
bool swap = true;
do{
swap = false;
for(int i = 0; i < bottom; i++)
{
if(ptr[i] < ptr[i+1])
{
//Does the swapping
placeHold = ptr[i];
ptr[i] = ptr[i+1];
ptr[i+1] = placeHold;
swap = true;
}
}
bottom --;
}while(swap != false);
}

//SetsHighest
void highestScore(int size, studentInfo *ptr, ofstream &outfile)
{
//Variables to hold the highest values
studentInfo highest;
int highestScore = ptr[0].getTestScore();
 
//Loop that finds the highest grade
for(int i = 0; i < size; i++)
{
if(ptr[i].getTestScore() > highestScore && ptr[i].getTestScore() < 100)
{
highestScore = ptr[i].getTestScore();
}
}
cout << endl;
cout << "The highest grades are: " << endl;
outfile << endl;
outfile << "The highest grades are: " << endl;
//Loop that finds out if there is more than one grade of the same value as the highest
for(int i = 0; i < size; i++)
{
if(ptr[i].getTestScore() == highestScore)
{
cout << left << setw(15) << ptr[i].getLastName() + "," + ptr[i].getFirstName() << setw(15) << ptr[i].getTestScore();
cout << setw(10) << ptr[i].getLetterGrade() << endl;
outfile << left << setw(15) << ptr[i].getLastName() + "," + ptr[i].getFirstName() << setw(15) << ptr[i].getTestScore();
outfile << setw(10) << ptr[i].getLetterGrade() << endl; }
}
}

//Outputs the file to the console and the output file
void outputInfo(ofstream &outfile, studentInfo *ptr, int size)
{
cout << "Grade Report" << endl;
cout << "- - - - - - - - - - - - - - - - - - - - -" << endl;
cout << left << setw(15) << "studentInfo Name" << setw(15) << "Score" << setw(10) << "Grade" << endl;
cout << "- - - - - - - - - - - - - - - - - - - - -" << endl;
for(int i = 0; i < size; i++)
{
cout << left << setw(15) << ptr[i].getLastName() + ", " + ptr[i].getFirstName() << setw(15) << ptr[i].getTestScore();
cout << setw(15) << ptr[i].getLetterGrade() << endl;
outfile << left << setw(15) << ptr[i].getLastName() + "," + ptr[i].getFirstName() << setw(15) << ptr[i].getTestScore();
outfile << setw(15) << ptr[i].getLetterGrade() << endl;
}
}
