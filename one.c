#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#define rows 7
#define cols 5

char OnePlayerMove(char(*board)[cols]) //х≥д гравц€ дл€ режиму гри з комп'ютером
{
	int row, col;
	char winner=' ', mark='X', rowkey, colkey;
	do{	
		DrawBoard(board);
		printf("\n   Player, enter coordinates of row(1-7) and column(1-5) and press any key: ");
		do{
			rowkey=getch();
			row=rowkey-'0';
			if(rowkey==27){
				return 27;
				}
		}while(rowkey<49||rowkey>55);
		printf("%d ",row);
		do{
			colkey=getch();
			col=colkey-'0';
			if(colkey==27){
				return 27;
				}
		}while(colkey<49||colkey>53);
		printf("%d",col);
		getch();
		if(board[row-1][col-1]!=' '){    //перев≥рка координат  
			printf("\n   You can`t use this coordinates, try again(press any key) \n");
			getch();
			}
	}while((board[row-1][col-1]!=' '));
	board[row-1][col-1]=mark;
}

