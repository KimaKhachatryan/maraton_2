#include <stdio.h> 

int main()
{
	float fahr = 0;
	float cels = 0;

	puts ("Enter the temperature in Celsius.");
	scanf ("%f", &cels);

	fahr = 9 * cels / 5 + 32;
	
	printf ("Fahrenheit = %.1f\n", fahr);

	return 0;
}
