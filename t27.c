#include <stdio.h>

int main ()
{
	int num = 0;

	puts ("Enter the number:\t");
	scanf ("%d", &num);

	if (num > (num ^ 32)) {
		printf ("%d\n", num);
	} else if (num < (num ^ 32)) {
		printf ("%d\n", num ^ 32);
		}

return 0;
}
