#include <stdio.h>

int main ()
{
	int num = 0;
	int shift = 0;

	printf ("Enter the num: ");
	scanf ("%d", &num);
	do {
		printf ("Enter the shift count: ");
		scanf ("%d", &shift);
		} while (shift < 0);

	printf ("The result: %d\n", num << shift);

return 0;
}
