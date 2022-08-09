#include <stdio.h>

int main()
{
	int i, n, a, b, max = 0, aux = 0;
	
	scanf("%i", &n);
	
	for(i = 1; i <= n; i++)
	{
		scanf("%i%i", &a, &b);
		aux = b - a + aux;
		if(max < aux)
			max = aux;
	}
	
	printf("%i", max);
	
	
	return 0;
}
