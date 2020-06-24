#include<stdio.h> 
#include<conio.h> 
#include<math.h>
float a, b, c, d, x1, x2, xi, xr;
main()
{
	printf("\t\tSolucion a una ecuacion de segundo grado\n");
    printf("Escribe el valor de a:  ");
    scanf("%f", &a);
    while(a==0)
   {
		printf("\t\tEsta ecuacion no es de segundo grado.\n Ingrese el valor de nuevo:  ");
		scanf("%f", &a);
   }
   printf("Escribe el valor de b:  ");
   scanf("%f", &b);
   printf("Escribe el valor de c:  ");
   scanf("%f", &c);
   
   d=pow(b, 2.0)-4*a*c;
   if(d>0.0)
   {
       printf("\t\tLas dos raices son reales");
       x1=((-b+sqrt(d))/(2.0*a));
       x2=((-b-sqrt(d))/(2.0*a));
       printf("\n\t\tx1=%.2f   x2=%.2f", x1, x2);
   }
   else
   {
       if(d==0.0)
	   {
           x1=(-b)/(2.0*a);
           printf("\n\t\tLa ecuacion solo tiene una raiz %.2f", x1);
       }
       else
	   {
           xr=(-b/(2.0*a));
           xi=(sqrt(-d)/(2.0*a));
           printf("\n\tx1= %.2f + %.2f i", xr, xi);
           printf("\n\tx1= %.2f - %.2f i", xr, xi);
       }
   }
	getch();
}


