#include <stdio.h>

int main()
{
	int n = 0, solutions = 0, petya, vasya, tonya, i, counter = 0;

	scanf("%i", &n);
	
	for(i = 1; i <= n; i++)
	{
		counter = 0;
		scanf("%i %i %i", &petya, &vasya, &tonya);		
		counter += petya + vasya + tonya;
		if(counter >= 2)
			solutions++;
	}

	printf("%i", solutions);
	
	return 0;
}
