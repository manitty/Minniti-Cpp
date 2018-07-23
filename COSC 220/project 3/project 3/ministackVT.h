#include <iostream>
#include <vector>
using namespace std;

#ifndef MINISTACKVT_H
#define MINISTACKVT_H

template <typename T>
class miniStackVT{

	private:
		vector<T> MSV;

	public:
		miniStackVT();
		bool empty() const; //Checks if stack is empty
		void pop(); // deletes from the stack
		void push(const T& item); // adds to the stack
		int size() const; //checks the size of the stack
		T& top(); //returns the top item
		const T& top() const; //returns the top item
		void PrintStack() const; // prints the stack


};


template<typename T>
miniStackVT<T>::miniStackVT(){

}

//Checks if stack is empty
template<typename T>
bool miniStackVT<T>::empty() const{
	if (MSV.empty())
	{
		cout << "StackVT is empty" << endl;
	}
	else
	{
		cout << "StackVT is not empty" << endl;
	}
	return 0;
}

// deletes from the stack
template<typename T>
void miniStackVT<T>::pop(){
	MSV.pop_back();
}

// adds to the stack
template<typename T>
void miniStackVT<T>::push(const T& item){
	MSV.push_back(item);
}

//checks the size of the stack
template<typename T>
int miniStackVT<T>::size() const{
	return MSV.size();
}

//returns the top item
template<typename T>
T& miniStackVT<T>::top(){
	return MSV.back();
}

//returns the top item
template<typename T>
const T& miniStackVT<T>::top() const{
	return MSV.back();
}

// prints the stack
template<typename T>
void miniStackVT<T>::PrintStack() const
{
	typename vector<T>::const_iterator iter;

	for (iter = MSV.begin(); iter != MSV.end(); iter++)
	{
		cout << *iter << endl;
	}
}
#endif
