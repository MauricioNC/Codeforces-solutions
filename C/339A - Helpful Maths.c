#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int i, j, aux;
	
	scanf("%s", str);
	if(strlen(str) > 2)
	{
		for(i = 0; i < strlen(str)-2; i++)
		{
			for(j = 0; j < strlen(str)-2; j++)
				if(str[j] > str[j+2])
				{
					aux = str[j];
					str[j] = str[j+2];
					str[j+2] = aux;
				}
		}
	}
	printf("%s", str);
	
	return 0;
}
