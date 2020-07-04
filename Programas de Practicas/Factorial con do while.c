#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define p printf
#define s scanf

int a, b, num, n, sum;

int main()
{
		a = 1;		
		b = 0;
		n=1;
		p("\t \t Factorial\n");
		p("Ingresa el numero del cual deseas obtener la factorial: ");
		s("%d", &num);
		b = num;
		p("\t");
	
		do{
			b=b*n;	
			n=n++;
	
		}while (n<num);
		system("cls");
		printf("El factorial de %d es %d ", num, b);
 		printf("\n \n ");
    	getch();
}





