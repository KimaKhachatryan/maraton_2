#include <stdio.h>

int main ()
{
	short const size = 100;
	char arr[size];
	short count = 0;

	
	for (short i = 0; i <= size; ++i) {
		arr[i] = '0';
	}

	puts ("Please enter your string.");
	fgets (arr, size, stdin);
	
	for (short i = 0; arr[i] != '\0'; ++i) {
		++count;
	}
	short index = 0;

	do {
		index = 0;
		for (short i = 0; arr[i] != ' ' || '\0'; ++i) {
			++index;
		}
			if (arr[index] = '\0') {
				printf ("%s", arr);
				return 0;
			}
		for (short i = index + 1, j = count - 1; i < j; ++i, --j) {
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
		for (short i = index, j = count - 1; i < j; ++i, --j) {
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
		--count;
		arr[count] = '\0';
	} while (index < count);
	printf ("%s\n", arr);

return 0;
}

