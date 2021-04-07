#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#define rows 7
#define cols 5
#include "menu.c"
#include "init.c"
#include "draw.c"
#include "checkwin.c"
#include "two.c"
#include "one.c"
#include "computermove.c"

int menu();
void InitBoard(char(*board)[cols]); 
char CheckWin(char(*board)[cols]);
void DrawBoard(char(*board)[cols]);
char TwoPlayerMode(char(*board)[cols]);
char OnePlayerMove(char(*board)[cols]);
char ComputerMove(char(*board)[cols]);


int main()
{	
 	int choice=0, row, col;
 	char board[rows][cols];
	char winner= ' ', key, ret;	
	do{
	InitBoard(board);						//≥н≥ц≥ал≥зац≥€ с≥тки ' '	
	choice=menu();							//виб≥р режиму гри													
	if(choice==1){
		winner=TwoPlayerMode(board);		//повертаЇ значок гравц€, що перем≥г	
	}else{	
		do{									//цикл, що орган≥зовуЇ чергуванн€ ход≥в гравц€ з комп'ютером
		   ret=OnePlayerMove(board);    	//х≥д гравц€
		   if(ret==27){						//перех≥д у меню при натисненн≥ esc
		   	  break;
		   }
		   winner=CheckWin(board);      	//перев≥рка на переможц€ п≥сл€ ходу гравц€
		   if(winner!=' '){					//вих≥д з циклу у раз≥ на€вноњ нижчивказаноњ комб≥нац≥њ
			  break;}
	       ComputerMove(board);				//х≥д комп'ютера
	       winner=CheckWin(board);     	    //перев≥рка на переможц€ п≥сл€ ходу комп'ютера
	       if(winner!=' '){
		      break;}
		}while(winner==' ');
	}
	DrawBoard(board);						//в≥дображенн€ с≥тки з остаточною комб≥нац≥Їю
	if(winner=='X'){																
		printf("\t    Won player 1\n\n");}	//в залежност≥ в≥д поверненого значка функц≥Їюњ CheckWin													
	else if(winner=='O'){					//виведенн€ пов≥домленн€ про переможц€							
		printf("\t    Won player 2\n\n");}													
	else if(winner=='D'){			
		printf("\t    Match Drawn\n\n");}						//поверненн€ до меню
		printf("    *****************************\n\n");
		printf("    -------Return to MENU?-------\n");
		printf("    Press any key................\n");
		printf("    For exit press key........esc\n");
		printf("    ");
		key=getch();
		if(key==27){
		    printf("\n\t      Good bye!\n");
			printf("    *****************************");
			exit(0);	
		}
	}while(key!=27);
	return 0;		
	}
