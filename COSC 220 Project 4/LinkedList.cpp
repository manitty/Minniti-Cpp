//LinkedList.cpp

#include "LinkedList.h"
#include "Node.h"
#include<iostream>
/Users/ncriley94/Downloads/documents-export-2015-10-01 (1)/Node.cpp
using namespace std;



LinkedList ::~ LinkedList(){
    
   Node* t;
	if(list == NULL){
		cout << "list is empty" << endl;

	}
	else{
		t = list -> next;
		while(t != NULL){
			cout << "idNumber was deleted" << endl;
			list = t;
			t = t -> next;
			delete list;
		}
		cout << "the idNumber has been deleted" << endl;
		delete list;
	}

}


LinkedList :: LinkedList(){
     list = NULL;


}

Node *LinkedList::createNode(){
    Node *newNode = new Node;
    return newNode;    

    cout << "enter first name" << endl;
    cin >> newNode ->firstName;
    cout << "enter last name" << endl;
    cin >> newNode -> lastName;
    cout << "enter idNumber" << endl;
    cin >> newNode -> idNumber;
    
   
    return newNode;

}


Node *LinkedList::searchLocation(int idNum){
    Node *temp1;
    temp1 = list;
    Node *tNULL = NULL;
    bool stat = true;

   //iterates through list to find memory address of the node
    if(stat == true){
    while(temp1 != NULL){

         if(temp1 -> idNumber == idNum){
            return temp1;
        }
       
        
    temp1 = temp1 -> next;
    
        }
    }
    return tNULL;
}


void  LinkedList::printList(){
    Node *t = list;
    if(t == NULL){
	cout << "the list is empty" << endl;   //If list is empty, output empty list
    }
    while(t != NULL){                        //otherwise print list of nodes
        t ->printNode();        
    t = t -> next;
    }


}

Node * LinkedList::searchLocation2(int idNum){
	Node * temp1;
	temp1 = list;
	Node *tNULL = NULL;
	bool stat = false;

	if(list != NULL){
		if(temp1 -> idNumber == idNum){
				stat = true;
			}
		while(temp1 -> next != NULL && !stat){
			if(temp1 -> next -> idNumber == idNum){
				stat = true;
				if(temp1 -> next == NULL && temp1 -> idNumber == idNum){
					stat = true;
				}
			}
			if(!stat){
				temp1 = temp1 -> next;
				}
				//return temp1;
		}
	return temp1;
	}
	return temp1;

}	



void  LinkedList::searchNode(){

    int idNum;
    cout << "enter an id number to search for" << endl;
    cin >> idNum;
    Node *temp;
    temp = searchLocation(idNum);

    if (temp == NULL){
        cout << " data is not available in list" << endl;
    }

    
    else  if(temp -> idNumber == idNum){
        cout << "idNumber was found" << endl;
        cout << "the last name is " << temp -> lastName << endl;
        cout << "the first name is " << temp -> firstName << endl;
        cout << "the id number is " << temp -> idNumber << endl;

    }
    else  if(temp != NULL){
        cout << "idNumber was found" << endl;
        cout << "the last name is " << temp -> next -> lastName << endl;
        cout << "the first name is " << temp -> next -> firstName << endl;
        cout << "the id number is " << temp -> next -> idNumber << endl;
    }
   


    



}


void LinkedList::insertNode(){
    Node *newNode = createNode();
    Node *temp1;
    temp1 = list;

    
   while(temp1 != NULL){
	 // checks if id number has already been entered
        if(newNode -> idNumber == temp1 -> idNumber){
            cout << "the idnumber you are tying to enter is already in teh list enter a different one" << endl;
            newNode = createNode();
	
        }
	
        temp1 = temp1 -> next;
	
    }
    Node *temp; 
    temp = list;
        
       
                if(temp == NULL || list -> idNumber > newNode -> idNumber){    // adding to front
			
                        newNode -> next = list;
                        list = newNode;
 

                }  
                        else if(temp -> next==NULL){                   // adding in the back
                                temp ->next= newNode;
                               
                        }
                        else{
                while(temp -> next != NULL && temp -> next -> idNumber < newNode -> idNumber){
                    temp = temp -> next;    
                                
                        }
                             newNode -> next = temp -> next;
                 temp -> next = newNode;
                }

    }

    

void LinkedList::deleteNode(int idNum){
       
  
    if( list == NULL){                   // if there are no nodes in the list

                cout << "there are no nodes in the list to delete" << endl;
                }

    else{
	Node *temp1 = searchLocation2(idNum);
	
	 if(temp1 -> idNumber == idNum){          // deletes node if it is the first in the list
            cout << "the idNumber has been found and will be deleted" << endl;
            list = temp1 -> next;
            delete temp1;
        }

    else if(temp1 -> next != NULL&& temp1 -> next -> idNumber == idNum){   // if the node is not the first node in the list
            cout <<  "the idNumber has been found and will be deleted" << endl;
            Node *td = temp1 -> next;
            temp1 -> next = temp1 -> next -> next;
            delete td;
    
        	}
	else{
		cout << "the id Number was not found" << endl;
	}

	}
    

    

}

