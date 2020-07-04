#include <stdio.h>
char *ap, c='a';

int main()
{
	ap=&c;
	printf("Caracter: %c\n", *ap);
	printf("Direccion en memoria: %d", ap);
	
	return(0);
}
