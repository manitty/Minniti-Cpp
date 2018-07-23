#include <iostream>

#include "miniQueueDA.h"
#include "miniQueueLT.h"
#include "miniQueueVT.h"
#include "ministackDA.h"
#include "ministackLT.h"
#include "ministackVT.h"
using namespace std;

//menu input testing for QueueDA
void testQueueDA()
{
	miniQueueDA<int> QueueDA;
	int input;

	cout << "Select a function of QueueDA to test:" << endl;
	cout << "[1]- Add to the Queue" << endl;
	cout << "[2]- Print out the values in the Queue" << endl;
	cout << "[3]- Get the size of the Queue" << endl;
	cout << "[4]- Remove a value from the front of the Queue" << endl;
	cout << "[5]- Print the first value in the Queue" << endl;
	cout << "[6]- Check if the Queue is empty" << endl;
	cout << "[7]- Remove all values from the Queue" << endl;
	cout << "[8]- Return to main Menu" << endl;
	cin >> input;
	cout << endl;

	do{
		// Add option
		if (input == 1)
		{
			int counter;
			cout << "how many items would you like to add?:" << endl;
			cin >> counter;
			cout << endl;
			for (int i = 0; i < counter; i++)
			{
				int item;
				cout << "Entering item " << i + 1 << " of " << counter << " :" << endl;
				cin >> item;
				cout << endl;
				QueueDA.enqueue(item);
			}
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}
		//Print option
		else if (input == 2)
		{
			cout << "Printing all items in the Queue:" << endl;
			QueueDA.PrintQueue();
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}
		//Size option
		else if (input == 3)
		{
			cout << "The Size of the Queue is :" << QueueDA.size() << endl;
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}
		//Remove option
		else if (input == 4)
		{
			cout << "Removing " << QueueDA.dequeue() << " from the Queue." << endl;
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}
		// First value option
		else if (input == 5)
		{
			cout << "The item at the front of the Queue is :" << QueueDA.front() << endl;
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}
		// Is empty option
		else if (input == 6)
		{
			QueueDA.Empty();
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}
		//Delete all option
		else if (input == 7)\
		{
			int initialSize = QueueDA.size();
			for (int counter = 0; counter < initialSize; counter++)
			{
				cout << "Removing " << QueueDA.dequeue() << " from the Queue." << endl;
			}
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}
		// Exit option
	} while (input != 8);
	return;
}

