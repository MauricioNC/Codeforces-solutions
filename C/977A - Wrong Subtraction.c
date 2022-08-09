#include <stdio.h>

int main()
{
	int n, k, i;
	
	scanf("%i%i", &n, &k);
	
	for(i = 0; i < k; i++)
		if(n % 10 != 0)
			n--;
		else
			n /= 10;

	printf("%i", n);
	
	return 0;
}
