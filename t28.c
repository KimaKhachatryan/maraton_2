#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;

	puts ("Enter 2 numbers.");
	scanf ("%d%d", &num1, &num2);

	if ((num1 % num2 == 0) || (num2 % num1 == 0)) {
		puts ("Numbers are divisible without remainder.");
	} else {
		puts ("Numbers are divisible with remainder.");
		}
return 0;
}
