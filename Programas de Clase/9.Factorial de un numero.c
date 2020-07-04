#include<stdio.h>
#include<conio.h>
int x,n,f;

main()
{
	f=1;
	printf("Dame un numero: ");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	{
		f=(f*x);	
	}
	printf("El factorial de %d es: %d",n,f);
	getch();
}
