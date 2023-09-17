#include <stdio.h>

int main()
{
	 int num1 = 0;
	 int num2 = 0;
	 int num3 = 0;
	 int num4 = 0;
	 int min = 0;

	 puts ("Enter 4 numbers.");

	 scanf ("%d%d%d%d", &num1, &num2, &num3, &num4);

		if (num1 <= num2 && num1 <= num3 && num1 <= num4) {
			min = num1;
			} else if (num2 <= num3 && num2 <= num4) {
				min = num2;
				} else if (num3 <= num1 && num3 <= num4) {
					min = num3;
					} else {
						min = num4;
						}

		if (num1 + num2 + num3 + num4 == 0) {
			printf("%d", min);
			} else { 
				puts("The sum of 4 numbers is not equal to 0.");
				}
return 0;
}
