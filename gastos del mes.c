#include<stdio.h>
#include<conio.h>
float gastos[12];
int x;

main()
{
	for(x=1;x<13;x++)
	{
		printf("Dame los gastos del mes [%d]: ",x);
		scanf("%f",&gastos[x]);
	}
	
	for(x=1;x<13;x++)
	{
		printf("Los gastos almacenados en el mes [%d] son: %.2f\n",x,gastos[x]);
	}
	getch();
}
