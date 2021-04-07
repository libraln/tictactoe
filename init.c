#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#define rows 7
#define cols 5

void InitBoard(char(*board)[cols])   //заповнення ігрового поля порожніми клітинками
{
	int row,col;
	for(row=0;row<rows;row++){
		for(col=0;col<cols;col++){
			board[row][col]=' ';			
		}
	}
}

