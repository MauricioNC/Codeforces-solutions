#include <stdio.h>

int main()
{
	int k, n, w, i, borrow = 0;
	
	scanf("%i%i%i", &k, &n, &w);
	
	for(i = 1; i <= w; i++)
	{
		if(i * k < n)
			n -= (i * k);
		else
		{
			borrow = (i * k) - n;
			n -= (i * k);
		}
	}

	printf("%i", borrow);
		
	return 0;
}
