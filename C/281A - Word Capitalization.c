#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
	char str1[1000];
	int i, size = 0;
	
	scanf("%s", str1);
	
	if(strlen(str1) <= pow(10, 3))
	{
		for(i = 0; i < 1; i++)
			if(str1[i] >= 97 && str1[i] <= 122)
				str1[i] -= 32;	
					
		printf("%s", str1);
	}
	else{}

	return 0;
}

