#include <stdio.h>

int main()
{
	int  x, steps = 0, i, j;
	
	scanf("%i", &x);
	
	if(x % 5 == 0)
		printf("%i", (x / 5));
	else
		printf("%i", (x / 5)+1);
	
	return 0;
}
