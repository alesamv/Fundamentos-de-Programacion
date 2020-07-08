#include<stdio.h>
#include<conio.h>

float grupo[3][5];
float promedio=0;
int x,y;

main()
{
	for(x=0;x<=2;x++)
	{
		for(y=0;y<=4;y++)
		{
			printf("Dame la calificacion de del alumno %d:", y+1);
			scanf("%f",&grupo[x][y]);
			promedio=(promedio+grupo[x][y]);
		}
		promedio=promedio/5;
		printf("El promedio del grupo es: %.1f\n",promedio);
		promedio=0;
		
	}
	getch();
}
