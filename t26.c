#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	puts ("Enter 3 numbers.");
	scanf ("%d%d%d", &num1, &num2, &num3);

	if (num1 < num2) {
		int tmp = num1;
		num1 = num2;
		num2 = tmp;
	}

	while (num2 != 0) {
		int rem = num1 % num2;
		num1 = num2;
		num2 = rem;
	}

	if (num1 > num3) {
		int tmp = num1;
		num1 = num3;
		num3 = tmp;
	}

	while (num3 != 0) {
		int rem = num1 % num3;
		num1 = num3;
		num3 = rem;
	}
	
	printf ("%d\n", num1);
return 0;
}
