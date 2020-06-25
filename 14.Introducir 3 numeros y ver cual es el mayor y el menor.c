#include<stdio.h> 
#include<conio.h>
int num,i,vma,vme;

main() 
{ 
	printf("¿Cual es el numero mayor y cual el menor?\n");
	for(i=0; i<3; i++)
	{ 
		printf("Dame un numero : "); 
		scanf("%d",&num); 

		if(i==0)
		{ 
			vma = num;
			vme = num;

		} 
		else 
		{ 

			if(num>vma) 
			vma=num; 
			
			if(num<vme) 
			vme=num; 
		} 

	} 
	printf("\nEl numero mayor es : %d",vma); 
	printf("\nEl numero menor es : %d",vme);
	getch();
}
