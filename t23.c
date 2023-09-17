#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int max = 0;

	puts("Enter 3 numbers.");
	scanf("%d%d%d", &num1, &num2, &num3);

	if (num1 >= num2 && num1 >= num3) {
		max = num1;
	} else if (num2 >= num1 && num2 >= num3)
		max = num2;
		} else if (num3 >= num1 && num3 >= num2)
			max = num3;
			}

	if(num1 == num2 || num1 == num3 || num2 == num3) {
		printf("Max = %d.\n", max);
		} else { 
			puts("There aren't 2 equal numbers.");
			}
return 0;
}
