#include <stdio.h>

int main ()
{
	float hight = 0;

	
	do {
		puts ("Enter your hight.");
		scanf ("%f", &hight);
	} while (hight < 0);

	if (hight < 150) {
			puts ("You are not aligible.");
		} else {
			puts ("You are aligible.");
		}

	return 0;
}
