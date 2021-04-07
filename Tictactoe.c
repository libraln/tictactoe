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
	InitBoard(board);						//����������� ���� ' '	
	choice=menu();							//���� ������ ���													
	if(choice==1){
		winner=TwoPlayerMode(board);		//������� ������ ������, �� ������	
	}else{	
		do{									//����, �� ��������� ���������� ���� ������ � ����'������
		   ret=OnePlayerMove(board);    	//��� ������
		   if(ret==27){						//������� � ���� ��� ��������� esc
		   	  break;
		   }
		   winner=CheckWin(board);      	//�������� �� ��������� ���� ���� ������
		   if(winner!=' '){					//����� � ����� � ��� ������ ������������ ���������
			  break;}
	       ComputerMove(board);				//��� ����'�����
	       winner=CheckWin(board);     	    //�������� �� ��������� ���� ���� ����'�����
	       if(winner!=' '){
		      break;}
		}while(winner==' ');
	}
	DrawBoard(board);						//����������� ���� � ���������� ����������
	if(winner=='X'){																
		printf("\t    Won player 1\n\n");}	//� ��������� �� ����������� ������ ��������� CheckWin													
	else if(winner=='O'){					//��������� ����������� ��� ���������							
		printf("\t    Won player 2\n\n");}													
	else if(winner=='D'){			
		printf("\t    Match Drawn\n\n");}						//���������� �� ����
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
