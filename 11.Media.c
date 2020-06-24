#include<stdio.h>
#include<conio.h>
float a,b,c,d,e;

main()
{
	printf("¿Cuantos valores vas a ingresar?\n");
	scanf("%f",&d);
	printf("Ingresa los valores:\n");
	
	do
	{
		scanf("%f",&b);
		a=a+b;
		e=e+1;
	} while (e!=d);
		c=a/d;
		printf("La media es %.2f\n",c);
		getch();
}
