#include <stdio.h>

int main ()
{
	int num = 0;
	int curent_num = 51;

	do {
		puts ("Enter any num (0 - 100)");
		scanf ("%d", &num);
	} while (num < 0 || num > 100);

	while (num != curent_num) {
		if (num > curent_num) {
			puts ("You are high! Try again.");
		} else {
			puts ("You are low! Try again.");
		}
		scanf ("%d", &num);
	} 
	 
	 if (num == curent_num) {
	 	puts ("You win!!!");
	 }
return 0;
}
