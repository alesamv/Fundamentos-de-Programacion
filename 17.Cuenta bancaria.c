#include<stdio.h>
#include<conio.h>
#include<math.h>
float f,i,p,r,po,a,n;
main()
{
	printf("¿Cuánto dinero acumularas en tu cuenta bancaria?\n");
	printf("Introduce tu deposito inicial: ");
	scanf("%f",&p);
	printf("Indica los años que has tenido la cuenta bancaria; ");
	scanf("%f",&n);	
	printf("Indica el tanto por ciento anual compuesto: ");
	scanf("%f",&r);
	
	i=(r/100); 
	a=(1+i);
	po= pow(a,n);
	f=p*po;
	
	printf("La cantidad futura es de %.5f:", f);
	getch();
	
}
