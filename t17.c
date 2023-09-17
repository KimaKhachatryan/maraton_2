#include <stdio.h>

int main ()
{
	short A = 0;
	short B = 0;
	short res = 0;
	
		if (A && B ||  !B ^ A ) {
			res = 1;
			printf ("A = false, B = false -> A && B ||  !B ^ A = true.\n");
		} else {
			printf ("A = false, B = false -> A && B ||  !B ^ A = false.\n");
		}		
		A = 0;
		B = 1;
		res = 0;
		
		if (A && B ||  !B ^ A ) {
			res = 1;
			printf ("A = false, B = true -> A && B ||  !B ^ A = true.\n");
		} else {
			printf ("A = false, B = true -> A && B ||  !B ^ A = false.\n");
		}
		
		A = 1;
		B = 0;
		res = 0;
		
		if (A && B ||  !B ^ A ) {
			res = 1;
			printf ("A = true, B = false -> A && B ||  !B ^ A = true.\n");
		} else {
			printf ("A = true, B = false -> A && B ||  !B ^ A = false.\n");
		}
		
		A = 1;
		B = 1;
		res = 0;
		
		if (A && B ||  !B ^ A ) {
			res = 1;
			printf ("A = true, B = true -> A && B ||  !B ^ A = true.\n");
		} else {
			printf ("A = true, B = true -> A && B ||  !B ^ A = false.\n");
		}
		 
		
	return 0;
}
