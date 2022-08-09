#include <stdio.h>

int main()
{
	int i, j, t, length = 0;
	
	scanf("%i %i", &length, &t);
	
	char s[length];
	
	scanf("%s", s);
	
	for(i = 1; i <= t; i++)
	{
		for(j = 0; j < length; j++)
		{
			if(s[j] == 'B' && s[j+1] == 'G')
			{
				s[j] = 'G';
				s[j+1] = 'B';
				j++;
			}
		}
	}
	
	printf("\n\n%s", s);
	
	
	return 0;
}
