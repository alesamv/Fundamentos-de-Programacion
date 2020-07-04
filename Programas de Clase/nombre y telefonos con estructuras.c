#include<stdio.h>
int i;

//Estructura para guardar las entradas
struct entrada
{
	char nombre[50];
	char apellido1[50];
	char apellido2[50];
	char telefono[10];
};
//Arreglo de estructuras
struct entrada lista[5];

main()
{
	//Ciclo para recibir datos y guardarlos
	for(i=0;i<=4;i++)
	{
		printf("\nIngresa nombres: ");
		scanf("%s",&lista[i].nombre);
		
		printf("\nIngresa apellido paterno: ");
		scanf("%s",&lista[i].apellido1);
		
		printf("\nIngresa apellido materno: ");
		scanf("%s",&lista[i].apellido2);
		
		printf("\nIngresa el numero telefonico: ");
		scanf("%s",&lista[i].telefono);
	}
	
	printf("\n\n");
	//Ciclo para desplegar los datos
	for(i=0;i<=4;i++)
	{
		printf("Nombre: %s %s %s",lista[i].nombre, lista[i].apellido1, lista[i].apellido2);
		printf("\t\t Telefono: %s\n",lista[i].telefono);
	}
}

