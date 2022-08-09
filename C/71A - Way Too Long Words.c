#include <stdio.h>
#include <string.h>

int main()
{
	
	
	internationalization
	
	
	
	
	int n, i, length = 0;
	char str[100];
	
	scanf("%i", &n);
	
	for(i = 1; i <= n; i++)
	{
		scanf("%s", str);
		length = strlen(str);
		if(length > 10)
			printf("%c%i%c", str[0], length-2, str[length-1]);
		else
			printf("%s", str);
		
		printf("\n");
	}
	
	return 0;
}
