/*
 * main.c
 *
 *  Created on: Nov 28, 2015
 *      Author: gena
 */

//---Standard header files---
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//---PreDefiners----
#define N 8

//---Global variables---
int  x,y; //Board's Coordinates

char board[N][N]={    //Two dimensional array for representing chess boar
			{'R','N','B','Q','K','B','N','R'},
			{'P','P','P','P','P','P','P','P'},
			{' ',' ',' ',' ',' ',' ',' ',' '},
			{' ',' ',' ',' ',' ',' ',' ',' '},
			{' ',' ',' ',' ',' ',' ',' ',' '},
			{' ',' ',' ',' ',' ',' ',' ',' '},
			{'p','p','p','p','p','p','p','p'},
			{'r','n','b','q','k','b','n','r'}};
//------------------------------------------------------------------------

//----MAIN FUNCTION-----
int main()
{
	BoardPrinting(board);// function that prints chess board
	return 0;
}// end main function
