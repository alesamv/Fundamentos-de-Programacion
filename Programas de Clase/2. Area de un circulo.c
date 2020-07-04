#include<stdio.h>
#include<conio.h>

#define pi 3.1416
float r,A;

main()
{
	printf("\t\tAREA DE UN CIRCULO\n");
	printf("Dame el valor del radio:");
	scanf("%f",&r);
	A=(pi*r*r);
	printf("El area es %f",A);
	getch();
}
