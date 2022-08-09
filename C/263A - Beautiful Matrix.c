#include <stdio.h>

int main()
{
	int i, j, m[5][5], row, col, movements;
	
	
	for(i = 0; i < 5; i++)
		for(j = 0; j < 5; j++)
			scanf("%i", &m[i][j]);		
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(m[i][j] == 1)
			{
				row = 2 - i;
				col = 2 - j;
				break;
				break;
			}
		}
	}
	
	if(col < 0)
		col *= -1;
	if(row < 0)
		row *= -1;
	
	
	printf("%i", (movements = row+col));
		
	
	return 0;
}