//menu input testing for QueueLT
void testQueueLT()
{

	miniQueueLT<int> QueueLT;
	int input;

	cout << "Select a function of QueueLT to test:" << endl;
	cout << "[1]- Add to the Queue" << endl;
	cout << "[2]- Print out the values in the Queue" << endl;
	cout << "[3]- Get the size of the Queue" << endl;
	cout << "[4]- Remove a value from the front of the Queue" << endl;
	cout << "[5]- Print the first value in the Queue" << endl;
	cout << "[6]- Check if the Queue is empty" << endl;
	cout << "[7]- Remove all values from the Queue" << endl;
	cout << "[8]- Return to main Menu" << endl;
	cin >> input;
	cout << endl;

	do{

		// Add option
		if (input == 1)
		{
			int counter;
			cout << "how many items would you like to add?:" << endl;
			cin >> counter;
			cout << endl;
			for (int i = 0; i < counter; i++)
			{
				int item;
				cout << "Entering item " << i + 1 << " of " << counter << " :" << endl;
				cin >> item;
				cout << endl;
				QueueLT.enqueue(item);
			}
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Print option
		else if (input == 2)
		{
			cout << "Printing all items in the Queue:" << endl;
			QueueLT.PrintQueue();
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Size option
		else if (input == 3)
		{
			cout << "The Size of the Queue is :" << QueueLT.size() << endl;
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Remove option
		else if (input == 4)
		{
			int item;
			item = QueueLT.front();
			cout << "Removing " << QueueLT.front() << " from the Queue." << endl;
			QueueLT.dequeue();
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		// First value option
		else if (input == 5)
		{
			cout << "The item at the front of the Queue is :" << QueueLT.front() << endl;
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		// Is empty option
		else if (input == 6)
		{
			QueueLT.Empty();
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Delete all option
		else if (input == 7)\
		{
			int initialSize = QueueLT.size();
			for (int counter = 0; counter < initialSize; counter++)
			{
				cout << "Removing " << QueueLT.front() << " from the Queue." << endl;
				QueueLT.dequeue();
			}
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

	// Exit option
	} while (input != 8);
	return;

}

//menu imput testing for QueueVT
void testQueueVT()
{
	miniQueueVT<int> QueueVT;
	int input;

	cout << "Select a function of QueueVT to test:" << endl;
	cout << "[1]- Add to the Queue" << endl;
	cout << "[2]- Print out the values in the Queue" << endl;
	cout << "[3]- Get the size of the Queue" << endl;
	cout << "[4]- Remove a value from the front of the Queue" << endl;
	cout << "[5]- Print the first value in the Queue" << endl;
	cout << "[6]- Check if the Queue is empty" << endl;
	cout << "[7]- Remove all values from the Queue" << endl;
	cout << "[8]- Return to main Menu" << endl;
	cin >> input;
	cout << endl;

	do{

		// Add option
		if (input == 1)
		{
			int counter;
			cout << "how many items would you like to add?:" << endl;
			cin >> counter;
			cout << endl;
			for (int i = 0; i < counter; i++)
			{
				int item;
				cout << "Entering item " << i + 1 << " of " << counter << " :" << endl;
				cin >> item;
				cout << endl;
				QueueVT.enqueue(item);
			}
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Print option
		else if (input == 2)
		{
			cout << "Printing all items in the Queue:" << endl;
			QueueVT.PrintQueue();
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Size option
		else if (input == 3)
		{
			cout << "The Size of the Queue is :" << QueueVT.size() << endl;
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Remove option
		else if (input == 4)
		{
			cout << "Removing " << QueueVT.front() << " from the Queue." << endl;
			QueueVT.dequeue();
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		// First value option
		else if (input == 5)
		{
			cout << "The item at the front of the Queue is :" << QueueVT.front() << endl;
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		// Is empty option
		else if (input == 6)
		{
			QueueVT.Empty();
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Delete all option
		else if (input == 7)\
		{
			int initialSize = QueueVT.size();
			for (int counter = 0; counter < initialSize; counter++)
			{
				cout << "Removing " << QueueVT.front() << " from the Queue." << endl;
				QueueVT.dequeue();
			}
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}
	
	// Exit option
	} while (input != 8);
	return;
}

//menu imput testing for StackDA
void testStackDA()
{
	miniStackDA<int> StackDA;
	int input;

	cout << "Select a function of StackDA to test:" << endl;
	cout << "[1]- Add to the top of the Stack" << endl;
	cout << "[2]- Print out the values in the Stack" << endl;
	cout << "[3]- Get the size of the Stack" << endl;
	cout << "[4]- Remove an item from the Top of the Stack" << endl;
	cout << "[5]- Print the Top value in the Stack" << endl;
	cout << "[6]- Check if the Stack is empty" << endl;
	cout << "[7]- Remove all values from the Stack" << endl;
	cout << "[8]- Return to main menu" << endl;
	cin >> input;
	cout << endl;

	do{

		// Add option
		if (input == 1)
		{
			int counter;
			cout << "how many items would you like to add?:" << endl;
			cin >> counter;
			cout << endl;
			for (int i = 0; i < counter; i++)
			{
				int item;
				cout << "Entering item " << i + 1 << " of " << counter << " :" << endl;
				cin >> item;
				cout << endl;
				StackDA.push(item);
			}
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Print option
		else if (input == 2)
		{
			cout << "Printing all items in the Stack:" << endl;
			StackDA.PrintStack();
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Size option
		else if (input == 3)
		{
			cout << "The Size of the Stack is :" << StackDA.size() << endl;
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Remove option
		else if (input == 4)
		{
			cout << "Removing " << StackDA.pop() << " from the Stack." << endl;
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		// First value option
		else if (input == 5)
		{
			cout << "The item at the front of the Stack is :" << StackDA.front() << endl;
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		// Is empty option
		else if (input == 6)
		{
			StackDA.Empty();
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Delete all option
		else if (input == 7)\
		{
			int initialSize = StackDA.size();
			for (int counter = 0; counter < initialSize; counter++)
			{
				cout << "Removing " << StackDA.pop() << " from the Stack." << endl;
			}
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}		
	
	// Exit option
	} while (input != 8);
	return;
}

//menu imput testing for StackLT
void testStackLT()
{
	
	miniStackLT<int> StackLT;
	int input;

	cout << "Select a function of StackLT to test:" << endl;
	cout << "[1]- Add to the top of the Stack" << endl;
	cout << "[2]- Print out the values in the Stack" << endl;
	cout << "[3]- Get the size of the Stack" << endl;
	cout << "[4]- Remove an item from the Top of the Stack" << endl;
	cout << "[5]- Print the Top value in the Stack" << endl;
	cout << "[6]- Check if the Stack is empty" << endl;
	cout << "[7]- Remove all values from the Stack" << endl;
	cout << "[8]- Return to main menu" << endl;
	cin >> input;
	cout << endl;

	do{

		// Add option
		if (input == 1)
		{
			int counter;
			cout << "how many items would you like to add?:" << endl;
			cin >> counter;
			cout << endl;
			for (int i = 0; i < counter; i++)
			{
				int item;
				cout << "Entering item " << i + 1 << " of " << counter << " :" << endl;
				cin >> item;
				cout << endl;
				StackLT.push(item);
			}
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Print option
		else if (input == 2)
		{
			cout << "Printing all items in the STack:" << endl;
			StackLT.PrintStack();
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Size option
		else if (input == 3)
		{
			cout << "The Size of the Stack is :" << StackLT.size() << endl;
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Remove option
		else if (input == 4)
		{
			cout << "Removing " << StackLT.front() << " from the Stack." << endl;
			StackLT.pop();
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		// First value option
		else if (input == 5)
		{
			cout << "The item at the front of the Stack is :" << StackLT.front() << endl;
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		// Is empty option
		else if (input == 6)
		{
			StackLT.Empty();
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Delete all option
		else if (input == 7)\
		{
			int initialSize = StackLT.size();
			for (int counter = 0; counter < initialSize; counter++)
			{
				cout << "Removing " << StackLT.front() << " from the Stack." << endl;
				StackLT.pop();
			}
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

	// Exit option
	} while (input != 8);
	return;
}


//menu imput testing for StackVT
void testStackVT()
{
	
	miniStackVT<int> StackVT;
	int input;

	cout << "Select a function of StackDA to test:" << endl;
	cout << "[1]- Add to the top of the Stack" << endl;
	cout << "[2]- Print out the values in the Stack" << endl;
	cout << "[3]- Get the size of the Stack" << endl;
	cout << "[4]- Remove an item from the Top of the Stack" << endl;
	cout << "[5]- Print the Top value in the Stack" << endl;
	cout << "[6]- Check if the Stack is empty" << endl;
	cout << "[7]- Remove all values from the Stack" << endl;
	cout << "[8]- Return to main menu" << endl;
	cin >> input;
	cout << endl;

	do{

		// Add option
		if (input == 1)
		{
			int counter;
			cout << "how many items would you like to add?:" << endl;
			cin >> counter;
			cout << endl;
			for (int i = 0; i < counter; i++)
			{
				int item;
				cout << "Entering item " << i + 1 << " of " << counter << " :" << endl;
				cin >> item;
				cout << endl;
				StackVT.push(item);
			}
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Print option
		else if (input == 2)
		{
			cout << "Printing all items in the STack:" << endl;
			StackVT.PrintStack();
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Size option
		else if (input == 3)
		{
			cout << "The Size of the Stack is :" << StackVT.size() << endl;
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Remove option
		else if (input == 4)
		{
			cout << "Removing " << StackVT.top() << " from the Stack." << endl;
			StackVT.pop();
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		// First value option
		else if (input == 5)
		{
			cout << "The item at the front of the Stack is :" << StackVT.top() << endl;
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		// Is empty option
		else if (input == 6)
		{
			StackVT.empty();
			cout << endl;
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}

		//Delete all option
		else if (input == 7)\
		{
			int initialSize = StackVT.size();
			for (int counter = 0; counter < initialSize; counter++)
			{
				cout << "Removing " << StackVT.top() << " from the Stack." << endl;
				StackVT.pop();
			}
			cout << "Select another menu action:" << endl;
			cin >> input;
			cout << endl;
		}
		
	// Exit option
	} while (input != 8);
	return;
	
}

//menu function
int main()
{
	int choice;
	cout << "....Welcome!!...." << endl;
	cout << "Starting Program!" << endl;
	cout << "................." << endl;
	cout << "Please select a driver to test:" << endl;
	cout << "[1]- miniQueueDA" << endl;
	cout << "[2]- miniQueueLT" << endl;
	cout << "[3]- miniQueueVT" << endl;
	cout << "[4]- miniStackDA" << endl;
	cout << "[5]- miniStackLT" << endl;
	cout << "[6]- miniStackVT" << endl;
	cout << "[7]- Exit program" << endl;
	cin >> choice;
	cout << endl;
	
	do
	{
		if (choice == 1)
		{
			testQueueDA();
			cout << "Please select a driver to test:" << endl;
			cout << "[1]- miniQueueDA" << endl;
			cout << "[2]- miniQueueLT" << endl;
			cout << "[3]- miniQueueVT" << endl;
			cout << "[4]- miniStackDA" << endl;
			cout << "[5]- miniStackLT" << endl;
			cout << "[6]- miniStackVT" << endl;
			cout << "[7]- Exit program" << endl;
			cout << "Enter another driver to test:" << endl;
			cin >> choice;
			cout << endl;
		}
		else if (choice == 2)
		{
			testQueueLT();
			cout << "Please select a driver to test:" << endl;
			cout << "[1]- miniQueueDA" << endl;
			cout << "[2]- miniQueueLT" << endl;
			cout << "[3]- miniQueueVT" << endl;
			cout << "[4]- miniStackDA" << endl;
			cout << "[5]- miniStackLT" << endl;
			cout << "[6]- miniStackVT" << endl;
			cout << "[7]- Exit program" << endl;
			cout << "Enter another driver to test:" << endl;
			cin >> choice;
			cout << endl;
		}
		else if (choice == 3)
		{
			testQueueVT();
			cout << "Please select a driver to test:" << endl;
			cout << "[1]- miniQueueDA" << endl;
			cout << "[2]- miniQueueLT" << endl;
			cout << "[3]- miniQueueVT" << endl;
			cout << "[4]- miniStackDA" << endl;
			cout << "[5]- miniStackLT" << endl;
			cout << "[6]- miniStackVT" << endl;
			cout << "[7]- Exit program" << endl;
			cout << "Enter another driver to test:" << endl;
			cin >> choice;
			cout << endl;
		}
		else if (choice == 4)
		{
			testStackDA();
			cout << "Please select a driver to test:" << endl;
			cout << "[1]- miniQueueDA" << endl;
			cout << "[2]- miniQueueLT" << endl;
			cout << "[3]- miniQueueVT" << endl;
			cout << "[4]- miniStackDA" << endl;
			cout << "[5]- miniStackLT" << endl;
			cout << "[6]- miniStackVT" << endl;
			cout << "[7]- Exit program" << endl;
			cout << "Enter another driver to test:" << endl;
			cin >> choice;
			cout << endl;
		}
		else if (choice == 5)
		{
			testStackLT();
			cout << "Please select a driver to test:" << endl;
			cout << "[1]- miniQueueDA" << endl;
			cout << "[2]- miniQueueLT" << endl;
			cout << "[3]- miniQueueVT" << endl;
			cout << "[4]- miniStackDA" << endl;
			cout << "[5]- miniStackLT" << endl;
			cout << "[6]- miniStackVT" << endl;
			cout << "[7]- Exit program" << endl;
			cout << "Enter another driver to test:" << endl;
			cin >> choice;
			cout << endl;
		}
		else if (choice == 6)
		{
			testStackVT();
			cout << "Please select a driver to test:" << endl;
			cout << "[1]- miniQueueDA" << endl;
			cout << "[2]- miniQueueLT" << endl;
			cout << "[3]- miniQueueVT" << endl;
			cout << "[4]- miniStackDA" << endl;
			cout << "[5]- miniStackLT" << endl;
			cout << "[6]- miniStackVT" << endl;
			cout << "[7]- Exit program" << endl;
			cout << "Enter another driver to test:" << endl;
			cin >> choice;
			cout << endl;
		}
	} while (choice != 7);

	return 0;
}