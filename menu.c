#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#define rows 7
#define cols 5

int menu() //меню з вибором 2х режимів гри та виходом. повертає в main 1/2 в залежності від вибору
{
	char key; 	
	system("cls");
    printf("\n\n");
	printf("\tThis is a game of Tic Tac Toe\n\n");
    printf("\t------------MENU-------------");
    printf("\n\n");
    printf("\tRULES \n");
    printf("\t>1 :\n");
    printf("\tEach player will  be entering\n");
	printf("\ta   number to put  X or O  in\n"); 
	printf("\tthe desired position\n");
	printf("\t_____________________________\n");
	printf("\t>2 :\n");
	printf("\tPlayer who gets a combination\n"); 
	printf("\tof 4 same  marks (diagonal or\n"); 
	printf("\thorizontally  or  vertically)\n"); 
    printf("\twill be declared as a  winner\n");
    printf("\t_____________________________\n\n");
    printf("\t\tChoose mode  :\n\n");
    printf("\tplay with your friend.......1\n\n");
    printf("\tplay with your computer.....2\n\n");
    printf("\texit........................3\n\n");
    do{
       printf("\t");
       key=getch();
	   if(key==49){
    	  return 1; 
		}
	   else if(key==50){
		  return 2;
		}
	   else if(key==51){
		  printf("\n\t\t  Good bye!\n");
		  printf("\t*****************************");
		  exit(0);
		}
	   else printf("\n\tPlease, choose mode: ");
	}while(key<49||key>51);	
}
