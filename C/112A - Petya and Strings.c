#include <stdio.h>
#include <string.h>

int main()
{
	char str1[100], str2[100];
	int i, size = 0, out = 0;
	
	scanf("%s", str1);
	scanf("%s", str2);
	
	size = strlen(str1);
	
	
	for(i = 0; i < size; i++)
	{
		if(str1[i] >= 65 && str1[i] <= 90)
			str1[i] += 32;
		if(str2[i] >= 65 && str2[i] <= 90)
			str2[i] += 32;	
	}

	
	for(i = 0; i < size; i++)
	{
		if(str1 == str2)
			out = 0;
		if(str1[i] < str2[i])
		{
			out = -1;
			break;
		}
		if(str1[i] > str2[i])
		{
			out = 1;
			break;
		}
	}
	
	printf("%i", out);
	
	return 0;
}
