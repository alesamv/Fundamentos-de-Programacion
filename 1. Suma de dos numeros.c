#include<stdio.h>
#include<conio.h>

int a,b,c;

main()
{
	printf("\t\tSUMA DE DOS NUMEROS\n");
	printf("Dame el primer valor:");
	scanf("%d",&a);
	printf("Dame el segundo valor:");
	scanf("%d",&b);
	c=(a+b);
	printf("El resultado de la suma es: %d",c);
	getch();
}

