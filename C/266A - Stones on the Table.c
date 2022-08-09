#include <stdio.h>


int main()
{
	int i, n, count = 0;
	
	scanf("%i", &n);
	
	char str[n];
	
	scanf("%s", str);
	
	for(i = 0; i < n-1; i++)
	{
		if(str[i] == str[i+1])
			count++;
	}
	
	printf("%i", count);
	
	return 0;
}
