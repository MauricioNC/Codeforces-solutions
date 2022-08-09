#include <stdio.h>

int main()
{
	int n, difficulty, i;
	
	scanf("%i", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%i", &difficulty);
		
		if(difficulty == 1)
		{
			printf("HARD");	
			return 0;
		}
	}
	
	printf("EASY");
	
	return 0;
}
