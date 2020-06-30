#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
char x;
int s;
main()
{
	printf("Ingresa cuantos años has trabajado:\n");
	puts("1.Mas de 10 años");
	puts("2.Entre 5 y 10 años");
	puts("3.Entre 3 y 5 años");
	puts("4.Menos de 3 años");
	scanf("%d",&x);
	switch(x)
	{
		case 1: 
			system("cls");
			s=40000+(0.10*40000);
			printf("Tu sueldo anual es de: %d",s);
			break;
			
		case 2:
			system("cls");
			s=40000+(0.07*40000);
			printf("Tu sueldo anual es de: %d",s);
			break;
			
		case 3:
			system("cls");
			s=40000+(0.05*40000);
			printf("Tu sueldo anual es de: %d",s);
			break;
			
		case 4:
			system("cls");
			s=40000+(0.03*40000);
			printf("Tu sueldo anual es de: %d",s);
			break;
			
		default:
			system ("cls");
			printf("Esta opcion no es valida");
	}
	getch();
		
		
}
