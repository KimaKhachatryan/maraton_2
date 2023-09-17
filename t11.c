#include <stdio.h>

int main ()
{
short const size = 101;
char letter[size];
int vowel_count = 0;
int consonant_count = 0;

for (short i = 0; i <= size; ++i) {
	letter[i] = '0';
}

puts ("Enter your text (100 symbols).");
fgets (letter, size, stdin);

for (short i = 0; i < size; ++i) {
	switch (letter[i])
		{
		case 'a':
		++vowel_count;
		break;
		case 'e':
		++vowel_count;
		break;
		case 'i':
		++vowel_count;
		break;
		case 'o':
		++vowel_count;
		break;
		case 'u':
		++vowel_count;
		break;
		case 'w':
		++vowel_count;
		break;
		case 'y':
		++vowel_count;
		break;
		case 'A':
		++vowel_count;
		break;
		case 'E':
		++vowel_count;
		break;
		case 'I':
		++vowel_count;
		break;
		case 'O':
		++vowel_count;
		break;
		case 'U':
		++vowel_count;
		break;
		case 'W':
		++vowel_count;
		break;
		case 'Y':
		++vowel_count;
		break;
		
		case 'q':
		++consonant_count;	
		break;
		case 'Q':
		++consonant_count;	
		break;
		case 'r':
		++consonant_count;	
		break;
		case 'R':
		++consonant_count;	
		break;
		case 't':
		++consonant_count;	
		break;
		case 'T':
		++consonant_count;	
		break;
		case 'p':
		++consonant_count;	
		break;
		case 'P':
		++consonant_count;	
		break;
		case 's':
		++consonant_count;	
		break;
		case 'S':
		++consonant_count;	
		break;
		case 'd':
		++consonant_count;	
		break;
		case 'D':
		++consonant_count;	
		break;
		case 'f':
		++consonant_count;	
		break;
		case 'F':
		++consonant_count;	
		break;
		case 'g':
		++consonant_count;	
		break;
		case 'G':
		++consonant_count;	
		break;
		case 'h':
		++consonant_count;	
		break;
		case 'H':
		++consonant_count;	
		break;
		case 'j':
		++consonant_count;	
		break;
		case 'J':
		++consonant_count;	
		break;
		case 'k':
		++consonant_count;	
		break;
		case 'K':
		++consonant_count;	
		break;
		case 'l':
		++consonant_count;	
		break;
		case 'L':
		++consonant_count;	
		break;
		case 'z':
		++consonant_count;	
		break;
		case 'Z':
		++consonant_count;	
		break;
		case 'x':
		++consonant_count;	
		break;
		case 'X':
		++consonant_count;	
		break;
		case 'c':
		++consonant_count;	
		break;
		case 'C':
		++consonant_count;	
		break;	
		case 'v':
		++consonant_count;	
		break;
		case 'V':
		++consonant_count;
		break;
		case 'b':
		++consonant_count;
		break;
		case 'B':
		++consonant_count;
		break;
		case 'n':
		++consonant_count;	
		break;
		case 'N':
		++consonant_count;
		break;
		case 'm':
		++consonant_count;
		break;
		case 'M':
		++consonant_count;	
		break;

		default:
		break;
	}
}

printf ("There are %d vowel, and %d consonants", vowel_count, consonant_count);

return 0;
}


