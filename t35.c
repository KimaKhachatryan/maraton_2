#include <stdio.h>

int main ()
{
	int num = 0;

	do {
		puts ("Enter the number.");
		scanf ("%d", &num);
	} while (num < 0);

	for (short i = 1; i <= 10; ++i) {
		printf ("%d * %d = %d\n", num, i, num * i);
	}

return 0;
}
