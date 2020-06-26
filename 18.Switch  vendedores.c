#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<conio.h>
char x,y;
main()
{
	puts("\t\t\tMENU");
	
	puts("1. Norte");
	puts("2. Sur");
	puts("3. Occidente");
	puts("4. Oriente");
	printf("Seleccione opción\n");
	scanf("%d",&x);
	printf("\n");
	
	switch(x)
	{
		case 1:
			system("cls");
			printf("Norte\n");
			puts("1. Andrea");
			puts("2. Katy");
			puts("3. Fede");
			scanf("%d", &y);
			printf("\n");
			
			switch(y)
			{
				case 1:
					system("cls");
					printf("Andrea vendio: 19055");
					break;
				case 2:
					system("cls");
					printf("Katy vendio: 649027");
					break;
				case3:
					system("cls");
					printf("Fede vendio: 739274");
					break;
			}
			break;
			
		case 2:
			system("cls");
			printf("Sur\n");
			puts("1. Mariana");
			puts("2. Axel");
			puts("3. Alejandra");
			scanf("%d", &y);
			printf("\n");
			
			switch(y)
			{
				case 1:
					system("cls");
					printf("Mariana vendio: 673035");
					break;
				case 2:
					system("cls");
					printf("Axel vendio: 489047");
					break;
				case 3:
					system("cls");
					printf("Alejandra vendio: 3640328");
					break;
			}
			break;
		
		case 3:
			system("cls");
			printf("Occidente\n");
			puts("1. Yair");
			puts("2. Vanessa");
			puts("3. Rodrigo");
			scanf("%d", &y);
			printf("\n");
			
			switch(y)
			{
				case 1:
					system("cls");
					printf("Yair vendio: 462849");
					break;
				case 2:
					system("cls");
					printf("Vanessa vendio: 12368");
					break;
				case 3:
					system("cls");
					printf("Rodrigo vendio: 562930");
					break;
			}
			break;
		
		case 4:
			system("cls");
			printf("Oriente\n");
			puts("1. Miguel");
			puts("2. Elisa");
			puts("3. Isaias");
			scanf("%d", &y);
			printf("\n");
			
			switch(y)
			{
				case 1:
					system("cls");
					printf("Miguel vendio: 740849");
					break;
				case 2:
					system("cls");
					printf("Elisa vendio: 18308");
					break;
				case 3:
					system("cls");
					printf("Isaias vendio: 79930");
					break;
				default:
					printf("No hay opción");
			}
			break;
		default:
			printf("Opcion no valida");
			getch();
			break;
	}
}
