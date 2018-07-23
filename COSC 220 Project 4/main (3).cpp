//Dev: Nick Riley
//Created: 8/19/15 
//				 1:28 PM
//Current: 8/25/15
//				 8:51 PM

#include <iostream>
#include <list>
#include <string>
#include <fstream>
using namespace std;
#include "Student.h"

//Prototype for input validation functions
void iValidate(int&);
void idValidate(string&);
void gValidate(string&);
void cValidate(char&);
//Prototype for database menu function
void displayMenu();

int main(){

	//variable definition space
	int input; string sInput;
	int x;
	string ID, first, last, status, birthday,check;
	char gender;
	float GPA;
	bool found;
	Student s1;
	list <Student> studentList;
	list <Student>:: iterator it,temp;

	it = studentList.begin();

	//Program start
	cout << "______________________________________________" << endl;
	cout << "    Welcome to the student database center    " << endl;
	cout << "______________________________________________" << endl;
	cout << "Information from the .txt file has been imported" << endl << endl;
	
	ifstream inFile;
	inFile.open("Student.txt");

	while(!inFile.eof()){
		inFile >> ID;
		inFile >> first; 
		inFile >> last;
		inFile >> birthday; 
		inFile >> gender;
		inFile >> status;
		inFile >> GPA;
		s1.setID(ID);
		s1.setFirst(first);
		s1.setLast(last);
		s1.setBirthday(birthday);
		s1.setGender(gender);
		s1.setStatus(status);
		s1.setGPA(GPA);
		Student nStudent = new Student(ID,first,last,birthday,gender,status,GPA);
		studentList.push_back(nStudent);
	}

	inFile.close();

  	displayMenu();

		cin >> input; cout << endl;
		
//Validating menu input
		iValidate(input);

//Loop for edits to the list
	while(input != 5){
			switch(input){
				case 1: cout << "Please enter the ID" << endl;
										cin >> ID;
										idValidate(ID);
										while(it != studentList.end()){
													if(ID == it -> getID()){
													cout << "Sorry, id is already taken, please re-enter an ID" << endl;
													cin >> ID;	
												}
										it++;
										}
										s1.setID(ID);
								cout << "Please enter the first name" << endl;
										cin >> first;
										s1.setFirst(first);
								cout << "Please enter the last name" << endl;
										cin >> last;
										s1.setLast(last);
								cout << "Please enter the status" << endl;
										cin >> status;
										gValidate(status);
										s1.setStatus(status);
								cout << "Please enter the birthday" << endl;
										cin >> birthday;
										s1.setBirthday(birthday);
								cout << "Please enter the gender" << endl;
										cin >> gender;
										cValidate(gender);
										s1.setGender(gender);
								cout << "Please enter the GPA" << endl;
										cin >> GPA;
										s1.setGPA(GPA);
								
								studentList.insert(it,s1);
								it++;
								break;
				case 2:	cout << "Please enter the ID for the student you would like to modify" << endl;
										cin >> ID;
										idValidate(ID);
											while(it != studentList.end()){
												if(ID == it -> getID()){
													cout << "Sorry, id is already taken, please re-enter an ID" << endl;
													cin >> ID;	
												}
										it++;
										}
										found = false;
									for(it = studentList.begin();it != studentList.end(); it++){	
											if(it -> getID() == ID){
												cout << "Please enter the ID" << endl;
													cin >> ID;
													idValidate(ID);
													s1.setID(ID);
												cout << "Please enter the first name" << endl;
													cin >> first;
													s1.setFirst(first);
												cout << "Please enter the last name" << endl;
													cin >> last;
													s1.setLast(last);
												cout << "Please enter the status" << endl;
													cin >> status;
													gValidate(status);
													s1.setStatus(status);
												cout << "Please enter the birthday" << endl;
													cin >> birthday;
													s1.setBirthday(birthday);
												cout << "Please enter the gender" << endl;
													cin >> gender;
													cValidate(gender);
													s1.setGender(gender);
											cout << "Please enter the GPA" << endl;
													cin >> GPA;
													s1.setGPA(GPA);
											studentList.insert(it,s1);
												it++;
												found = true;
											}
									}	
									if(!found)
										cout << "Sorry, ID was not found" << endl;
									
								break;
			
					case 3:	cout << endl << "Delete" << endl;
								cout << "Please enter the ID number when you would like to delete" << endl;
								cin >> ID;
								idValidate(ID);
									found = false;
								for(it=studentList.begin(); it != studentList.end();it++){
										if(it -> getID() == ID){
											studentList.erase(it);
											found = true;
										}
									}
									if(!found)
										cout << "sorry, not found" << endl;
								break;
				case 4:			cout << endl << "Retrieve student by one of the following: \n1)student ID\n2)gender\n3)birthday\n4)status" << endl;
										cin >> x;
										if(x == 1){
											cout << "Enter ID" << endl;
											cin >> sInput;
											idValidate(sInput);
											for(it = studentList.begin(); it!= studentList.end();it++){
												if(sInput == it -> getID()){
													cout << it -> getID() << endl << it -> getFirst() << endl << it -> getLast() << endl;
													cout << it -> getStatus() << endl << it -> getBirthday() << endl << it -> getGender() << endl;
													cout << it -> getGPA() << endl;
												}
											}
										}
										else if(x == 2){
											cout << "Enter gender" << endl;
											cin >> gender;
											cValidate(gender);
										for(it = studentList.begin(); it!= studentList.end();it++){
												a
													cout << it -> getID() << endl << it -> getFirst() << endl << it -> getLast() << endl;
													cout << it -> getStatus() << endl << it -> getBirthday() << endl << it -> getGender() << endl;
													cout << it -> getGPA() << endl;
												}
											}
										}

										
										else if(x == 3){
											cout << "Enter birthday" << endl;
											cin >> sInput;
											for(it = studentList.begin(); it!= studentList.end();it++){
												if(sInput == it -> getBirthday()){
													cout << it -> getID() << endl << it -> getFirst() << endl << it -> getLast() << endl;
													cout << it -> getStatus() << endl << it -> getBirthday() << endl << it -> getGender() << endl;
													cout << it -> getGPA() << endl;
												}
											}
										}

										
										else if(x == 4){
											cout << "Enter grade" << endl;
											cin >> sInput;
											gValidate(sInput);
											for(it = studentList.begin(); it!= studentList.end();it++){
												if(sInput == it -> getStatus()){
													cout << it -> getID() << endl << it -> getFirst() << endl << it -> getLast() << endl;
													cout << it -> getStatus() << endl << it -> getBirthday() << endl << it -> getGender() << endl;
													cout << it -> getGPA() << endl;
												}
											}
										}

										
								break;
				
			}
		displayMenu();
			cin >> input;
		iValidate(input);
		}
	
				ofstream outFile;
	 			outFile.open("Student.txt");
					it = studentList.begin();
				while (it != studentList.end()){
						outFile << it->getID() << endl << it->getFirst() << endl << it->getLast() << endl << it-> getStatus() << endl << it -> getBirthday() << endl << it -> getGender() << endl << it -> getGPA() << endl << endl;
				it++;	
		}

		outFile.close();



	cout << endl << "The list of students has been exported to a .txt file" << endl << endl;
	return 0;
	}


