#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define p puts
#define pf printf
#define s scanf
int x, cel, num, t, h;
float i, c;
void grados(); void corriente(); void numeros(); void calificacion(); void vestir();

main()
{
	p("\tMenu");
	p("1.Tabla grados Celsius a Fahrenheit");
	p("2.Calcular la corriente electrica");
	p("3.Numero par o impar");
	p("4.Calificacion");
	p("5.Forma de vestir");
	p("Ingrese una opcion: ");
	s("%d",&x);
	
	switch(x)
	{
		case 1:
			grados();
			break;
		
		case 2:
			corriente();
			break;
			
		case 3:
			numeros();
			break;
			
		case 4: 
			calificacion();
			break;
			
		case 5:
			vestir();
			break;
			
		default:
			p("No existe opción");
			break;
	}
	getch();
}

void grados()
{
	system("cls");
	pf("\tTabla de grados Celsius a Fahrenheit\n");

	for(cel=0;cel<=100;cel++)
	{
		pf("%3d %6.lf\n",cel,((9.0/5.0)*(cel))+32);
	}
	getch();
}

void corriente()
{
	system("cls");
	pf("\tCalculacion de corriente\n");
	i=(120.0/240.0);
	
	pf("Una bombilla de 240 ohms se le aplica un voltaje de 120, su corriente es de: %.2f",i);
	getch();
}

void numeros()
{
	system("cls");
	pf("\tNumero par e impar\n");
	pf("Ingresa un numero: ");
	s("%d",&num);
	

	if(num%2==0)
	{
		p("\nEs par");
		getch();
	}
	else
	{
		p("\nEs impar");
		getch();
	}
	
}

void calificacion()
{
	system("cls");
	pf("\tCalificacion\n");
	pf("Ingresa una calificacion y te dire de que tipo es: ");
	s("%f",&c);
	
	if(c==10)
	{
		pf("Excelente\n");
	}
	
	else if(c<=9.99 && c>=9)
	{
		pf("Sobresaliente");
	}
			
	else if(c<=8.99 && c>=7)
	{
		pf("Notable");
	}
			
	else if(c<=6.99 && c>=5)
	{
		pf("Aprobado");
	}
		
		
	else if(c<=4.99 && c>=4)
	{
		pf("No aprobada");
	}
		
	else 

		pf("Calificacion no valida");
		
	getch();
}

void vestir ()
{
	system("cls");
	pf("\tForma de Vestir\n");
	pf("Ingresa la temperatura: ");
	s("%d",&t);
	pf("Ingresa la humedad: ");
	s("%d",&h);
	
	if(t>=0 && t<=25 && h>=0 && h<=90)
	{
		pf("Debes usar pantalon largo y camisa");
	}
	
	else if(t<=0 && t<=10 && h>=0 && h<=50)
	{
		pf("Debes usar pantalon de pana y chaleco");
	}
		
	else if(t<=0 && t<=20 && h>=0 && h<=45)
	{
		pf("Debes usar pantalon, chaleco y abrigo");
	}
	
	else if(t<=0 && t<=30 && h>=0 && h<=85)
	{
		pf("Debes usar pantalon corto y camiseta");
	}
	else 
	
		pf("No hay opcion");
		
	getch();
}
