#include<stdio.h>

struct aporta
{
	float cuenta;
	char nombre[50];
	char apellido[50];
} rec;

main()
{
	printf("Ingresa nombre y apellido del donador, separa con un espacio: \n");
	scanf("%s %s",&rec.nombre, &rec.apellido);
	
	printf("Ingresa el monto de aportacion: \n");
	scanf("%f", &rec.cuenta);
	
	printf("El nombre del donador es %s %s y el monto aportado es de: $%.2f", rec.nombre, rec.apellido, rec.cuenta);
	
}
