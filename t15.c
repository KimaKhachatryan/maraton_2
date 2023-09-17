#include <stdio.h>

int main ()
{
	int mark = 0;

	
	do {
		puts ("Enter your mark.");
		scanf ("%d", &mark);
	} while (mark < 0 || mark > 100);

	if (mark < 60) {
			puts ("E class.");
		} else if (mark >= 60 && mark <= 69) {
			puts ("D class..");
		} else if (mark >= 70 && mark <= 79){
			puts ("C class.");
		} else if (mark >= 80 && mark <= 89){
			puts ("B class.");
		} else {
			puts ("A class.");
		}

	return 0;
}
