#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
int a,b,c,x;

main()
{
	printf("\tSERIE DE FIBONACCI\n");
	
	a = 0;  
	b = 1; 

	printf("%d\n%d\n",a,b);

	while(c < 100){
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
		getch();
	}
}
