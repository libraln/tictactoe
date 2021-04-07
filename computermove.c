#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#define rows 7
#define cols 5

char ComputerMove(char(*board)[cols]) //хід комп'ютера
{	int row,col;
	//перевірка рядків і встановлення значка у відповідну комірку
	//0, 1, 2 
for(row=0;row<rows;row++){
	if((board[row][0]=='O'&&board[row][1]=='O')&&(board[row][1]=='O'&&board[row][2]=='O')||
	   (board[row][0]=='X'&&board[row][1]=='X')&&(board[row][1]=='X'&&board[row][2]=='X')){
	 	 if(board[row][3]==' '){
		    board[row][3]='O';
		    return;
			}
		}	
	}
	//0,2,3
for(row=0;row<rows;row++){
	if((board[row][0]=='O'&&board[row][2]=='O')&&(board[row][2]=='O'&&board[row][3]=='O')||
	   (board[row][0]=='X'&&board[row][2]=='X')&&(board[row][2]=='X'&&board[row][3]=='X')){	
	     if(board[row][1]==' '){
		    board[row][1]='O';
		    return;
			}	
		}
	}
	//0,1,3
for(row=0;row<rows;row++){
	if((board[row][0]=='O'&&board[row][1]=='O')&&(board[row][1]=='O'&&board[row][3]=='O')||
	   (board[row][0]=='X'&&board[row][1]=='X')&&(board[row][1]=='X'&&board[row][3]=='X')){
	 	 if(board[row][2]==' '){
			board[row][2]='O';
			return;
			}
		}	
	}
	//1,2,3
for(row=0;row<rows;row++){
	if((board[row][1]=='O'&&board[row][2]=='O')&&(board[row][2]=='O'&&board[row][3]=='O')||
	   (board[row][1]=='X'&&board[row][2]=='X')&&(board[row][2]=='X'&&board[row][3]=='X')){
	 	 if(board[row][4]==' '){
		 	board[row][4]='O';
			return;
		}
		else if(board[row][0]==' '){
				board[row][0]='O';
				return;
				}
			}		
		}
	//1,3,4
for(row=0;row<rows;row++){
	if((board[row][1]=='O'&&board[row][3]=='O')&&(board[row][3]=='O'&&board[row][4]=='O')||
	   (board[row][1]=='X'&&board[row][3]=='X')&&(board[row][3]=='X'&&board[row][4]=='X')){
	 	 if(board[row][2]==' '){
			board[row][2]='O';
			return;
			}	
		}
	}
	//1,2,4
for(row=0;row<rows;row++){
	if((board[row][1]=='O'&&board[row][2]=='O')&&(board[row][2]=='O'&&board[row][4]=='O')||
	   (board[row][1]=='X'&&board[row][2]=='X')&&(board[row][2]=='X'&&board[row][4]=='X')){
	 	 if(board[row][3]==' '){
			board[row][3]='O';
			return;
			}	
		}
	}
	//2,3,4
for(row=0;row<rows;row++){
	if((board[row][2]=='O'&&board[row][3]=='O')&&(board[row][3]=='O'&&board[row][4]=='O')||
	   (board[row][2]=='X'&&board[row][3]=='X')&&(board[row][3]=='X'&&board[row][4]=='X')){
	 	 if(board[row][1]==' '){
			board[row][1]='O';
			return;
			}	
		}
	}
	//перевірка стовпців
	//0,1,2
for(row=0;row<rows;row++){
	if((board[0][row]=='O'&&board[1][row]=='O')&&(board[1][row]=='O'&&board[2][row]=='O')||
	   (board[0][row]=='X'&&board[1][row]=='X')&&(board[1][row]=='X'&&board[2][row]=='X')){
	 	 if(board[3][row]==' '){
			board[3][row]='O';
			return;
			}	
		}
	}
	//0,2,3
for(row=0;row<rows;row++){
	if((board[0][row]=='O'&&board[2][row]=='O')&&(board[2][row]=='O'&&board[3][row]=='O')||
	   (board[0][row]=='X'&&board[2][row]=='X')&&(board[2][row]=='X'&&board[3][row]=='X')){
	 	 if(board[1][row]==' '){
			board[1][row]='O';
			return;
			}else if(board[4][row]==' '){
					 board[4][row]='O';
					 return;
			}		
		}
	}
	//0,1,3
for(row=0;row<rows;row++){
	if((board[0][row]=='O'&&board[1][row]=='O')&&(board[1][row]=='O'&&board[3][row]=='O')||
	   (board[0][row]=='X'&&board[1][row]=='X')&&(board[1][row]=='X'&&board[3][row]=='X')){
	 	 if(board[2][row]==' '){
			board[2][row]='O';
			return;
			}	
		}
	}
	//1,2,3
for(row=0;row<rows;row++){
	if((board[1][row]=='O'&&board[2][row]=='O')&&(board[2][row]=='O'&&board[3][row]=='O')||
	   (board[1][row]=='X'&&board[2][row]=='X')&&(board[2][row]=='X'&&board[3][row]=='X')){
	 if(board[0][row]==' '){
		board[0][row]='O';
		return;
	   }else if(board[4][row]==' '){
				board[4][row]='O';
				return;
			}
		}
	}
	//1,3,4
for(row=0;row<rows;row++){
	if((board[1][row]=='O'&&board[3][row]=='O')&&(board[3][row]=='O'&&board[4][row]=='O')||
	   (board[1][row]=='X'&&board[3][row]=='X')&&(board[3][row]=='X'&&board[4][row]=='X')){
	 	 if(board[2][row]==' '){
			board[2][row]='O';
			return;
			}	
		}
	}
	//1,2,4
for(row=0;row<rows;row++){
	if((board[1][row]=='O'&&board[2][row]=='O')&&(board[2][row]=='O'&&board[4][row]=='O')||
	   (board[1][row]=='X'&&board[2][row]=='X')&&(board[2][row]=='X'&&board[4][row]=='X')){
		 if(board[3][row]==' '){
		 	board[3][row]='O';
			return;
			}	
		}
	}
	//2,3,4
for(row=0;row<rows;row++){
	if((board[2][row]=='O'&&board[3][row]=='O')&&(board[3][row]=='O'&&board[4][row]=='O')||
	   (board[2][row]=='X'&&board[3][row]=='X')&&(board[3][row]=='X'&&board[4][row]=='X')){
	 	 if(board[1][row]==' '){
		 	board[1][row]='O';
		 	return;
	}	else if(board[5][row]==' '){
				board[5][row]='O';
				return;
			}
		}
	}
	//2,4,5
for(row=0;row<rows;row++){
	if((board[2][row]=='O'&&board[4][row]=='O')&&(board[4][row]=='O'&&board[5][row]=='O')||
	   (board[2][row]=='X'&&board[4][row]=='X')&&(board[4][row]=='X'&&board[5][row]=='X')){
	 	 if(board[3][row]==' '){
			board[3][row]='O';
			return;
			}	
		}
	}
	//2,3,5
for(row=0;row<rows;row++){
	if((board[2][row]=='O'&&board[3][row]=='O')&&(board[3][row]=='O'&&board[5][row]=='O')||
	   (board[2][row]=='X'&&board[3][row]=='X')&&(board[3][row]=='X'&&board[5][row]=='X')){
 	 	 if(board[4][row]==' '){
			board[4][row]='O';
			return;
			}	
		}
	}
	//3,4,5
for(row=0;row<rows;row++){
	if((board[3][row]=='O'&&board[4][row]=='O')&&(board[4][row]=='O'&&board[5][row]=='O')||
	   (board[3][row]=='X'&&board[4][row]=='X')&&(board[4][row]=='X'&&board[5][row]=='X')){
	 	 if(board[2][row]==' '){
			board[2][row]='O';
			return;
	}	else if(board[6][row]==' '){
				board[6][row]='O';
				return;
			}	
		}
	}
	//3,5,6
for(row=0;row<rows;row++){
	if((board[3][row]=='O'&&board[5][row]=='O')&&(board[5][row]=='O'&&board[6][row]=='O')||
  	   (board[3][row]=='X'&&board[5][row]=='X')&&(board[5][row]=='X'&&board[6][row]=='X')){
	 	 if(board[4][row]==' '){
		 	board[4][row]='O';
			return;
			}	
		}
	}
	//3,4,6
for(row=0;row<rows;row++){
	if((board[3][row]=='O'&&board[4][row]=='O')&&(board[4][row]=='O'&&board[6][row]=='O')||
	   (board[3][row]=='X'&&board[4][row]=='X')&&(board[4][row]=='X'&&board[6][row]=='X')){
	 	 if(board[5][row]==' '){
			board[5][row]='O';
			return;
			}	
		}
	}
	//4,5,6
for(row=0;row<rows;row++){
	if((board[4][row]=='O'&&board[5][row]=='O')&&(board[5][row]=='O'&&board[6][row]=='O')||
	   (board[4][row]=='X'&&board[5][row]=='X')&&(board[5][row]=='X'&&board[6][row]=='X')){
  	 	 if(board[3][row]==' '){
			board[3][row]='O';
			return;
			}	
		}
	}	
	//перевірка діагоналі
	//diagonal checking for 'O' or 'X'
	//1
	if((board[0][3]=='O'&&board[1][2]=='O')&&(board[1][2]=='O'&&board[2][1]=='O')||
	   (board[0][3]=='X'&&board[1][2]=='X')&&(board[1][2]=='X'&&board[2][1]=='X')){
	     if(board[3][0]==' '){
	        board[3][0]='O';
		    return;
			}
		}
	if((board[1][2]=='O'&&board[2][1]=='O')&&(board[2][1]=='O'&&board[3][0]=='O')||
	   (board[1][2]=='X'&&board[2][1]=='X')&&(board[2][1]=='X'&&board[3][0]=='X')){
	 	 if(board[0][3]==' '){
	        board[0][3]='O';
		    return;
			}
		}	
	if((board[0][3]=='O'&&board[2][1]=='O')&&(board[2][1]=='O'&&board[3][0]=='O')||
	   (board[0][3]=='X'&&board[2][1]=='X')&&(board[2][1]=='X'&&board[3][0]=='X')){
	 	 if(board[1][2]==' '){
	        board[1][2]='O';
		 	return;
			}
		}
	if((board[0][3]=='O'&&board[1][2]=='O')&&(board[1][2]=='O'&&board[3][0]=='O')||
	   (board[0][3]=='X'&&board[1][2]=='X')&&(board[1][2]=='X'&&board[3][0]=='X')){
	 	 if(board[2][1]==' '){
	        board[2][1]='O';
		    return;
			}
		}	
	//2	
	if((board[0][4]=='O'&&board[1][3]=='O')&&(board[1][3]=='O'&&board[2][2]=='O')||
	   (board[0][4]=='X'&&board[1][3]=='X')&&(board[1][3]=='X'&&board[2][2]=='X')){
	 	 if(board[3][1]==' '){
	        board[3][1]='O';
		    return;
			}
		}
	if((board[1][3]=='O'&&board[2][2]=='O')&&(board[2][2]=='O'&&board[3][1]=='O')||
	   (board[1][3]=='X'&&board[2][2]=='X')&&(board[2][2]=='X'&&board[3][1]=='X')){
	     if(board[0][4]==' '){
	    	board[0][4]='O';
			return;
			}else if(board[4][0]==' '){
					 board[4][0]='O';
					 return;
			}	
		}	
	if((board[0][4]=='O'&&board[2][2]=='O')&&(board[2][2]=='O'&&board[3][1]=='O')||
	   (board[0][4]=='X'&&board[2][2]=='X')&&(board[2][2]=='X'&&board[3][1]=='X')){
	 	 if(board[1][3]==' '){
	    	board[1][3]='O';
			return;
			}
		}
	if((board[0][4]=='O'&&board[1][3]=='O')&&(board[1][3]=='O'&&board[3][1]=='O')||
	   (board[0][4]=='X'&&board[1][3]=='X')&&(board[1][3]=='X'&&board[3][1]=='X')){
	 	 if(board[2][2]==' '){
	    	board[2][2]='O';
			return;
			}
		}
	if((board[2][2]=='O'&&board[3][1]=='O')&&(board[3][1]=='O'&&board[4][0]=='O')||
	   (board[2][2]=='X'&&board[3][1]=='X')&&(board[3][1]=='X'&&board[4][0]=='X')){
	 	 if(board[1][3]==' '){
	    	board[1][3]='O';
			return;
			}
		}
	if((board[1][3]=='O'&&board[3][1]=='O')&&(board[3][1]=='O'&&board[4][0]=='O')||
	   (board[1][3]=='X'&&board[3][1]=='X')&&(board[3][1]=='X'&&board[4][0]=='X')){
	 	 if(board[2][2]==' '){
	    	board[2][2]='O';
			return;
			}
		}
	if((board[1][3]=='O'&&board[2][2]=='O')&&(board[2][2]=='O'&&board[4][0]=='O')||
	   (board[1][3]=='X'&&board[2][2]=='X')&&(board[2][2]=='X'&&board[4][0]=='X')){
	 	 if(board[3][1]==' '){
	    	board[3][1]='O';
			return;
			}
		}	
	//3
	if((board[1][4]=='O'&&board[2][3]=='O')&&(board[2][3]=='O'&&board[3][2]=='O')||
	   (board[1][4]=='X'&&board[2][3]=='X')&&(board[2][3]=='X'&&board[3][2]=='X')){
	 	 if(board[4][1]==' '){
	    	board[4][1]='O';
			return;
			}
		}
	if((board[2][3]=='O'&&board[3][2]=='O')&&(board[3][2]=='O'&&board[4][1]=='O')||
	   (board[2][3]=='X'&&board[3][2]=='X')&&(board[3][2]=='X'&&board[4][1]=='X')){
	 	 if(board[1][4]==' '){
	    	board[1][4]='O';
			return;
			}else if(board[5][0]==' '){
					 board[5][0]='O';
					 return;
			}	
		}	
	if((board[1][4]=='O'&&board[3][2]=='O')&&(board[3][2]=='O'&&board[4][1]=='O')||
	   (board[1][4]=='X'&&board[3][2]=='X')&&(board[3][2]=='X'&&board[4][1]=='X')){
		 if(board[2][3]==' '){
	    	board[2][3]='O';
			return;
			}
		}
	if((board[1][4]=='O'&&board[2][3]=='O')&&(board[2][3]=='O'&&board[4][1]=='O')||
	   (board[1][4]=='X'&&board[2][3]=='X')&&(board[2][3]=='X'&&board[4][1]=='X')){
	 	 if(board[3][2]==' '){
	    	board[3][2]='O';
			return;
			}
		}
	if((board[2][3]=='O'&&board[3][2]=='O')&&(board[3][2]=='O'&&board[5][0]=='O')||
	   (board[2][3]=='X'&&board[3][2]=='X')&&(board[3][2]=='X'&&board[5][0]=='X')){
	 	 if(board[4][1]==' '){
	    	board[4][1]='O';
			return;
			}
		}
	if((board[2][3]=='O'&&board[4][1]=='O')&&(board[4][1]=='O'&&board[5][0]=='O')||
	   (board[2][3]=='X'&&board[4][1]=='X')&&(board[4][1]=='X'&&board[5][0]=='X')){
	 	 if(board[3][2]==' '){
	    	board[3][2]='O';
			return;
			}
		}
	if((board[3][2]=='O'&&board[4][1]=='O')&&(board[4][1]=='O'&&board[5][0]=='O')||
	   (board[3][2]=='X'&&board[4][1]=='X')&&(board[4][1]=='X'&&board[5][0]=='X')){
	 	 if(board[2][3]==' '){
	    	board[2][3]='O';
			return;
			}
		}	
	//4
	if((board[2][4]=='O'&&board[3][3]=='O')&&(board[3][3]=='O'&&board[4][2]=='O')||
	   (board[2][4]=='X'&&board[3][3]=='X')&&(board[3][3]=='X'&&board[4][2]=='X')){
	 	 if(board[5][1]==' '){
	   	 	board[5][1]='O';
			return;
			}
		}
	if((board[3][3]=='O'&&board[4][2]=='O')&&(board[4][2]=='O'&&board[5][1]=='O')||
	   (board[3][3]=='X'&&board[4][2]=='X')&&(board[4][2]=='X'&&board[5][1]=='X')){
	 	 if(board[2][4]==' '){
	    	board[2][4]='O';
			return;
			}else if(board[6][0]==' '){
					 board[6][0]='O';
					 return;
			}	
		}	
	if((board[2][4]=='O'&&board[4][2]=='O')&&(board[4][2]=='O'&&board[5][1]=='O')||
	   (board[2][4]=='X'&&board[4][2]=='X')&&(board[4][2]=='X'&&board[5][1]=='X')){
	 	 if(board[3][3]==' '){
	    	board[3][3]='O';
			return;
			}
		}
	if((board[2][4]=='O'&&board[3][3]=='O')&&(board[3][3]=='O'&&board[5][1]=='O')||
	   (board[2][4]=='X'&&board[3][3]=='X')&&(board[3][3]=='X'&&board[5][1]=='X')){
	 	 if(board[4][2]==' '){
	    	board[4][2]='O';
			return;
			}
		}
	if((board[3][3]=='O'&&board[5][1]=='O')&&(board[5][1]=='O'&&board[6][0]=='O')||
	   (board[3][3]=='X'&&board[5][1]=='X')&&(board[5][1]=='X'&&board[6][0]=='X')){
	 	 if(board[4][2]==' '){
	    	board[4][2]='O';
			return;
			}
		}
	if((board[3][3]=='O'&&board[4][2]=='O')&&(board[4][2]=='O'&&board[6][0]=='O')||
	   (board[3][3]=='O'&&board[4][2]=='O')&&(board[4][2]=='O'&&board[6][0]=='O')){
	 	 if(board[5][1]==' '){
	     	board[5][1]='O';
			return;
			}
		}
	if((board[4][2]=='O'&&board[5][1]=='O')&&(board[5][1]=='O'&&board[6][0]=='O')||
	   (board[4][2]=='X'&&board[5][1]=='X')&&(board[5][1]=='X'&&board[6][0]=='X')){
	 	 if(board[3][3]==' '){
	    	board[3][3]='O';
			return;
			}
		}	
	//5
	if((board[3][4]=='O'&&board[4][3]=='O')&&(board[4][3]=='O'&&board[5][2]=='O')||
	   (board[3][4]=='X'&&board[4][3]=='X')&&(board[4][3]=='X'&&board[5][2]=='X')){
	 	 if(board[6][1]==' '){
	    	board[6][1]='O';
			return;
			}
		}
	if((board[3][4]=='O'&&board[5][2]=='O')&&(board[5][2]=='O'&&board[6][1]=='O')||
	   (board[3][4]=='X'&&board[5][2]=='X')&&(board[5][2]=='X'&&board[6][1]=='X')){
	 	 if(board[4][3]==' '){
	    	board[4][3]='O';
			return;
			}
		}
	if((board[3][4]=='O'&&board[4][3]=='O')&&(board[4][3]=='O'&&board[6][1]=='O')||
	   (board[3][4]=='X'&&board[4][3]=='X')&&(board[4][3]=='X'&&board[6][1]=='X')){
	 	 if(board[5][2]==' '){
	    	board[5][2]='O';
			return;
			}
		}
	if((board[4][3]=='O'&&board[5][2]=='O')&&(board[5][2]=='O'&&board[6][1]=='O')||
	   (board[4][3]=='X'&&board[5][2]=='X')&&(board[5][2]=='X'&&board[6][1]=='X')){
	 	 if(board[3][4]==' '){
	    	board[3][4]='O';
			return;
			}
		}
	//cheking of other diagonal
	//1
	if((board[3][0]=='O'&&board[4][1]=='O')&&(board[4][1]=='O'&&board[5][2]=='O')||
	   (board[3][0]=='X'&&board[4][1]=='X')&&(board[4][1]=='X'&&board[5][2]=='X')){
		 if(board[6][3]==' '){
	    	board[6][3]='O';
			return;
			}
		}
	if((board[3][0]=='O'&&board[5][2]=='O')&&(board[5][2]=='O'&&board[6][3]=='O')||
	   (board[3][0]=='X'&&board[5][2]=='X')&&(board[5][2]=='X'&&board[6][3]=='X')){
		 if(board[4][1]==' '){
	    	board[4][1]='O';
			return;
			}
		}
	if((board[3][0]=='O'&&board[4][1]=='O')&&(board[4][1]=='O'&&board[6][3]=='O')||
	   (board[3][0]=='X'&&board[4][1]=='X')&&(board[4][1]=='X'&&board[6][3]=='X')){
		 if(board[5][2]==' '){
	    	board[5][2]='O';
			return;
			}
		}
	if((board[4][1]=='O'&&board[5][2]=='O')&&(board[5][2]=='O'&&board[6][3]=='O')||
	   (board[4][1]=='X'&&board[5][2]=='X')&&(board[5][2]=='X'&&board[6][3]=='X')){
		 if(board[3][0]==' '){
	    	board[3][0]='O';
			return;
			}
		}
	//2
	if((board[2][0]=='O'&&board[3][1]=='O')&&(board[3][1]=='O'&&board[4][2]=='O')||
	   (board[2][0]=='X'&&board[3][1]=='X')&&(board[3][1]=='X'&&board[4][2]=='X')){
		 if(board[5][3]==' '){
	    	board[5][3]='O';
			return;
			}
		}
	if((board[3][1]=='O'&&board[4][2]=='O')&&(board[4][2]=='O'&&board[5][3]=='O')||
	   (board[3][1]=='X'&&board[4][2]=='X')&&(board[4][2]=='X'&&board[5][3]=='X')){
		 if(board[2][0]==' '){
	    	board[2][0]='O';
			return;
			}else if(board[6][4]==' '){
					 board[6][4]='O';
					 return;
			}	
		}	
	if((board[2][0]=='O'&&board[4][2]=='O')&&(board[4][2]=='O'&&board[5][3]=='O')||
	   (board[2][0]=='X'&&board[4][2]=='X')&&(board[4][2]=='X'&&board[5][3]=='X')){
		 if(board[3][1]==' '){
	    	board[3][1]='O';
			return;
			}
		}
	if((board[2][0]=='O'&&board[3][1]=='O')&&(board[3][1]=='O'&&board[5][3]=='O')||
	   (board[2][0]=='X'&&board[3][1]=='X')&&(board[3][1]=='X'&&board[5][3]=='X')){
		 if(board[4][2]==' '){
	    	board[4][2]='O';
			return;
			}
		}
	if((board[3][1]=='O'&&board[5][3]=='O')&&(board[5][3]=='O'&&board[6][4]=='O')||
	   (board[3][1]=='X'&&board[5][3]=='X')&&(board[5][3]=='X'&&board[6][4]=='X')){
	 	 if(board[4][2]==' '){
	    	board[4][2]='O';
			return;
			}
		}
	if((board[3][1]=='O'&&board[4][2]=='O')&&(board[4][2]=='O'&&board[6][4]=='O')||
	   (board[3][1]=='X'&&board[4][2]=='X')&&(board[4][2]=='X'&&board[6][4]=='X')){
		 if(board[5][3]==' '){
	    	board[5][3]='O';
			return;
			}
		}
	if((board[4][2]=='O'&&board[5][3]=='O')&&(board[5][3]=='O'&&board[6][4]=='O')||
	   (board[4][2]=='X'&&board[5][3]=='X')&&(board[5][3]=='X'&&board[6][4]=='X')){
		 if(board[3][1]==' '){
	    	board[3][1]='O';
			return;
			}
		}
	//3
	if((board[1][0]=='O'&&board[2][1]=='O')&&(board[2][1]=='O'&&board[3][2]=='O')||
	   (board[1][0]=='X'&&board[2][1]=='X')&&(board[2][1]=='X'&&board[3][2]=='X')){
		 if(board[4][3]==' '){
	    	board[4][3]='O';
			return;
			}
		}
	if((board[2][1]=='O'&&board[3][2]=='O')&&(board[3][2]=='O'&&board[4][3]=='O')||
	   (board[2][1]=='X'&&board[3][2]=='X')&&(board[3][2]=='X'&&board[4][3]=='X')){
		 if(board[1][0]==' '){
	    	board[1][0]='O';
			return;
			}else if(board[5][4]==' '){
					 board[5][4]='O';
					 return;
			}	
		}	
	if((board[1][0]=='O'&&board[3][2]=='O')&&(board[3][2]=='O'&&board[4][3]=='O')||
	   (board[1][0]=='X'&&board[3][2]=='X')&&(board[3][2]=='X'&&board[4][3]=='X')){
		 if(board[2][1]==' '){
	    	board[2][1]='O';
			return;
			}
		}
	if((board[1][0]=='O'&&board[2][1]=='O')&&(board[2][1]=='O'&&board[4][3]=='O')||
	   (board[1][0]=='X'&&board[2][1]=='X')&&(board[2][1]=='X'&&board[4][3]=='X')){
		 if(board[3][2]==' '){
	    	board[3][2]='O';
			return;
			}
		}
	if((board[2][1]=='O'&&board[4][3]=='O')&&(board[4][3]=='O'&&board[5][4]=='O')||
	   (board[2][1]=='X'&&board[4][3]=='X')&&(board[4][3]=='X'&&board[5][4]=='X')){
		 if(board[3][2]==' '){
	    	board[3][2]='O';
			return;
			}
		}
	if((board[2][1]=='O'&&board[3][2]=='O')&&(board[3][2]=='O'&&board[5][4]=='O')||
	   (board[2][1]=='X'&&board[3][2]=='X')&&(board[3][2]=='X'&&board[5][4]=='X')){
		 if(board[4][3]==' '){
	    	board[4][3]='O';
			return;
			}
		}
	if((board[3][2]=='O'&&board[4][3]=='O')&&(board[4][3]=='O'&&board[5][4]=='O')||
	   (board[3][2]=='X'&&board[4][3]=='X')&&(board[4][3]=='X'&&board[5][4]=='X')){
		 if(board[2][1]==' '){
	    	board[2][1]='O';
			return;
			}
		}
	//4
	if((board[0][0]=='O'&&board[1][1]=='O')&&(board[1][1]=='O'&&board[2][2]=='O')||
	   (board[0][0]=='X'&&board[1][1]=='X')&&(board[1][1]=='X'&&board[2][2]=='X')){
		 if(board[3][3]==' '){
	    	board[3][3]='O';
			return;
			}
		}
	if((board[1][1]=='O'&&board[2][2]=='O')&&(board[2][2]=='O'&&board[3][3]=='O')||
	   (board[1][1]=='X'&&board[2][2]=='X')&&(board[2][2]=='X'&&board[3][3]=='X')){
	 	 if(board[0][0]==' '){
	    	board[0][0]='O';
			return;
			}else if(board[4][4]==' '){
					 board[4][4]='O';
					 return;
			}	
		}	
	if((board[0][0]=='O'&&board[2][2]=='O')&&(board[2][2]=='O'&&board[3][3]=='O')||
	   (board[0][0]=='X'&&board[2][2]=='X')&&(board[2][2]=='X'&&board[3][3]=='X')){
		 if(board[1][1]==' '){
	    	board[1][1]='O';
			return;
			}
		}
	if((board[0][0]=='O'&&board[1][1]=='O')&&(board[1][1]=='O'&&board[3][3]=='O')||
	   (board[0][0]=='X'&&board[1][1]=='X')&&(board[1][1]=='X'&&board[3][3]=='X')){
		 if(board[2][2]==' '){
	    	board[2][2]='O';
			return;
			}
		}
	if((board[1][1]=='O'&&board[2][2]=='O')&&(board[2][2]=='O'&&board[4][4]=='O')||
	   (board[1][1]=='X'&&board[2][2]=='X')&&(board[2][2]=='X'&&board[4][4]=='X')){
		 if(board[3][3]==' '){
	    	board[3][3]='O';
			return;
			}
		}
	if((board[1][1]=='O'&&board[3][3]=='O')&&(board[3][3]=='O'&&board[4][4]=='O')||
	   (board[1][1]=='X'&&board[3][3]=='X')&&(board[3][3]=='X'&&board[4][4]=='X')){
		 if(board[2][2]==' '){
	    	board[2][2]='O';
			return;
			}
		}
	if((board[2][2]=='O'&&board[3][3]=='O')&&(board[3][3]=='O'&&board[4][4]=='O')||
	   (board[2][2]=='X'&&board[3][3]=='X')&&(board[3][3]=='X'&&board[4][4]=='X')){
		 if(board[1][1]==' '){
	    	board[1][1]='O';
			return;
			}
		}	
	//5
	if((board[0][1]=='O'&&board[1][2]=='O')&&(board[1][2]=='O'&&board[2][3]=='O')||
	   (board[0][1]=='X'&&board[1][2]=='X')&&(board[1][2]=='X'&&board[2][3]=='X')){
		 if(board[3][4]==' '){
	    	board[3][4]='O';
			return;
			}
		}
	if((board[0][1]=='O'&&board[2][3]=='O')&&(board[2][3]=='O'&&board[3][4]=='O')||
	   (board[0][1]=='X'&&board[2][3]=='X')&&(board[2][3]=='X'&&board[3][4]=='X')){
		 if(board[1][2]==' '){
	    	board[1][2]='O';
			return;
			}
		}
	if((board[0][1]=='O'&&board[1][2]=='O')&&(board[1][2]=='O'&&board[3][4]=='O')||
	   (board[0][1]=='X'&&board[1][2]=='X')&&(board[1][2]=='X'&&board[3][4]=='X')){
		 if(board[2][3]==' '){
	    	board[2][3]='O';
			return;
			}
		}
	if((board[1][2]=='O'&&board[2][3]=='O')&&(board[2][3]=='O'&&board[3][4]=='O')||
	   (board[1][2]=='O'&&board[2][3]=='O')&&(board[2][3]=='O'&&board[3][4]=='O')){
		 if(board[0][1]==' '){
	    	board[0][1]='O';
			return;
			}
		}			
	//1
if(board[0][3]=='X'&&board[1][2]=='X'){
	 if(board[2][1]==' '){
	    board[2][1]='O';
		return;
			}
		}
if(board[1][2]=='X'&&board[2][1]=='X'){
	 if(board[3][0]==' '){
	    board[3][0]='O';
		return;
			}else if(board[0][3]==' '){
					 board[0][3]='O';
					 return;
					}
		}
if(board[2][1]=='X'&&board[3][0]=='X'){
	 if(board[1][2]==' '){
		board[1][2]='O';
		return;
			}
		}
		//2
if(board[0][4]=='X'&&board[1][3]=='X'){
	 if(board[2][2]==' '){
		board[2][2]='O';
		return;
			}
		}
if(board[1][3]=='X'&&board[2][2]=='X'){
	 if(board[3][1]==' '){
	    board[3][1]='O';
		return;
			}else if(board[0][4]==' '){
				 	 board[0][4]='O';
					 return;
			}
		}
if(board[2][2]=='X'&&board[3][1]=='X'){
	 if(board[1][3]==' '){
		board[1][3]='O';
		return;
		}else if(board[4][0]==' '){
				 board[4][0]='O';
				 return;
			}
		}
		//
if(board[3][1]=='X'&&board[4][0]=='X'){
	if(board[2][2]==' '){
	   board[2][2]='O';
	   return;
			}
		}
		//3
if(board[1][4]=='X'&&board[2][3]=='X'){
    if(board[3][2]==' '){
	   board[3][2]='O';
	   return;	
			}
		}
if(board[2][3]=='X'&&board[3][2]=='X'){
    if(board[1][4]==' '){
	   board[1][4]='O';
	   return;
		}else if(board[4][1]==' '){
				 board[4][1]='O';
				 return;
			}
		}
		//
if(board[3][2]=='X'&&board[4][1]=='X'){
	if(board[2][3]==' '){
	   board[2][3]='O';
	   return;
		}else if(board[5][0]==' '){
				 board[5][0]='O';
				 return;
			}
		}
		//
if(board[4][1]=='X'&&board[5][0]=='X'){
	if(board[3][2]==' '){
	   board[3][2]='O';
	   return;
			}
		}
		//4
if(board[2][4]=='X'&&board[3][3]=='X'){
	if(board[4][2]==' '){
	   board[4][2]='O';
		return;
			}
		}
		//
if(board[3][3]=='X'&&board[4][2]=='X'){
	if(board[2][4]==' '){
	   board[2][4]='O';
	   return;
		}else if(board[5][1]==' '){
				 board[5][1]='O';
				 return;
			}
		}
		//
if(board[4][2]=='X'&&board[5][1]=='X'){
	 if(board[3][3]==' '){
		board[3][3]='O';
		return;
		}else if(board[6][0]==' '){
				 board[6][0]='O';
				 return;
			}
		}
		//
if(board[5][1]=='X'&&board[6][0]=='X'){
	 if(board[4][2]==' '){
		board[4][2]='O';
		return;
			}
		}
		//5
if(board[3][4]=='X'&&board[4][3]=='X'){
	 if(board[5][2]==' '){
		board[5][2]='O';
		return;
			}
		}
		//
if(board[4][3]=='X'&&board[5][2]=='X'){
	 if(board[3][4]==' '){
		board[3][4]='O';
		return;
		}else if(board[6][1]==' '){
				 board[6][1]='O';
				 return;
			}
		}
		//
if(board[5][2]=='X'&&board[6][1]=='X'){
	 if(board[4][3]==' '){
		board[4][3]='O';
		return;
			}
		}
		//перевірка діагоналі
		//1
if(board[0][1]=='X'&&board[1][2]=='X'){
	 if(board[2][3]==' '){
		board[2][3]='O';
		return;
			}
		}
		//
if(board[1][2]=='X'&&board[2][3]=='X'){
	 if(board[0][1]==' '){
		board[0][1]='O';
		return;
		}else if(board[3][4]==' '){
				 board[3][4]='O';
				 return;
			}
		}
		//
if(board[2][3]=='X'&&board[3][4]=='X'){
	 if(board[1][2]==' '){
		board[1][2]='O';
		return;
			}
		}
		//2
if(board[0][0]=='X'&&board[1][1]=='X'){
	 if(board[2][2]==' '){
		board[2][2]='O';
		return;
			}
		}
		//
if(board[1][1]=='X'&&board[2][2]=='X'){
	 if(board[3][3]==' '){
		board[3][3]='O';
		return;
		}else if(board[0][0]==' '){
				 board[0][0]='O';
				 return;
			}
		}
		//
if(board[2][2]=='X'&&board[3][3]=='X'){
	 if(board[1][1]==' '){
		board[1][1]='O';
		return;
		}else if(board[4][4]==' '){
			 	 board[4][4]='O';
				 return;
			}
		}
		//
if(board[3][3]=='X'&&board[4][4]=='X'){
	 if(board[2][2]==' '){
		board[2][2]='O';
		return;
			}
		}
		//the next one
if(board[1][0]=='X'&&board[2][1]=='X'){
	 if(board[3][2]==' '){
		board[3][2]='O';
		return;
			}
		}
		//
if(board[2][1]=='X'&&board[3][2]=='X'){
	 if(board[4][3]==' '){
		board[4][3]='O';
		return;
		}else if(board[1][0]==' '){
				 board[1][0]='O';
				 return;
			}
		}
		//
if(board[3][2]=='X'&&board[4][3]=='X'){
	 if(board[2][1]==' '){
		board[2][1]='O';
		return;
		}else if(board[5][4]==' '){
				 board[5][4]='O';
				 return;
			}
		}
		//
if(board[4][3]=='X'&&board[5][4]=='X'){
	 if(board[3][2]==' '){
		board[3][2]='O';
		return;
			}
		}
		//the next one
if(board[2][0]=='X'&&board[3][1]=='X'){
	 if(board[4][2]==' '){
		board[4][2]='O';
		return;
			}
		}
		//
if(board[3][1]=='X'&&board[4][2]=='X'){
	 if(board[5][3]==' '){
		board[5][3]='O';
		return;
		}else if(board[2][0]==' '){
				 board[2][0]='O';
				 return;
			}
		}
		//
if(board[4][2]=='X'&&board[5][3]=='X'){
	 if(board[3][1]==' '){
		board[3][1]='O';
		return;
		}else if(board[6][4]==' '){
				 board[6][4]='O';
				 return;
			}
		}
		//
if(board[5][3]=='X'&&board[6][4]=='X'){
	 if(board[4][2]==' '){
		board[4][2]='O';
		return;
			}
		}
		//the last one
		//
if(board[3][0]=='X'&&board[4][1]=='X'){
	 if(board[5][2]==' '){
		board[5][2]='O';
		return;
			}
		}
		//
if(board[4][1]=='X'&&board[5][2]=='X'){
	 if(board[3][0]==' '){
		board[3][0]='O';
		return;
		}else if(board[6][3]==' '){
				 board[6][3]='O';
				 return;
			}
		}
		//
if(board[5][2]=='X'&&board[6][3]=='X'){
	 if(board[4][1]==' '){
		board[4][1]='O';
		return;
			}
		}
	//row
	//0,1
for(row=0;row<rows;row++){
	if(board[row][0]=='X'&&board[row][1]=='X'){
	 if(board[row][2]==' '){
		board[row][2]='O';
		return;
			}
		}
	}
	//1,2
for(row=0;row<rows;row++){
	if(board[row][1]=='X'&&board[row][2]=='X'){
	 if(board[row][0]==' '){
		board[row][0]='O';
		return;
		}
		else if(board[row][3]==' '){
				board[row][3]='O';
				 return;
			}
		}
	}
	//2,3
for(row=0;row<rows;row++){
	if(board[row][2]=='X'&&board[row][3]=='X'){
	 if(board[row][1]==' '){
		board[row][1]='O';
		return;
			}
		}
	}
	//3,4
for(row=0;row<rows;row++){
	if(board[row][3]=='X'&&board[row][4]=='X'){
	 if(board[row][2]==' '){
		board[row][2]='O';
		return;
			}
		}
	}
	//0,1
for(row=0;row<rows;row++){
	if(board[0][row]=='X'&&board[1][row]=='X'){
	 if(board[2][row]==' '){
		board[2][row]='O';
		return;
			}
		}
	}
	//1,2
for(row=0;row<rows;row++){
	if(board[1][row]=='X'&&board[2][row]=='X'){
	 if(board[3][row]==' '){
		board[3][row]='O';
		return;
		}else if(board[0][row]==' '){
				 board[0][row]='O';
				 return;
			}
		}
	}
	//2,3
for(row=0;row<rows;row++){
	if(board[2][row]=='X'&&board[3][row]=='X'){
	 if(board[1][row]==' '){
		board[1][row]='O';
		return;
		}else if(board[4][row]==' '){
			 	 board[4][row]='O';
				 return;
			}
		}
	}
	//3,4
for(row=0;row<rows;row++){
	if(board[3][row]=='X'&&board[4][row]=='X'){
	 if(board[2][row]==' '){
		board[2][row]='O';
		return;
		}else if(board[5][row]==' '){
				 board[5][row]='O';
				 return;
			}
		}
	}
	//4,5
for(row=0;row<rows;row++){
	if(board[4][row]=='X'&&board[5][row]=='X'){
	 if(board[row][3]==' '){
		board[row][3]='O';
		return;
		}else if(board[6][row]==' '){
				 board[6][row]='O';
				 return;
			}
		}
	}
	//5,6
for(row=0;row<rows;row++){
	if(board[5][row]=='X'&&board[6][row]=='X'){
	 if(board[row][4]==' '){
	    board[row][4]='O';
		return;
			}
		}
	}
		//1 point. перевірка у разі, якщо встановлений один значок гравця
for(row=0;row<rows;row++){
  for(col=0;col<cols;col++){
	if(board[row][col]=='X'){
	  if(board[row][col-1]==' '){
		 board[row][col-1]='O';
		 return;
	  }else if(board[row][col+1]==' '){
		       board[row][col+1]='O';
		       return;
	  }else if(board[row-1][col]==' '){
		       board[row-1][col]='O';
		       return;
	  }else if(board[row+1][col]==' '){
		       board[row+1][col]='O';
		       return;
			    }
			}
		}
	}
}