void iValidate(int& variable){
		//menu validation
			while(variable < 1 || variable > 5 || !cin){
			  		cin.clear();
						cin.ignore();
						cout << "Sorry, please insert an integer between 1 - 5" << endl;
						cin >> variable;
					}
}

void idValidate(string& variable){
			//student ID validation
			bool id = true;
			int size = variable.length(); 
				while(size != 8){
						cout << "Sorry, enter a correct 8 digit ID number" << endl;
						cin >> variable;
						size = variable.length();
				}
}

//student grade validation	
void gValidate(string& variable){		
	while (variable != "senior" && variable != "freshman" && variable != "sophomore" && variable!= "junior"){
					cout << variable << endl;
					cout << endl << "Sorry, please enter a valid class year (freshman,sophomore,junior,senior)" << endl;
					cin >> variable;
				}

}

void cValidate(char& c){
	while(c != 'M' && c != 'm' && c != 'F' && c != 'f'){
			cout << "sorry, input is not valid\nPlease indicate the gender by inputting (M) or (F)" << endl;
				cin >> c;
		}
}
void displayMenu(){

	cout << "Please input a selection from the menu:" << endl;
	cout << " 1) Insert a new student \n 2) Modify a current student \n 3) Delete a students information \n 4) Retrieve a student from the list \n 5) Export the list to a file"  << endl;

}




