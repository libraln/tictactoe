#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#define rows 7
#define cols 5

void DrawBoard(char(*board)[cols])   // відображення ігрової сітки в консолі
{
	int row, col;
	system("cls");
	printf("\n      Press esc to stop game\n");
	printf("\n\n");
	for(row=0;row<rows;row++){
		printf("\t");
		for(col=0;col<cols;col++){	
			printf(" %c ",board[row][col]);
			if(col!=cols-1){	
				printf("|");
			}
		}
		printf("\n");
		printf("\t");
		if(row!=rows-1){
			printf("-------------------\n");
		}
	}
	printf("\n");
}
