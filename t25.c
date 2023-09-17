

#include <stdio.h>

int main()
{
	int year = 0;

	puts ("Enter the year.");
	scanf ("%d", &year);

	if (year % 4 == 0) {
		puts("It's a leap year.");
		} else {
			puts("It's not a leap year.");
			}
return 0;
}
