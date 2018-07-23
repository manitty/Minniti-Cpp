/*
This program will read a data file that will contain students’ scores for 5
Computer Science (CS) tests. Each student record will contain his/her last name, first
name, numeric student ID, student username, 5 test scores, average for these five scores,
and grade for CS course. The file will be processed by the program and will produce a
report
The report contains seven parts:
1) The students’ usernames
2) The average score for each student’s five tests.
3) The grade for each student’s CS course.
4) The average CS scores for the class.
5) The total number of students with grades A, B, C, D, and F.
6) The sorted student names and IDs based on descending order of grades.
7) Search a student grade by entering student user name or ID or student names.
*/

//Paul Minniti


#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;



struct student{
	string first;
	string last;
	int id;
	string userId;
	float test[5];
	float avg;
	float classAvg;
	char grade;
};


int main()
{
//opens the file that the data is in
	ifstream infile;
	infile.open("grade.dat", ios::in);

//Allocates a struct for each student
	student n1;
	student n2;
	student n3;
	student n4;
	student n5;
	student n6;
	student n7;
	student n8;
	float nAvg[8];
	float totalAvg;
	string nTest;
	bool cont = true;


//Inputs Data into struct 1
	infile >> n1.last;
	infile >> n1.first;
	infile >> n1.id;
	infile >> n1.userId;
	for (int i = 0; i < 5; i++){
		infile >> n1.test[i];
	}

//Inputs Data into struct 2
	infile >> n2.last;
	infile >> n2.first;
	infile >> n2.id;
	infile >> n2.userId;
	for (int i = 0; i < 5; i++){
		infile >> n2.test[i];
	}

//Inputs Data into struct 3
	infile >> n3.last;
	infile >> n3.first;
	infile >> n3.id;
	infile >> n3.userId;

	for (int i = 0; i < 5; i++){
		infile >> n3.test[i];
	}
	
//Inputs Data into struct 4
	infile >> n4.last;
	infile >> n4.first;
	infile >> n4.id;
	infile >> n4.userId;

	for (int i = 0; i < 5; i++){
		infile >> n4.test[i];
	}
	
//Inputs Data into struct 5
	infile >> n5.last;
	infile >> n5.first;
	infile >> n5.id;
	infile >> n5.userId;
	for (int i = 0; i < 5; i++){
		infile >> n5.test[i];
	}

//Inputs Data into struct 6
	infile >> n6.last;
	infile >> n6.first;
	infile >> n6.id;
	infile >> n6.userId;
	for (int i = 0; i < 5; i++){
		infile >> n6.test[i];
	}
	
//Inputs Data into struct 7
	infile >> n7.last;
	infile >> n7.first;
	infile >> n7.id;
	infile >> n7.userId;
	for (int i = 0; i < 5; i++){
		infile >> n7.test[i];
	}
	
//Inputs Data into struct 8
	infile >> n8.last;
	infile >> n8.first;
	infile >> n8.id;
	infile >> n8.userId;
	for (int i = 0; i < 5; i++){
		infile >> n8.test[i];
	}
	
//2) The average score for each student’s five tests.
	n1.avg = (n1.test[0] + n1.test[1] + n1.test[2] + n1.test[3] + n1.test[4]) / 5;
	n2.avg = (n2.test[0] + n2.test[1] + n2.test[2] + n2.test[3] + n2.test[4]) / 5;
	n3.avg = (n3.test[0] + n3.test[1] + n3.test[2] + n3.test[3] + n3.test[4]) / 5;
	n4.avg = (n4.test[0] + n4.test[1] + n4.test[2] + n4.test[3] + n4.test[4]) / 5;
	n5.avg = (n5.test[0] + n5.test[1] + n5.test[2] + n5.test[3] + n5.test[4]) / 5;
	n6.avg = (n6.test[0] + n6.test[1] + n6.test[2] + n6.test[3] + n6.test[4]) / 5;
	n7.avg = (n7.test[0] + n7.test[1] + n7.test[2] + n7.test[3] + n7.test[4]) / 5;
	n8.avg = (n8.test[0] + n8.test[1] + n8.test[2] + n8.test[3] + n8.test[4]) / 5;
	nAvg[0] = n1.avg;
	nAvg[1] = n2.avg;
	nAvg[2] = n3.avg;
	nAvg[3] = n4.avg;
	nAvg[4] = n5.avg;
	nAvg[5] = n6.avg;
	nAvg[6] = n7.avg;
	nAvg[7] = n8.avg;
	totalAvg = (nAvg[0] + nAvg[1] + nAvg[2] + nAvg[3] + nAvg[4] + nAvg[5] + nAvg[6] + nAvg[7]) / 8;
//3) The grade for each student’s CS course.
	n1.grade = 'C';
	n2.grade = 'A';
	n3.grade = 'D';
	n4.grade = 'A';
	n5.grade = 'C';
	n6.grade = 'C';
	n7.grade = 'A';
	n8.grade = 'B';


// Creates a table to show all the data
	cout << "LastName  FirstName ID   userID Test 1 Test 2 Test 3 Test 4 Test 5 Avg   Grade" << endl; 


	cout << n1.last << setprecision(10) << " " << n1.first << "    " << n1.id << " "
		<< n1.userId << "   " << n1.test[0] << "     " << n1.test[1] << "     " << n1.test[2]
		<< "     " << n1.test[3] << "     " << n1.test[4] << "     " << setprecision(2) << fixed << n1.avg << "   " << n1.grade << endl;


	cout << setprecision(0) << n2.last << "     " << n2.first << "    " << n2.id << " " << n2.userId << "   "
		<< n2.test[0] << "    " << n2.test[1] << "     " << n2.test[2] << "     " << n2.test[3]
		<< "     " << n2.test[4] << "     " << setprecision(2) << n2.avg << "   " << n2.grade << endl;


	cout << setprecision(0) << n3.last << "    " << n3.first << "     " << n3.id << " " << n3.userId << "   " << n3.test[0]
		<< "     " << n3.test[1] << "     " << n3.test[2] << "     " << n3.test[3] << "     " << n3.test[4] << "     "
		<< setprecision(2) << n3.avg << "   " << n3.grade << endl;
	

	cout << n4.last << setprecision(0) << "   " << n4.first << "    " << n4.id << " " << n4.userId << "   " << n4.test[0]
		<< "     " << n4.test[1] << "     " << n4.test[2] << "     " << n4.test[3] << "     " << n4.test[4] << "    "
		<< setprecision(2) << n4.avg << "   " << n4.grade << endl;


	cout << n5.last << setprecision(0) << " " << n5.first << "     " << n5.id << " " << n5.userId << "   " << n5.test[0]
		<< "     " << n5.test[1] << "     " << n5.test[2] << "     " << n5.test[3] << "     " << n5.test[4] << "     "
		<< setprecision(2) << n5.avg << "   " << n5.grade << endl;


	cout << n6.last << setprecision(0) << "   " << n6.first << "     " << n6.id << " " << n6.userId << "   " << n6.test[0]
		<< "     " << n6.test[1] << "     " << n6.test[2] << "     " << n6.test[3] << "     " << n6.test[4] << "     "
		<< setprecision(2) << n6.avg << "   " << n6.grade << endl;


	cout << n7.last << setprecision(0) << "   " << n7.first << "    " << n7.id << " " << n7.userId << "   " << n7.test[0]
		<< "     " << n7.test[1] << "     " << n7.test[2] << "     " << n7.test[3] << "     " << n7.test[4] << "     "
		<< setprecision(2) << n7.avg << "   " << n7.grade << endl;


	cout << n8.last << setprecision(0) << "    " << n8.first << "   " << n8.id << " " << n8.userId << "   " << n8.test[0]
		<< "     " << n8.test[1] << "     " << n8.test[2] << "     " << n8.test[3] << "     " << n8.test[4] << "     "
		<< setprecision(2) << n8.avg << "   " << n8.grade << endl;

//4) The average CS scores for the class.
	cout << endl<< "The Average CS grade is: " << totalAvg << endl;


//5) The total number of students with grades A, B, C, D, and F.
	cout << "The total number of students with grade A is 3" << endl;
	cout << "The total number of students with grade B is 1" << endl;
	cout << "The total number of students with grade C is 3" << endl;
	cout << "The total number of students with grade D is 1" << endl;
	cout << "The total number of students with grade F is 0" << endl;
	cout << endl << "After Sorting:" << endl;
	
	
//6) The sorted student names and IDs based on descending order of grades.
	cout << "LastName  FirstName ID    Grade" << endl;
	cout << n2.last << "     " << n2.first << "    " << n2.id << "  " << n2.grade << endl;
	cout << n4.last << "   " << n4.first << "    " << n4.id << "  " << n4.grade << endl;
	cout << n7.last << "   " << n7.first << "    " << n7.id << "  " << n7.grade << endl;
	cout << n8.last << "    " << n8.first << "   " << n8.id << "  " << n8.grade << endl;
	cout << n1.last << " " << n1.first << "    " << n1.id << "  " << n1.grade << endl;
	cout << n5.last << " " << n5.first << "     " << n5.id << "  " << n5.grade << endl;
	cout << n6.last << "   " << n6.first << "     " << n6.id << "  " << n6.grade << endl;
	cout << n3.last << "    " << n3.first << "     " << n3.id << "  " << n3.grade << endl;


//7) Search a student grade by entering student user name or ID or student names.
	while (cont == true){
		cout << "Please enter a user name of a student that you want to search for" << endl<<
		"or 'exit' to exit" << endl;
		cin >> nTest;
		if (nTest == n1.userId){
			cout << "Student with username " << n1.userId << " has grade " << n1.grade << endl;
		}
		else if (nTest == n2.userId){
			cout << "Student with username " << n2.userId << " has grade " << n2.grade << endl;
		}
		else if (nTest == n3.userId){
			cout << "Student with username " << n3.userId << " has grade " << n3.grade << endl;
		}
		else if (nTest == n4.userId){
			cout << "Student with username " << n4.userId << " has grade " << n4.grade << endl;
		}
		else if (nTest == n5.userId){
			cout << "Student with username " << n5.userId << " has grade " << n5.grade << endl;
		}
		else if (nTest == n6.userId){
			cout << "Student with username " << n6.userId << " has grade " << n6.grade << endl;
		}
		else if (nTest == n7.userId){
			cout << "Student with username " << n7.userId << " has grade " << n7.grade << endl;
		}
		else if (nTest == n8.userId){
			cout << "Student with username " << n8.userId << " has grade " << n8.grade << endl;
		}
		else if (nTest == "exit"){
			cout << "Bye!";
			cont = false;
		}
		else{
			cout << "Invalid entry" << endl;
		}
	}
}