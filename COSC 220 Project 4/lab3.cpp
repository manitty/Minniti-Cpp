//Lab3.cpp

#include <iostream>
#include "LinkedList.h"
#include "Node.h"

using namespace std;

void menu();                                           // function prototype for menu



// function to display the user menu
void menu(){
        cout << "Menu" << endl;
        cout << "1. Insert node" << endl;
        cout << "2. Delete a node" << endl;
        cout << "3. print list" << endl;
        cout << "4. Search a node- search a node and print information for a stuent." << endl;
        cout << "5. Quit program" << endl;

}



int main(){
    
    LinkedList *l1= new LinkedList();
        int input;                                      // variable for user input
                                            
        menu();                                        // call to menu function
        cin >> input;                                   // prompting the user to enter the input they want


        if(input < 1 || input > 5){
                cout << "error invalid input please enter a number between 1 and 5" << endl;
                cin >> input;
                }

                while(input != 5){

                        if(input== 1){
                                l1 -> insertNode();
                        }
                        else if(input == 2){
                                int num1;
                                cout << "enter a id number to delete" << endl;
                                cin >> num1;
                                l1 -> deleteNode(num1 );                          // call to deleteNode function to delete the list

                        }


                        else if(input == 3){
                               l1-> printList();                                // call to print list function which will print out the list of nodes
                        }
                        else if(input == 4){
                               /* int num2;
                                Node *output;
                                cout << "enter a id number to search for" << endl;
                                cin >> num2;*/
                                l1 ->searchNode();
                                /*if(output == NULL){
                                                // lets the user know that the idNumber they searched was not found
                                                cout << "id number was not found in directory" << endl;
                                        }
                                else if(output !=NULL){
                                                // prints out the found idNumbers information
                                                cout << "id number was found in directory" << endl;
                                                cout << "the last name is " <<  output-> lastName << endl;
                                                cout << "the first name is " <<  output-> firstName << endl;
                                                cout << " the idNumber is " <<  output-> idNumber << endl;
                                        }*/

                        }

                menu();
                cin >> input;
        }
	return 0;
}

