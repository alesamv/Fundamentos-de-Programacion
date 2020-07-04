#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
char s1[100], s2[100], s3[100];
main()
{
	puts("Dame tu nombre: ");
	gets(s1);
	puts("Dame tu apellido paterno: ");
	gets(s2);
	puts("Dame tu apellido materno: ");
	gets(s3);
	
	strcat(s2," ");
	strcat(s2,s3);
	strcat(s2," ");
	strcat(s2,s1);
	
	printf("Tu nombre es: %s", s2);
	getch();
}
