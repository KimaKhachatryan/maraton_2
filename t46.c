#include <stdio.h>
 
int main ()
{
    int new_num = 0;
	unsigned short c_0 = 0;
	unsigned short c_1 = 0;

	puts ("Enter any number.");
	scanf ("%d", &new_num);

	int old_num = new_num;

	for (int i = 0; i < sizeof(int) * 8; ++i) {
		new_num = old_num | 1;
		if (old_num == new_num) { 
			++c_1;
		} else {
			++c_0;
		}
		new_num = new_num >> 1;
		old_num = new_num;
	}

	printf ("Count of 0's = %hd, count of 1's = %hd\n", c_0, c_1);
return 0;
}
