#include <stdio.h>

int main ()
{
	short const size = 5;
	char arr[size];

	puts ("Please fill the array.");
	scanf ("%s", arr);

	for (short i = size - 1; i >= 0; --i) {
		printf ("%c", arr[i]);
	}
return 0;
}
