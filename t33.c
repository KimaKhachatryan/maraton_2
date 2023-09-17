#include <stdio.h>

int main()
{
	int num = 0;
	int num2 = 0;
	
	puts ("Enter any number");
	scanf ("%d", &num);

	while (num > 0) {
		num2 += num % 10;
		num /= 10;
	}

	printf("%d\n", num2);

return 0;
}
