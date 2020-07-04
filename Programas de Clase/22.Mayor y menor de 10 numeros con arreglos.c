#include<stdio.h> 
#include<conio.h>
int b[10],i,vma,vme,x;

main() 
{ 
	printf("¿Cual es el numero mayor y cual el menor?\n");
	for(i=0; i<10; i++)
	{ 
		printf("Dame un numero : "); 
		scanf("%d",&b[x]); 

		if(i==0)
		{ 
			vma = b[x];
			vme = b[x];

		} 
	
		else 
		{ 

			if(b[x]>vma) 
			vma=b[x]; 
			
			if(b[x]<vme) 
			vme=b[x]; 
		} 

	} 
	printf("\nEl numero mayor es : %d",vma); 
	printf("\nEl numero menor es : %d",vme);
	getch();
}
