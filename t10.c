#include <stdio.h>

int main ()
{
char sym;

	puts("Please enter any symbol");
	scanf("%c", &sym);

	if ((sym > 47) && (sym < 58))
		{
			puts("True");
	} else if (sym >= 'a' && sym <= 'z' || sym >= 'A' && sym <= 'Z') {
			puts("False");
		} else {
				puts ("Not a number. Not a letter.");
			}	

return 0;
}
