#include <stdio.h>

int main ()
{
	int age = 0;

	
	do {
		puts ("Enter your age.");
		scanf ("%d", &age);
	} while (age < 0);

	if (age < 18) {
			puts ("You are minor");
		} else if (age >= 18 && age <= 65) {
			puts ("You are adult.");
		} else {
			puts ("You are old.");
		}

	return 0;
}
