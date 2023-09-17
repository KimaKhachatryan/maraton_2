#include <stdio.h>

int main () 
{
	char op;
	int num1 = 0;
	float num2 = 0;

	do {
		puts ("Enter the operation (+, -, *, /).\nIf you don't want to continue, press Q.");
		scanf (" %c", &op);

		if (op == 'Q') {
			return 0;
		}

		puts ("Enter 2 numbers.");
		scanf (" %d%f", &num1, &num2);

		switch (op) {
			case '+':
				printf ("%.0f\n", num1 + num2);
				break;
			case '-':
				printf ("%.0f\n", num1 - num2);
				break;
			case '*':
				printf ("%.0f\n", num1 * num2);
				break;
			case '/':
				printf ("%.3f\n", num1 / num2);
				break;
		}
	} while (op != 'Q');

return 0;
}
