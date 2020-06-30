#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
char x;
int lado, p, ladodos, ladotres;
main()
{
	puts("Perimetro de un triangulo\n");
	puts("1.Equilatero");
	puts("2.Isoceles");				
	puts("3.Escaleno");
	printf("Selecciona que triangulo deseas obtener el perimetro\n");
	scanf("%d",&x);
	
	switch (x)
	{
		case 1:
			system("cls");
			printf("Escribe el valor de un lado del triangulo:\n");
			scanf("%d",&lado);
			p=(lado*3);
			printf("El perimetro de el triangulo es: %d",p);
			break;
		
		case 2:
			system("cls");
			printf("Escribe el valor de un lado de los lados iguales del triangulo:\n");
			scanf("%d",&lado);
			printf("Escribe el valor de el lado que no es igual:\n");
			scanf("%d",&ladodos);
			p=lado+lado+ladodos;
			printf("El perimetro de el triangulo es: %d",p);
			break;
			
		case 3:
			system("cls");
			printf("Escribe el valor de un lado del triangulo:\n");
			scanf("%d",&lado);
			printf("Escribe el valor de el siguiente lado:\n");
			scanf("%d",&ladodos);
			printf("Escribe el valor de el siguiente lado:\n");
			scanf("%d",&ladotres);
			p=lado+ladodos+ladotres;
			printf("El perimetro de el triangulo es: %d",p);
			break;
			
		default:
			system("cls");
			printf("Opcion no valida");
			getch();
			break;
	}
}
