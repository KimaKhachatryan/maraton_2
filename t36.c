#include <stdio.h>

int main ()
{
	int num1 = 0;
	int num2 = 0;
	long sum = 0;

	puts ("Enter 2 numbers.");
	scanf ("%d%d", &num1, &num2);

	if (num1 % 2 != 0) {
		++num1;
	}

	if (num1 > num2) {
		int tmp = num1;
		num1 = num2;
		num2 = tmp;
	}

	while (num1 <= num2) {
		sum += num1;
		num1 += 2;
	}

	printf ("%ld\n", sum);

return 0;
}
