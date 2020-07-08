#include <stdio.h>
#include <conio.h>
int num, sum=0;

main()
{
    printf("Ingrese un numero: \n");
	scanf("%d",&num);
	if(num<0)
	{
		printf("La suma es: %d", sum);
	}
	else
	{
		
		while(num > -1)
	    {
	    	sum=sum+num;
		    printf("Ingrese un numero: \n");
		    scanf("%d",&num);
	    }
	    printf("La suma es: %d", sum);
	}
	
	getch();
}
