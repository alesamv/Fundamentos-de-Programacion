#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int x,r;
float suma, promedio, meses[15];
const char *mes1[15]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};

main()
{
	suma=0;
	promedio=0;
	
	for(x=0;x<12;x++)
	{
		printf("Dame los gastos del mes de %s\t",mes1[x]);
		scanf("%f",&meses[x]);
		suma=suma+meses[x];
	}
	promedio=(suma/12);
	printf("El promedio anual es:%.2f", promedio);
}
