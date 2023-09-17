#include <stdio.h>

int main ()
{
	short const size = 101;
	char arr[size];

	for (short i = 0; i <= size; ++i) {
		arr[i] = '0';
	}

	puts ("Enter your string (100 symbols).");
	scanf ("%s", arr);
	
	for (int i = 0; arr[i] != '\0'; ++i) {
		if (arr[i] >= '0' && arr[i] <= '9') {
			printf ("%c", arr[i]);
		}
	}
 	
	printf ("\n");
return 0;
}
