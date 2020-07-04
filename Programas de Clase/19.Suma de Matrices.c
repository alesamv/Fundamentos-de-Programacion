#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int y,x, a[2][2],b[2][2],c[2][2];

main()
{
	for(y=1;y<3;y++)
	{
		for(x=1;x<3;x++)
		{
			printf("Dame el valor de la matriz A [%d][%d]\n", y, x);
			scanf("%d",&a[y][x]);
			printf("Dame el valor de la matriz B [%d][%d]\n",y, x);
			scanf("%d",&b[y][x]);
		}
	}
	system("cls");
	printf("El valor de la matriz C es de: \n");
	printf("x\ty");
	
	for(y=1;y<3;y++)
	{
		printf("\n");
		for(x=1;x<3;x++)
		{
			c[y][x]=b[y][x]+a[y][x];
			printf("%d\t",c[y][x]);
		}	
	}
}

