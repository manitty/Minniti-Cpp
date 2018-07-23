#include <iomanip>
#include <cstdlib>
#include <istream>
#include <string>
#include <iostream>
#include <fstream>
#include <list>
#include "Student.h"
using namespace std;



int main(){

	list<Student> slist;
	list<Student>::iterator iter;

	ifstream infile;
	ofstream outfile;

	outfile.open("stext.txt",ios::in);
	infile.open("stext.txt",ios::out);



	Student S;

	
	int value;
	int temp=0;
	int random = rand() % 99999999;
	float ftemp = 0.0;
	string freshman = "Freshman";
	string sophmore = "Sophmore";
	string junior = "Junior";
	string senior = "Senior";
	char male = 'M';
	char female = 'F';


	string stemp;



	
	label1:
	cout << "*****************************************************" << endl;
	cout << "Welcome to the Salisbury University Student Database." << endl;
	cout << "*****************************************************" << endl;
	cout << endl;
	cout << "There are currently " << slist.size()  << " Students registered" << endl;
	cout << endl;
	cout << "            MAIN MENU:               " << endl;
	cout<<	"*select one of the following options*" << endl;
	cout << endl;
	cout << "[1]- Create a new student account." << endl;
	cout << "[2]- Update a current students information." << endl;
	cout << "[3]- Search the Database." << endl;
	cout << "[4]- Delete a student fron the Database." << endl;
	cout << "[5]- Quit the program." << endl;
	cin >> value;

	switch (value){

	case 1:
		cout << endl;
		cout << "You selected: Create a new student account." << endl;
		cout << endl;
		cout << "Enter:" << endl;
		cout << "[1] -Continue." << endl;
		cout << "[0] -Return to Main Menu." << endl;
		cin >> value;

		if (value == 1){
			goto label2;
		}
		else{
			goto label1;
		}

	label2:
		cout << "How many students would you like to enter" << endl;
		cin >> value;

		for (int i = 1; i <= value; i++){
			cout << "You are entering Student #" << i << " of #" << value << endl;

			//without below line program will skip set lastname
			getline(cin, stemp);

			cout << "Enter the students Last Name:" << endl;
			getline(cin, stemp);
			S.setlastName(stemp);

			cout << "Enter the students First Name:" << endl;
			getline(cin, stemp);
			S.setfirstName(stemp);

			cout << "Enter the students birthdate as follows MM/DD/YYYY" << endl;
			getline(cin, stemp);
			S.setbirthDate(stemp);

			cout << "Select the students grade level" << endl;
			cout << "[1] -Freshman" << endl;
			cout << "[2] -Sophmore" << endl;
			cout << "[3] -Junior" << endl;
			cout << "[4] -Senior" << endl;
			cin >> value;
			if (value == 1){
				S.setyear(freshman);
				cout << "student grade level set to: Freshman" << endl;
			}
			else if (value == 2){
				S.setyear(sophmore);
				cout << "student grade level set to: Sophmore" << endl;
			}
			else if (value == 3){
				S.setyear(junior);
				cout << "student grade level set to: Junior" << endl;
			}
			else{
				S.setyear(senior);
				cout << "student grade level set to: Senior" << endl;
			}

			cout << "Select the students gender" << endl;
			cout << "[1] -Male" << endl;
			cout << "[2] -Female" << endl;
			cin >> value;

			if (value == 1){
				S.setgender(male);
				cout << "student gender set to: Male" << endl;
			}
			else{
				S.setgender(female);
				cout << "student gender set to: Female" << endl;
			}

			cout << "Enter the students GPA" << endl;
			cin >> ftemp;
			S.setGPA(ftemp);

			cout << "Assigning the student an ID" << endl;
			for (iter = slist.begin(); iter != slist.end(); iter++){
				if (random != S.studentID){
					S.setid(random);
				}
				else{
					return 0;
				}
			}
			cout << "The Students Id number is: " << S.studentID << endl;

			slist.push_back(S);

		}

		cout << "Printing all Students in Database" << endl;
		cout << endl;
		for (iter = slist.begin(); iter != slist.end(); iter++){
			slist.sort();
			cout << *iter << " ";
			iter++;
		}
	
		
	 
	case 2 :

		cout << endl;
		cout << "You selected: Update a current students information." << endl;
		cout << endl;
		cout << "Enter:" << endl;
		cout << "[1] -Continue." << endl;
		cout << "[0] -Return to Main Menu." << endl;
		cin >> value;

		if (value == 1){
			goto label3;
		}
		else{
			goto label1;
		}
		label3:

		cout << "Printing all Students in Database" << endl;
		cout << endl;
		for (iter = slist.begin(); iter != slist.end(); iter++){
			slist.sort();
			cout << *iter << " ";
			iter++;
		}



	case 3 :

		cout << endl;
		cout << "You selected: Search the Database." << endl;
		cout << endl;
		cout << "Enter:" << endl;
		cout << "[1] -Continue." << endl;
		cout << "[0] -Return to Main Menu." << endl;
		cin >> value;

		if (value == 1){
			goto label4;
		}
		else{
			goto label1;
		}
	label4:




	case 4 :

		cout << endl;
		cout << "You selected: Delete a student fron the Database." << endl;
		cout << endl;
		cout << "Enter:" << endl;
		cout << "[1] -Continue." << endl;
		cout << "[0] -Return to Main Menu." << endl;
		cin >> value;

		if (value == 1){
			goto label5;
		}
		else{
			goto label1;
		}
	label5:


	case 5 :
		return 0;
		
		;
	}




	

	return 0;
	

	}
	