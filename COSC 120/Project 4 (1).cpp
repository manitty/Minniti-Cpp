#include "PatientAccount.h"
#include "Pharmacy.h"
#include "surgery.h"
#include <iomanip>
#include <string>
#include <iostream>
using namespace std;



float calculateCharges(PatientAccount[], int);
int viewPatientFee(PatientAccount[], string,int);
float calculateCharges(PatientAccount patients[], int patNum){
	float totalCharges = 0;
	float surgeryTotal = 0;
	float medTotal = 0;
	if (patients[patNum].surgeryType == 1){
		surgeryTotal = 100;
	}
	if (patients[patNum].surgeryType == 2){
		surgeryTotal = 200;
	}
	if (patients[patNum].surgeryType == 3){
		surgeryTotal = 300;
	}
	if (patients[patNum].surgeryType == 4){
		surgeryTotal = 400;;
	}
	if (patients[patNum].surgeryType == 5){
		surgeryTotal = 500;
	}
	if (patients[patNum].medType == 1){
		medTotal = 10;
	}
	if (patients[patNum].medType == 2){
		medTotal = 20;
	}
	if (patients[patNum].medType == 3){
		medTotal = 30;
	}
	if (patients[patNum].medType == 4){
		medTotal = 40;
	}
	if (patients[patNum].medType == 5){
		medTotal = 50;
	}
	totalCharges = medTotal + surgeryTotal +(patients[patNum].visitLength * 500);
	return totalCharges;
}

