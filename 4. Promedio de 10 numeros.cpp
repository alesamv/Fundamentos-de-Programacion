#include<stdio.h>
#include<conio.h>
float a,b,c,d,e,f,g,h,i,j;
float k;

main()
{
	printf("\t\tPROMEDIO DE 10 NÚMEROS\n");
	printf("Dame el primer valor:");
	scanf("%f",&a);
	printf("Dame el segundo valor:");
	scanf("%f",&b);
	printf("Dame el tercer valor:");
	scanf("%f",&c);
	printf("Dame el cuarto valor:");
	scanf("%f",&d);
	printf("Dame el quinto valor:");
	scanf("%f",&e);
	printf("Dame el sexto valor:");
	scanf("%f",&f);
	printf("Dame el septimo valor:");
	scanf("%f",&g);
	printf("Dame el octavo valor:");
	scanf("%f",&h);
	printf("Dame el noveno valor:");
	scanf("%f",&i);
	printf("Dame el decimo valor:");
	scanf("%f",&j);
	
	k=((a+b+c+d+e+f+g+h+i+j)/10);
	printf("El promedio es %.2f", k);
	getch();
}
