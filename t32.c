#include <stdio.h>

int main()
{
	int num = 0;

	do{
		puts ("Pleas enter any number which greater than 12.");
		scanf ("%d", &num);
	} while (num < 12);

	int a = 10;

	while (num > 0) {
		printf("%d", num % a);
		num /= a;
	}

return 0;
}
