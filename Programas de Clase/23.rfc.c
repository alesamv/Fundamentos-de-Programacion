#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
char nom[20], ap[20], am[20], fe[6], rfc[8];
int x,y;

main()
{
	puts("\t\tRFC");
	puts("Ingresa tu apellido paterno: ");
	gets(ap);
	puts("Ingresa tu apellido materno: ");
	gets(am);
	puts("Ingresa tu primer nombre o nombre unico: ");
	gets(nom);
	puts("Ingresa la fecha de tu nacimiento de la forma ddmmaa: ");
	gets(fe);
	
	while(y!=1)
	{

		if(ap[x]=='a'||ap[x]=='e'||ap[x]=='i'||ap[x]=='o'||ap[x]=='u'||ap[x]=='A'||ap[x]=='E'||ap[x]=='I'||ap[x]=='O'||ap[x]=='U')
		{
			rfc[1]=ap[x];
			y=1;
		}
		x++;
	}
	
	rfc[0]=ap[0];
	rfc[2]=am[0];
	rfc[3]=nom[0];
	rfc[0]=toupper(rfc[0]);
	rfc[1]=toupper(rfc[1]);
	rfc[2]=toupper(rfc[2]);
	rfc[3]=toupper(rfc[3]);
	rfc[4]=fe[4];
	rfc[5]=fe[5];
	rfc[6]=fe[2];
	rfc[7]=fe[3];
	rfc[8]=fe[0];
	rfc[9]=fe[1];
	
	system("cls");
	printf("\nTu rfc es: %s",rfc);
	getch();
}
