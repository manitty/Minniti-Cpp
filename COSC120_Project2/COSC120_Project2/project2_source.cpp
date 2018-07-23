#include <iostream>
#include <time.h>
using namespace std;

/* Nick Riley	
	This program will run a Baffle game
	created 10/26/13	*/
	
	//Structure Declaration
	struct Grid 
	{
		int content;
		bool found; 
	};
	
	//Constant Variable Declaration
	const int MAXROWS = 10;
	const int MAXCOLS = 10;
	
	//Prototype Declaration
	void laserShot(Grid baffle[][10]);
	void setBaffle(Grid baffle[][10], int level);
	void Guess(Grid baffleSet[][10], int &baffleCount);
	void Score(int gCount, int lShot);
	void displayBoard(Grid baffle[][10]);
	void cheatDisplay(Grid baffle[MAXROWS][MAXCOLS]);
	
int main(){
// Variable Declaration
	char levelChoice, gameChoice;
	int totalBaffles;
	Grid baffle[MAXROWS][MAXCOLS];
	Grid baffles;
	int guessCount = 0,
		laserCount = 0,
		baffleCount = 0;
// Random number generator seed
	srand(time(NULL));
	
// Welcome Message
	cout << "Hello, Welcome to Baffle!" << endl;
	cout << "Enter what level of Baffle you would like to play" << endl;
	cout << "Please input \n 'B' for beginner \n 'I' for intermediate \n 'A' for advanced" << endl;
		cin >> levelChoice;

//Validate input for level choice
while (levelChoice != 'B' && levelChoice != 'I' && levelChoice != 'A')
{
	cout << "Sorry, input invalid...please try again (case-sensitive)" << endl;
	cin >> levelChoice;
}

//Determines how many baffles to set
	if (levelChoice == 'B')
		 totalBaffles = 4;
	else if (levelChoice == 'I')
		 totalBaffles = 7;
	else if (levelChoice == 'A')
		 totalBaffles = 10;

	setBaffle(baffle,totalBaffles);

//Second step of directions
 	do{  cout << "Please enter what step you would like to proceed with" << endl;
    	 cout << " L to shoot a laser \n G to guess \n S for the score \n P to print the baffles \n Q to quit the game \n C to print the baffles but continue playing" << endl;
      		cin >> gameChoice;

//validate input for game choice
	while (gameChoice != 'L' && gameChoice != 'G' && gameChoice != 'S' && gameChoice != 'P' && gameChoice != 'Q' && gameChoice != 'C')
	{
	cout << "Sorry, input invalid...please try again (case-sensitive)" << endl;
	cin >> gameChoice;
	}

	switch (gameChoice)
	{
	case 'L': laserShot(baffle);
			  laserCount++;
		break;
	case 'G': Guess(baffle, baffleCount);
			  guessCount++;
		break;
	case 'S': Score(guessCount, laserCount);
		break;
	case 'P': displayBoard(baffle);
		break;
	case 'Q': 
		cout << "Thanks for playing! I hope you enjoyed your game!" << endl;
		break;
	case 'C': cheatDisplay(baffle);
		break;
	}
	
	  }  while (gameChoice != 'Q' && totalBaffles > baffleCount);
	  
	  cout << " You have won baffle! \n I hope you enjoyed your game!" << endl;
	  cout << "Final score is " << (guessCount * 2) + laserCount << endl;


}



//Function to allow user to shoot a laser to discover where the baffles are
void laserShot(Grid baffle[][10])
{
	int a = 0, 
		b = 0,
		c = 0,
		exit = 0;
//User input then validation 
	int coord;
	cout << "Please enter the coordinate to shoot the laser from" << endl;
		cin >> coord;

	while (coord < 0 || coord > 39)
	{
	 cout << "Error, invalid laser coordinate...please try again" << endl;
		cin >> coord;
	}

// sets coordinate and direction for laser shot
if (coord >= 0 && coord <=9)
{
	a = 0;
	b = 9 - coord;
	c = 1;          //RIGHT
}
else if (coord >= 10 && coord <= 19)
{
	a = coord - 10;
	b = 0;
	c = 2;			//DOWN
}
else if (coord >= 20 && coord <= 29)
{
	a = 9;
	b = coord - 20;
	c = 3;			//LEFT
}
else if(coord >= 30 && coord <= 39)
{
	a = 39 - coord;
	b = 9;
	c = 4;			//UP
}

	while((a >= 0 && a <= 9) && (b >= 0 && b <= 9))
{
	if (c == 1)
	{
		if (baffle[a][b].content == 1)
		c = 4;
		else if (baffle[a][b].content == -1)
		c = 2;	
	}
	if (c == 2)
	{	
		if (baffle[a][b].content == 1)
			c = 3;
		else if (baffle[a][b].content == -1)
			c = 1;
	}
	if (c == 3)
	{
		if (baffle[a][b].content == 1)
			c = 4;
		else if (baffle[a][b].content == -1)
			c = 2;
	}
		if (c == 4)	
	{
		if (baffle[a][b].content == 1)
			c = 3;
		else if (baffle[a][b].content == -1)
			c = 1;
	}
		if (c==1)
		a++;
		else if (c==2)
		b++;
		else if (c==3)
		a--;
		else if (c==4)
		b--;

		if (a < 0)
		exit = 9 - b;
		else if (a > 9)
		exit = b + 20;
		else if (b < 0)
		exit = a + 10;
		else if (a > 9)
		exit = 39 - b;
}
	cout << "Exited at " << exit << endl; 
	cout << endl;
						
}


