#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int x;
float y,z,s,r,m;
void suma();
void resta();
void multiplicacion();

main()
{
	puts("Calculadora basica");
	puts("1. Suma");
	puts("2. Resta");
	puts("3. Multiplicacion");
	puts("Selecciona una opcion");
	scanf("%d",&x);
	switch(x)
	
	{
		case 1: 
			system("cls");
			suma();
			break;
			
		case 2:
			system("cls");
			resta();
			break;
			
		case 3:
			system("cls");
			multiplicacion();
			break;
	}	
	getch();
}

void suma()
{
	printf("Dame el primer valor: ");
	scanf("%f", &y);
	printf("Dame el segundo valor: ");
	scanf("%f", &z);
	s=y+z;
	printf("La suma de los dos valores es de %f",s);
		
}

void resta()
{
	printf("Dame el primer valor: ");
	scanf("%f", &y);
	printf("Dame el segundo valor: ");
	scanf("%f", &z);
	r=y-z;
	printf("La resta de los dos valores es de %f",r);
}

void multiplicacion()
{
	printf("Dame el primer valor: ");
	scanf("%f", &y);
	printf("Dame el segundo valor: ");
	scanf("%f", &z);
	m=y*z;
	printf("La multiplicacion de los dos valores es de %f",m);
}
