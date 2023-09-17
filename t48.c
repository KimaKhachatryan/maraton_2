#include <stdio.h>

int main ()
{
	short const size = 101;
	char letter[size];
	int count = 0;

	for (short i = 0; i <= size; ++i) {
		letter[i] = '0';
	}

	puts ("Enter your string (100 symbols).");
	fgets (letter, size, stdin);

	for (short i = 0; letter[i] != '\0'; ++i) {
			++count;
	}
	printf ("%d\n", count - 1);

return 0;
}