//Function to set the baffles randomly according to level of difficulty
void setBaffle(Grid baffle[MAXROWS][MAXCOLS], int level)
{
	int dir;
	for (int i = 0; i < MAXROWS; i++)
	{
		for(int j = 0; j < MAXCOLS; j++)
		{
			baffle[i][j].content = 0;
			baffle[i][j].found = false;
		}
	}
	
	while (level > 0)
	{
	int row = rand()%10;
	int col = rand()%10;

	if(baffle[row][col].content == 0)
	{
		dir = rand()%2;
	}
	if (dir == 1)
			baffle[row][col].content = 1;
	if (dir == 0)
			baffle[row][col].content = -1;
	level--;
	}
}


//Function that allows the user to guess where a baffle is
void Guess(Grid baffle[MAXCOLS][MAXROWS], int &baffleCount)
{
	int location1, location2;
	char direction; 
	int baffleGuess;
//Takes input then validates it per step
	cout << "Please input the row coordinate" << endl;
		cin >> location1;
//Coordinate 1 validation
	while((location1 > 9 && location1 < 20) || (location1 > 29))
	{
		cout << "Error, please input the row coordinate again: " << endl;
			cin >> location1;
	}
	cout << "Please input the column coordinate" << endl;
		cin >> location2;
//Coordinate 2 validation
	while((location2 > 19 && location2 < 30) || (location2 > 39))
	{
		cout << "Error, please input the column coordinate again: " << endl;
			cin >> location2;
	}
	cout << "Please input the direction of the baffle" << endl;
		cin >> direction;
//Direction validation
	while (direction != 'L' && direction != 'R')
	{
		cout << "Sorry, input was invalid...please try again (case-sensitive)" << endl;
			cin >> direction;
	}

	if (location1 >= 0 && location1 <=9)
		location1 = 9 - location1;
	else if(location1 >= 20 && location1 <= 29)
			location1 = location2 - 29;
	
	if (location2 >= 10 && location2 <= 19)
			location2 = location2 - 10;
	else if(location2 >= 30 && location2 <= 39)
			location2 = 39 - location2;
		
	if(direction == 'L')
		baffleGuess = 1;
	else if (direction == 'R')
		baffleGuess	= -1;
	
	//Finds if user has guessed a baffle correctly
	if (baffle[location1][location2].content == baffleGuess)
	{
		cout << "Congratulations! You have found a baffle" << endl;
		baffle[location1][location2].found = true;
		baffleCount++;
		cout << "You have now found " << baffleCount << " baffle(s)" << endl;
	}
	else 
		cout << "Sorry, no baffle was found" << endl;
}


//Function to display the current score
void Score(int gCount, int lShot)
{
	int totalScore;
	cout << "Number of current guesses is " << gCount << endl;
	cout << "Number of current laser shots is " << lShot << endl;
	cout << "Total score is " << (gCount * 2) + lShot << endl;
}

//Function to display the board with the baffles hidden unless already found
void displayBoard(Grid baffle[MAXROWS][MAXCOLS]){
	int top = 10,
		bottom = 39,
		left = 9,
		right = 20;
		
		cout << " ";
	for (int a = 0; a < MAXROWS; a++)
		cout << top + a << " ";
		cout << endl;
	
	for (int i = 0; i < MAXROWS; i++)
	{
		cout << left - i;
		for(int j = 0; j < MAXCOLS; j++)
		{
			cout << "-";
			if(baffle[i][j].content == 0 || (baffle[i][j].content == 1 && baffle[i][j].found != true) || (baffle[i][j].content == -1 && baffle[i][j].found != true))
				cout << "+";
		    if(baffle[i][j].content == 1 && baffle[i][j].found == true)
				cout << "L";
			else if (baffle[i][j].content == -1 && baffle[i][j].found == true)
				cout << "R";
			cout << "-";
		} 
		cout << right + i;
		cout << endl;
	}
		cout << "  ";
	for (int b = 0; b < MAXROWS; b++)
		cout << bottom - b << " ";
		cout << endl;
}


//Cheat function that displays baffles before they are found
void cheatDisplay(Grid baffle[MAXROWS][MAXCOLS])
{
	int top = 10,
		bottom = 39,
		left = 9,
		right = 20;
		
		cout << " ";
	for (int a = 0; a < MAXROWS; a++)
		cout << top + a << " ";
		cout << endl;
	
	for (int i = 0; i < MAXROWS; i++)
	{
		cout << left - i;
		for(int j = 0; j < MAXCOLS; j++)
		{
			cout << "-";
			if(baffle[i][j].content == 0)
				cout << "+";
			else if(baffle[i][j].content == 1)
				cout << "L";
			else if (baffle[i][j].content == -1)
				cout << "R";
			cout << "-";
		} 
		cout << right + i;
		cout << endl;
	}
		cout << "  ";
	for (int b = 0; b < MAXROWS; b++)
		cout << bottom - b << " ";
		cout << endl;
}
// End of Program
