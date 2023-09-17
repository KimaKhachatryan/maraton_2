#include <stdio.h>

int main()
{
	char ch1 = 0;
	char ch2 = 0;

	puts ("Enter 2 characters.");
	scanf (" %c %c", &ch1, &ch2);
	

	if ((ch1 >= 'a' && ch1 <= 'z' || ch1 >= 'A' && ch1 <= 'Z') && (ch2 >= 'A' && ch2 <= 'Z' || ch2 >= 'a' && ch2 <= 'z')) {
		if ((ch1 - ch2 == 32) || (ch2 - ch1 == 32)) {
			puts("Characters are uppercase and lowercase of the same letter.");
		} else if (ch1 == ch2) {
				puts("It's the same letter.");
			} else {
					puts("Characters are not the same letter.");
				}
	} else {
		puts("Characters (or at least one of them) are not letters.");
	}
return 0;
}

