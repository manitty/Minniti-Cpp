#include <iomanip>
using namespace std;



class Student{


public:
	string lastName;
	string firstName;
	string birthDate;
	string year;
	char gender;
	float GPA;
	int studentID;

	Student();
	Student(string &lastName, string &firstName, string &birthDate, string &year, char &gender, float &GPA, int &studentID);
	void setlastName(string ln);
	void setfirstName(string fn);
	void setbirthDate(string bd);
	void setyear(string y);
	void setgender(char gn);
	void setGPA(float grade);
	void setid(int id);
	string getlastName();
	string getfirstName();
	string getbirthDate();
	string getyear();
	char getgender();
	float getGPA();
	int &getid();

};
