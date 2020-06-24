#include <stdio.h>
#include <conio.h>
int x,y,m;

main()
{
	printf(" Introduce el numero de la tabla que deseas saber: ");
	scanf("%d",&y);
	for(x=1;x<=10;x++)
    {
    	m=y*x;
        printf("%d x %d = %d\n",y,x,m);
    }
	getch();

}

