#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int x;
int promedio[6];
float p=0, s=0;

main()
{
	printf("Promedio de 5 numeros\n");
	for(x=1;x<6;x++)
	{
		printf("Dame un número: ");
		scanf("%d",&promedio[x]);
		s=s+promedio[x];
	}
	p=s/5;
	
	printf("El promedio es: %f",p);
	getch();	
} 
