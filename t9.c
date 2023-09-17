#include <stdio.h>

int main ()
{
	char sym;
	    do {
			printf("Enter any uppercase Latin letter:\n");
			scanf(" %c", &sym);
		}while ((sym < 'A') || (sym > 'Z'));
		
		sym += 32;
	
		printf("Lowercase of letter you typed is %c.\n", sym);

return 0;
}
