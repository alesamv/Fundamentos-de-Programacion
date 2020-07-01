#include <stdio.h>
char c;
char *pc;

main()
{
	pc=&c;
	for(c='A';c<='Z';c++)
	{
		printf("%c-",*pc);
	}
}
