#include<stdio.h>
#include<conio.h>
int a,b,c;

main()
{
	printf("Introduce 3 números y te diré si el tercer numero es igual a la suma del primero y el segundo\n");
	printf("Introduce el primer numero:\n");
	scanf("%d",&a);
	printf("Introduce el segundo numero:\n");
	scanf("%d",&b);
	printf("Introduce el tercer numero:\n");
	scanf("%d",&c);
	
	if (a+b==c)
	{
		printf("El tercer numero es la suma de los dos primeros\n");
	}
	else
	{
		printf("El tercer numero no es la suma de los dos primeros\n");
	}
	getch();
}
