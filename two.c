#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#define rows 7
#define cols 5
char TwoPlayerMode(char(*board)[cols]) //����� �� 2� �������
{
	int row, col, player=1;
	char winner=' ', mark, rowkey, colkey;
	do{	
		DrawBoard(board);
		player = (player % 2) ? 1 : 2;//���������� �������
		printf("\n   Player %d, enter coordinates of row(1-7) and column(1-5) and press any key: ",player);
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
		mark = (player == 1) ? 'X' : 'O';
		if(board[row-1][col-1]==' '){//�������� ���������  
				board[row-1][col-1]=mark;  //������������ � ������ ������ ������
		}else{
			printf("\n   You can`t use this coordinates, try again(press any key) \n");			
			player--;
			getch();
			}
		winner=CheckWin(board);	//�������� �� ���������, � ������� + ����� � �����
		if(winner!=' '){
		    return winner; 		//���������� ������ ������ � main
			}
		player++; 				// ������� �� ���������� ������ ���� ���� ���������
	}while(winner==' ');	
}
