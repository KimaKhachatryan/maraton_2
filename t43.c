#include <stdio.h>

int main ()
{
	int num1 = 0;
	int num2 = 0;

	puts ("Enter 2 numbers.");
	scanf ("%d%d", &num1, &num2);

	printf ("%d\n", num1 | num2);
return 0;
}
