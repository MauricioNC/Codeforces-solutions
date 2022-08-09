#include <stdio.h>

int main()
{
	int a, b, years = 0, i;
	
	scanf("%i%i", &a, &b);
	
	for(i = 0; a <= b; i++)
	{
		a *= 3;
		b *= 2;
		years++;
	}
	
	printf("%i", years);
	
	
	return 0;
}
