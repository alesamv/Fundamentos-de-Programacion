#include<stdio.h>
#include<conio.h>

int x;

main()
{
	printf("\t\t¿NUMERO PAR O IMPAR?\n");
	printf("Introduce el numero:");
	scanf("%d",&x);
	

	if(x%2==0)
	{
		printf("\nEs par");
	}
	else
	{
		printf("\nEs impar");
	}
	getch();
	
}
