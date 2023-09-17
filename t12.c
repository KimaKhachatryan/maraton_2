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
	for (short i = 0; i < count / 2; ++i) {
		if (letter[i] != letter[count - 2 - i]) {
			puts ("String is not polindrome.");
			return 0;
		}
	}
		puts ("String is polindrom.");

return 0;
}

