#include <stdio.h>

int main()
{
	int num = 0;	

	puts("Enter any number.");
	scanf("%d", &num);

	if(num % 2 > 0 || num % 2 < 0) {
		puts("It's an odd number.");
	} else {
		puts("It's an even number.");
	}

return 0;
}
