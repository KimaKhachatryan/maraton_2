#include <stdio.h>

int main()
{
	char letter = 0;

	do {
		puts ("Enter any Latin letter.");
		scanf (" %c", &letter);
	} while (letter < 'A' || letter > 'Z' && letter < 'a' || letter > 'z' );

switch (letter){
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
		case 'W':
		case 'w':
		case 'Y':
		case 'y':
			puts ("It's a vowel.");
			break;

		default:
			puts ("It's a consonant.");
	}

return 0;
}

