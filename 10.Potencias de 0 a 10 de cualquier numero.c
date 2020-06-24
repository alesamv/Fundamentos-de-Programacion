#include<stdio.h>
#include<conio.h>
#include<math.h>
int b,e,p;



main ()
{
	printf("\t\tPotencias del 0 a 10 de un numero\n");
    printf( "Escriba la base: ");
    scanf( "%d", &b);
  
    for(e=0;e<=10;e++)
	{
		p=pow(b,e);
		printf("%d elevado a %d es %d\n", b, e,p);
  		
	}
  getch();
}
