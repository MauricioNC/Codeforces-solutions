#include <stdio.h>
#include <string.h>

int main()
{
	int upper = 0, lower = 0, i;
	char s[100];
	
	scanf("%s", s);
	
	for(i = 0; i < strlen(s); i++)
		if(s[i] >= 65 && s[i] <= 90)
			upper++;
		else
			lower++;
			
	if(upper > lower)
	{
		for(i = 0; i < strlen(s); i++)
			if(s[i] >= 97 && s[i] <= 122)
				s[i] -= 32;
	}
	else if(lower > upper || lower == upper)
	{
		for(i = 0; i < strlen(s); i++)
			if(s[i] >= 65 && s[i] <= 90)
				s[i] += 32;
	}
	
	printf("%s", s);
	
	return 0;
}
