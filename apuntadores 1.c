#include <stdio.h>
int i=1;
int *p;

main()
{
	p=&i;
	
	printf("Acceso directo, i=%d\n",i);
	printf("Acceso indirecto, i=%d\n",*p);
	
	printf("La direccion de i=%d\n",&i);
	printf("La direcci�n de i=%d\n",p);
}
