#include <stdio.h>

int main()
{
	int sum = 0;
	int num1 = 0;
	int num2 = 1;
	int index = 0;

	do	{
		puts("Enter the number.");	
		scanf("%d", &index);
		} while (index < 0);

	do {
		printf ("%d ", sum);
		num1 = num2;
		num2 = sum;
		sum = num1 + num2;
		--index;
	} while (index >= 0);
	
	printf ("\n");
return 0;
}
