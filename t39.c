#include <stdio.h>

int main ()
{
	int num = 0;

	do {
		puts ("Enter the number of rows.");
		scanf ("%d", &num);
	} while (num < 0);

	for (short i = 1; i <= num; ++i) {
		printf ("\n");
		for (short j = 1; j <= i ; ++j) {
			printf ("*");
		}
	}

	printf ("\n");
return 0;
}
