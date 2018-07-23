//Nick Riley
//Project 1
//Created 7:51 pm 

#ifndef GAMEBOARD_H
#define GAMEBOARD_H
using namespace std;

class Cell{
public:
	bool covered;
	bool flagged;
	bool mined;
	bool setMine;
};

class GameBoard{
private:
	int width; 
	int height;
	int numMines;
	Cell ** board;
public:
GameBoard(int x, int y, int z);
GameBoard();
~GameBoard();
void buildBoard();
void printBoard();
void uncover(int x, int y);
void toggleFlag(int x, int y);
void setMines();
bool isplayerWin();
bool iscomputerWin();
};


#endif

