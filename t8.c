#include <stdio.h>

int main ()
{
	int x = 0;
	int y = 0;
	double sum = 0;
	puts ("Enter the values of x & y.");
	scanf ("%i%i", &x, &y);
	
	sum = x * y + 21 * x / y - 200;
	printf ("%d * %d + 21 * %d / %d - 200 = %.3lf\n", x, y, x, y, sum);
return 0;
}
