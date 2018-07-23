//Nick Riley
//Project 1
//Created 7:54 pm

#include <iostream>
#include <stdlib.h>
#include "GameBoard.h"
using namespace std;

GameBoard:: GameBoard(int x, int y, int z){
	width = x;
	height = y;
	numMines = z;
}

GameBoard:: GameBoard(){

}

void GameBoard:: buildBoard(){
	board = new Cell *[height];
		for (int a = 0; a < height; a++){
			board[a]= new Cell[width];
		}
		for (int i = 0; i < height; i++){
			for(int j = 0; j < width; j++){
				board[i][j].covered = true;
				board[i][j].flagged = false; 
				board[i][j].mined = false;
				board[i][j].setMine = false;
			}
		}
}	

void GameBoard:: setMines(){
	for(int i = 0; i < numMines; i++)
	board[rand()%width][rand()%height].setMine = true;
}

void GameBoard:: printBoard(){
	for (int i = 0; i < width; i++)
		cout << "  " << i + 1;
			for (int i = 0; i < width; i++){
				cout << endl << i + 1;
			for (int j = 0; j < height; j++){
			 	if (board[i][j].covered == true)
					cout << " - ";
				else if(board[i][j].covered == false && board[i][j].flagged == true)
					cout << " F ";
				else if(board[i][j].covered == false && board[i][j].setMine == true)
					cout << " M ";
				else if(board[i][j].covered == false && board[i][j].setMine == false)
					cout << " 0 ";
				}			
	cout << endl;
	}
	}

void GameBoard:: uncover(int x, int y){
	if (x < 0 || y < 0 || x > height || y > width)
		return;
		
	if(board[x-1][y-1].covered == false)
		return;
	if(board[x-1][y-1].
	
	if (board[x-1][y-1].setMine == false)
		board[x-1][y-1].covered = false;
	else if (board[x-1][y-1].setMine == true)
		board[x-1][y-1].covered = false;
		
	
	
}

void GameBoard:: toggleFlag(int x, int y){
	board[x-1][y-1].covered = false;
	board[x-1][y-1].flagged = true;
}

bool GameBoard:: isplayerWin(){
	for (int i = 0; i < height; i++){
		for(int j = 0; j < width; j++){
			if (board[i][j].covered == false && board[i][j].setMine == false && j == height * width){
				cout << "Congratuation you won!" << endl;
				return true;
		} 	}
	}
}

bool GameBoard:: iscomputerWin(){
	for (int i = 0; i < height; i++){
			for(int j = 0; j < width; j++){
				if (board[i][j].covered == false && board[i][j].setMine == true){
					cout << "Sorry, you lost! \n restart the program to try again!" << endl;
					return true; 
				} 
}
}

return false;
}

GameBoard::~GameBoard(){
}
