#include <stdio.h>

int main()
{
	int n, i, x = 0;
	
	scanf("%i", &n);
	char statement[5] = "";
	
	for(i = 0; i < n; i++)
	{
		scanf("%s", statement);
		
		if(statement[1] == '+')
			x++;
		else
			x--;
	}

	printf("%i", x);
	
	return 0;
}
