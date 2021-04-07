#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#define rows 7
#define cols 5

char CheckWin(char(*board)[cols])  //перев≥рка на переможц€
{
	int row, col;
	//row checking
for(row=0;row<rows;row++){
	if((board[row][0]==board[row][1])&&(board[row][0]==board[row][2])&&
	(board[row][0]==board[row][3])&&(board[row][0]!=' ')){
		return board[row][0];
		}
	if((board[row][1]==board[row][2])&&(board[row][1]==board[row][3])&&
	(board[row][1]==board[row][4])&&(board[row][1]!=' ')){ 
		return board[row][1];
		}
	}
for(row=0;row<5;row++){
	if((board[0][row]==board[1][row])&&(board[0][row]==board[2][row])&&
	(board[0][row]==board[3][row])&&(board[0][row]!=' ')){
		return board[0][row];
	}

	if((board[1][row]==board[2][row])&&(board[1][row]==board[3][row])&&
	(board[1][row]==board[4][row])&&(board[1][row]!=' ')){
		return board[1][row];
	}

	if((board[2][row]==board[3][row])&&(board[2][row]==board[4][row])&&
	(board[2][row]==board[5][row])&&(board[2][row]!=' ')){
		return board[2][row];
	}

	if((board[3][row]==board[4][row])&&(board[3][row]==board[5][row])&&
	(board[3][row]==board[6][row])&&(board[3][row]!=' ')){
		return board[3][row];
	}
}
		//diagonal checking
	if((board[3][0]==board[4][1])&&(board[3][0]==board[5][2])&&
	(board[3][0]==board[6][3])&&(board[3][0]!=' ')){
		return board[3][0];
	}
		
	if((board[2][0]==board[3][1])&&(board[2][0]==board[4][2])&&
	(board[2][0]==board[5][3])&&(board[2][0]!=' ')){
		return board[2][0];
	}
			
	if((board[3][1]==board[4][2])&&(board[4][2]==board[5][3])&&
	(board[5][3]==board[6][4])&&(board[3][1]!=' ')){
		return board[3][1];
	}
	
	if((board[1][0]==board[2][1])&&(board[1][0]==board[3][2])&&
	(board[1][0]==board[4][3])&&(board[1][0]!=' ')){
		return board[1][0];
	}

	if((board[2][1]==board[3][2])&&(board[2][1]==board[4][3])&&
	(board[2][1]==board[5][4])&&(board[2][1]!=' ')){
		return board[2][1];
	}

	if((board[0][0]==board[1][1])&&(board[0][0]==board[2][2])&&
	(board[0][0]==board[3][3])&&(board[0][0]!=' ')){
		return board[0][0];
	}

	if((board[1][1]==board[2][2])&&(board[1][1]==board[3][3])&&
	(board[1][1]==board[4][4])&&(board[1][1]!=' ')){
		return board[1][1];
	}
	if((board[0][1]==board[1][2])&&(board[0][1]==board[2][3])&&
	(board[0][1]==board[3][4])&&(board[0][1]!=' ')){
		return board[0][1];
	}	
	if((board[0][3]==board[1][2])&&(board[0][3]==board[2][1])&&
	(board[0][3]==board[3][0])&&(board[0][3]!=' ')){
		return board[0][3];
	}

	if((board[0][4]==board[1][3])&&(board[0][4]==board[2][2])&&
	(board[0][4]==board[3][1])&&(board[0][4]!=' ')){
		return board[0][4];
	}

	if((board[1][3]==board[2][2])&&(board[1][3]==board[3][1])&&
	(board[1][3]==board[4][0])&&(board[1][3]!=' ')){
		return board[1][3];
	}
				
	if((board[1][4]==board[2][3])&&(board[1][4]==board[3][2])&&
	(board[1][4]==board[4][1])&&(board[1][4]!=' ')){
		return board[1][4];
	}

	if((board[2][3]==board[3][2])&&(board[2][3]==board[4][1])&&
	(board[2][3]==board[5][0])&&(board[2][3]!=' ')){
		return board[2][3];
	}		
	
	if((board[2][4]==board[3][3])&&(board[2][4]==board[4][2])&&
	(board[2][4]==board[5][1])&&(board[2][4]!=' ')){
		return board[2][4];
	}		
	
	if((board[3][3]==board[4][2])&&(board[3][3]==board[5][1])&&
	(board[3][3]==board[6][0])&&(board[3][3]!=' ')){
		return board[3][3];
	}

	if((board[3][4]==board[4][3])&&(board[3][4]==board[5][2])&&
	(board[3][4]==board[6][1])&&(board[3][4]!=' ')){
		return board[3][4];
	}
								
for(row=0;row<rows;row++){
	for(col=0;col<cols;col++){
	   if(board[row][col]==' '){
		  return ' ';	
			}
		}
	}		
	return 'D';		
}