int main()
{
	bool cont = true;
	int numPatients = 3;
	char menuInput;
	string patientName = "";
	int numSearch;
	int adjFee;
	int adjPatient;
	int surgGuides;
	int medGuides;
	cout << "Welcome to the Salisbury University Hospital Patient Center." << endl;
	cout << endl;
	cout << endl;
	cout << "How many patients are being entered into the records?";
	cin >> numPatients;
	PatientAccount *patients = new PatientAccount[numPatients];
	for (int i = 0; i < numPatients; i++){
		cout << "Please input the name of Patient #" << (i + 1);
		cin >> patients[i].patientFirstName
			>> patients[i].patientLastName;
		cout << "Please input the number matching the type of surgery required for " << patients[i].patientFirstName << " " << patients[i].patientLastName << endl;
		cout << "Types of Surgery:" << endl;
		cout << "1)Tonsillectomy" << endl << "2)Foot" << endl << "3)Knee" << endl << "4)Shoulder" << endl << "5)Appendectomy" << endl;
		cin >> patients[i].surgeryType;
		cout << "Please input the number matching the " << endl << "type of medication that " << patients[i].patientFirstName << " " << patients[i].patientLastName << " needs:" << endl;
		cout << "Types of meds:" << endl;
		cout << "1)Anti-biotic" << endl << "2)Anti-Nausea" << endl << "3)Anti-Inflamatory" << endl << "4)Light Pain" << endl << "5)Strong Pain" << endl;
		cin >> patients[i].medType;
		cout << "Please input the number of days " << patients[i].patientFirstName << " " << patients[i].patientLastName << " was in care" << endl;
		cin >> patients[i].visitLength;
	}
	for (int i = 0; i < numPatients; i++){
		patients[i].totalCharges = calculateCharges(patients, (i));
	}
	while (cont == true){
		cout << "================================" << endl;
		cout << "Patient Fee Info Database Menu" << endl;
		cout << "================================" << endl;
		cout << "V - View Patient Fee Information" << endl;
		cout << "F - Find Patient Fee Information by Patient Name" << endl;
		cout << "S - Sort Patient Fee Information" << endl;
		cout << "A - Adjust Patient Account Information" << endl;
		cout << "M - Medication Guidlines/Restrictions" << endl;
		cout << "G - Guidelines for Patient Recovery" << endl;
		cout << "Q - Quit the Program" << endl;
		cin >> menuInput;
		switch (menuInput){
		case 'V':
			cout << "(Patient Name)  (Days)   (Surgery)           (Medications)       (Fee)" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			for (int i = 0; i < numPatients; i++){
				cout << left << setw(9) << patients[i].patientFirstName << " " << left << setw(9) << patients[i].patientLastName << setw(7) << patients[i].visitLength;
				if (patients[i].surgeryType == 1){
					cout << setw(20) << "Tonsillectomy";
				}
				if (patients[i].surgeryType == 2){
					cout << setw(20) << "Foot";
				}
				if (patients[i].surgeryType == 3){
					cout << setw(20) << "Knee";
				}
				if (patients[i].surgeryType == 4){
					cout << setw(20) << "Shoulder";
				}
				if (patients[i].surgeryType == 5){
					cout << setw(20) << "Apendectomy";
				}
				if (patients[i].medType == 1){
					cout << setw(20) << "Anti-Biotic";
				}
				if (patients[i].medType == 2){
					cout << setw(20) << "Anti-Nausea";
				}
				if (patients[i].medType == 3){
					cout << setw(20) << "Anti-Inflamatory";
				}
				if (patients[i].medType == 4){
					cout << setw(20) << "Light Pain";
				}
				if (patients[i].medType == 5){
					cout << setw(20) << "Strong Pain";
				}
				cout << setw(1) << right << "$" << patients[i].totalCharges << endl;
			}break;
		case 'F':
			cout << "Please enter the last name of the patient: ";
			cin >> patientName;
			numSearch = viewPatientFee(patients, patientName, numPatients);
			cout << "Patient " << patientName << "'s Total Charges is $" << patients[numSearch].totalCharges << endl;
			break;
		case 'S':
			for (int i = 0; i < numPatients; i++){
				for (int j = 0; j < numPatients; j++){
					if (patients[j].totalCharges < patients[j + 1].totalCharges){
						float tempCharges;
						string tempLastName;
						string tempFirstName;
						int tempLength;
						int tempSurgType;
						int tempMedType;
						tempCharges = patients[j + 1].totalCharges;
						tempLastName = patients[j + 1].patientLastName;
						tempFirstName = patients[j + 1].patientFirstName;
						tempLength = patients[j + 1].visitLength;
						tempSurgType = patients[j + 1].surgeryType;
						tempMedType = patients[j + 1].medType;
						patients[j + 1].patientFirstName = patients[j].patientFirstName;
						patients[j + 1].medType = patients[j].medType;
						patients[j + 1].surgeryType = patients[j].surgeryType;
						patients[j + 1].visitLength = patients[j].visitLength;
						patients[j + 1].patientLastName = patients[j].patientLastName;
						patients[j + 1].totalCharges = patients[j].totalCharges;
						patients[j].totalCharges = tempCharges;
						patients[j].patientLastName = tempLastName;
						patients[j].patientFirstName = tempFirstName;
						patients[j].medType = tempMedType;
						patients[j].visitLength = tempLength;
						patients[j].surgeryType = tempSurgType;
					}
				}
			}
			for (int i = 0; i < numPatients; i++){
				cout << setprecision(2) << fixed << patients[i].patientFirstName << " " << patients[i].patientLastName << "'s Total Charges $" << patients[i].totalCharges << endl;
			}
			break;
		case 'A':
			cout << "Which Patient's Account would you like to adjust? (enter last name): ";
			cin >> patientName;
			for (int i = 0; i < numPatients; i++){
				if (patients[i].patientLastName == patientName){
					adjFee = i;
				}
			}
			cout << "What would you like to change about Patient " << patients[adjFee].patientFirstName << " " << patients[adjFee].patientLastName << "?" << endl;
			cout << "1)Patient Name  2)Days in Hostipital  3)Surgery Type  4)Medications" << endl;
			cout << "Enter the number matching the category you would like to change: ";
			cin >> adjPatient;
			if (adjPatient == 1){
				cout << "Please re enter the patient's first and last name: " << endl;
				cin >> patients[adjFee].patientFirstName
					>> patients[adjFee].patientLastName;
				for (int i = 0; i < numPatients; i++){
					patients[i].totalCharges = calculateCharges(patients, (i));
				}
			}
			else if (adjPatient == 2){
				cout << "Please re enter the number of days " << patients[adjFee].patientFirstName << " " << patients[adjFee].patientLastName << " Spent in the hospital:";
				cin >> patients[adjFee].visitLength;
				for (int i = 0; i < numPatients; i++){
					patients[i].totalCharges = calculateCharges(patients, (i));
				}
			}
			else if (adjPatient == 3){
				cout << "Please re enter the type of surgery for " << patients[adjFee].patientFirstName << " " << patients[adjFee].patientLastName << endl;
				cout << "1)Tonsillectomy" << endl << "2)Foot" << endl << "3)Knee" << endl << "4)Shoulder" << endl << "5)Appendectomy" << endl;
				cin >> patients[adjFee].surgeryType;
				for (int i = 0; i < numPatients; i++){
					patients[i].totalCharges = calculateCharges(patients, (i));
				}
			}
			else if (adjPatient == 4){
				cout << "Please re enter the type of medication for " << patients[adjFee].patientFirstName << " " << patients[adjFee].patientLastName << endl;
				cout << "1)Anti-biotic" << endl << "2)Anti-Nausea" << endl << "3)Anti-Inflamatory" << endl << "4)Light Pain" << endl << "5)Strong Pain" << endl;
				cin >> patients[adjFee].medType;
				for (int i = 0; i < numPatients; i++){
					patients[i].totalCharges = calculateCharges(patients, (i));
				}
			}
			else{
				cout << "Invalid Input." << endl;
			}
			break;
		case 'G':
			cout << "What type of Surgery is the Patient Recovering from? (Enter Corresponding Number)" << endl;
			cout << "1)Tonsillectomy" << endl << "2)Foot" << endl << "3)Knee" << endl << "4)Shoulder" << endl << "5)Appendectomy" << endl;
			cin >> surgGuides;
			if (surgGuides == 1){
				cout << "Tonsillectomy: Refrain from eating extremely hot or extremely sharp foods" << endl;
				cout << "The throat may be sensitive, stick to anything soft. ie Ice Cream, Mashed Potatoes, Soup etc." << endl;
			}
			else if (surgGuides == 2){
				cout << "Foot Surgery: Avoid pressure on foot, ice regularly and start physical therapy after 1-2 Weeks." << endl;
			}
			else if (surgGuides == 3){
				cout << "Knee Surgery: Avoid tension to the Knee, do nothing to hyperextend joint, ice regularly" << endl;
				cout << "and start physical therapy after 2-3 weeks." << endl;
			}
			else if (surgGuides == 4){
				cout << "Shoulder Surgery: Avoid moving shoulder, do nothing to hyperextend joint, ice regularly" << endl;
				cout << "and start physical therapy after 1-2 weeks." << endl;
			}
			else if (surgGuides == 5){
				cout << "Rest for 1-2 Weeks post-op, refrain from physical activities that may rupture any work done." << endl;
			}
			else{
				cout << "Incorrect Input." << endl;

			}
			break;
		case 'M':
			cout << "What type of medication is the patient recieving? (enter corresponding number)" << endl;
			cout << "1)Anti-biotic" << endl << "2)Anti-Nausea" << endl << "3)Anti-Inflamatory" << endl << "4)Light Pain" << endl << "5)Strong Pain" << endl;
			cin >> medGuides;
			if (medGuides == 1){
				cout << "Anti-Biotic: Do not exceed reccomended dosage and do not take with Alcohol." << endl;
			}
			else if (medGuides == 2){
				cout << "Anti-Nausea: Do not exceed reccomended dosage, do not take with Alcohol, do not take with other ";
				cout << "anti-nausea medicines or other anti-biotics." << endl;
			}
			else if (medGuides == 3){
				cout << "Anti-Inflamatory: Do not exceed reccomended dosage, do not take with Alcohol, do not take with other ";
				cout << "anti-inflamatory medicines or other anti-biotics." << endl;
			}
			else if (medGuides == 4){
				cout << "Light Pain: Do not exceed reccomended dosage, do not take with Alcohol, do not take with other ";
				cout << "Pain medicines." << endl;
			}
			else if (medGuides == 5){
				cout << "Strong Pain: Do not exceed reccomended dosage, do not take with Alcohol, do not take with other ";
				cout << "Pain medicines, Do not take and operate heavy Machinery or drive." << endl;
			}
			else{
				cout << "Incorrect Input." << endl;

			}
			break;

		case 'Q':
			cout << "Thank you for using this program!" << endl;
			cont = false;
			break;
		}

	}
}
int viewPatientFee(PatientAccount patients[], string patientName,int numPat){
	int searchNum = 0;
	for (int i = 0; i < numPat; i++){
		if (patients[i].patientLastName == patientName){
			searchNum = i;
		}
}
	return searchNum;

}