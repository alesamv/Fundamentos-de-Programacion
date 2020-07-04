#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int a,b,c;

main()
{
	printf("Introduce 3 numeros y detecto si están en forma decreciente\n");
	printf("Introduce el primer numero:\n");
	scanf("%d",&a);
	printf("Introduce el segundo numero:\n");
	scanf("%d",&b);
	printf("Introduce el tercer numero:\n");
	scanf("%d",&c);
	
    if (a>b>c)
	{
		printf("%d, %d, %d Estan en orden Decreciente",a,b,c);
	}
	else
	{
		printf("%d, %d, %d No estan en orden Decreciente",a,b,c);
	}
	getch();
	
}


