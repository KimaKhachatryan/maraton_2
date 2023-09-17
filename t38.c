#include <stdio.h>

int main ()
{
	int num = 0;

	do {
		puts ("Enter the lenght.");
		scanf ("%d", &num);
	} while (num < 0);

	for (short i = 0; i < num; ++i) {
		printf ("\n");
		for (short j = 0; j < num ; ++j) {
			if ((i > 0 && i < num - 1)  && (j > 0 && j < num - 1)) {
				printf (" ");
			} else {
			printf ("*");
			}
		}
	}

	printf ("\n");
return 0;
}
