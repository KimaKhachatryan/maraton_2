#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;

	puts ("Enter 2 numbers.");
	scanf ("%d%d", &num1, &num2);

	if( num1 > num2) {
		printf ("Max = %d.\n", num1);
	 } else if (num2 > num1) {
		printf ("Max = %d.\n", num2);
	 } else {
		puts ("Numbers are equal or not a number.");
	}
return 0;
}
