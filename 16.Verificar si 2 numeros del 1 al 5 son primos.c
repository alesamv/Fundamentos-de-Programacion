#include<stdio.h>
#include<conio.h>
int a,b;

main()
{
	printf("Dame dos numeros entre 1 y 5 y te dire si son primos\n");
	printf("Introduce el primer número:\n");
	scanf("%d",&a);
	printf("Introduce el segundo número:\n");
	scanf("%d",&b);
	
	while((a>5)||(a<1))
	{
		printf("a no esta en el rango indicado. Volver a introducir: ");
		scanf("%d",&a);
	}

	while((b>5)||(b<1))
	{
		printf("b no esta en el rango indicado. Volver a introducir: ");
		scanf("%d",&b);
	}
	if(a==2)
	{
		printf("\n%d es primo",a);
	}
	else
	{
		if(a==3)
		{
			printf("\n%d es primo",a);
		}
		else
		{
			if(a==5)
			{
				printf("\n%d es primo",a);
			}
			else
			{
				printf("\n%d no es primo",a);
			}
		}
	}
	
		if(b==2)
	{
		printf("\n%d es primo",b);
	}
	else
	{
		if(b==3)
		{
			printf("\n%d es primo",b);
		}
		else
		{
			if(b==5)
			{
				printf("\n%d es primo",b);
			}
			else
			{
				printf("\n%d no es primo",b);
			}
		}
	}
	
	
	getch();
}
