#include<stdio.h>
#include<conio.h>

float gastos[8];
int x;

main()
{
	for(x=1;x<8;x++)
	{
		printf("Dame los gastos del dia [%d]: ",x);
		scanf("%f",&gastos[x]);
	}
	system("cls");
	for(x=1;x<8;x++)
	{
		printf("Los gastos almacenados el dia [%d] son: %.1f\n",x,gastos[x]);
	}
	getch();
}
