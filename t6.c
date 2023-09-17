#include <stdio.h>

int main ()
{
	int x = 0;
	long sum = 0;
	puts ("Enter the value of x.");
	scanf ("%i", &x);
	
	sum = 4 * x + 21 * x * x - 12;
	printf ("4 * %d + 21 * %d * %d - 12 = %d\n", x, x, x, sum);
return 0;
}
