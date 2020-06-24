#include <stdio.h> 
#include <conio.h>
int x,y; 

main()
{ 
	printf("\t\t TABLAS DE MULTIPLICAR DEL 1 AL 10\n\n"); 
	for(x=1;x<11;x++)
 	{ 
   		for(y=1;y<11;y++)
   		{ 
   		   printf(" \n %d x %d = %d",x,y,x*y);	
   		} 
 		printf("\n "); 
 	} 
	getch();

}
