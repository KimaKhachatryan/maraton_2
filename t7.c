#include <stdio.h>

int main ()
{
	float x = 0;
	double sum = 0;
	puts ("Enter the value of x.");
	scanf ("%f", &x);
	
	sum = x / (5 + 2) + 30 * x - 51;
	printf ("%f / (5 + 2) + 30 * %f - 51 = %lf\n", x, x, sum);
return 0;
}
