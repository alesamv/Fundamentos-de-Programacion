#include <stdio.h>
#include <conio.h>
int x, y, w;
main()
{
	printf("\t\tNumeros primos del 1 al 100:\n");
	for (x=2;x<=100;x++)
	{
 		w=0;
 		for(y=1;y<=100;y++)
 		{
     		if(x%y==0)
     		w++;
 		}
 		
 		if (w==2)	
		{
 			printf("%d\n", x);
		}
 	}
 	getch();
}
