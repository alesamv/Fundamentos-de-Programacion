#include <stdio.h> 
#include <conio.h>
#define p printf
#define w while
int x,y, m;


main()
{ 
	p("\tTablas de Multiplicar del 1 al 10\n");
	x=0;
	w(x++<=9)
	{
		y=0;
		w(y++<9)
		{
			m=(x*y);
			p("%d x %d = %d\n", x,y,m);
			
		}
		p("\n");
		getch();
	
		
	}
	
}
