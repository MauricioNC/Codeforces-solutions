#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number_of_friends = 0;
	int height_of_fence = 0;
	int height_of_friends[1000] = {0};
	int i, min_width = 0;
	
	scanf("%i", &number_of_friends);
	scanf("%i", &height_of_fence);
	
	for(i = 0; i < number_of_friends; i++)
		scanf("%i", &height_of_friends[i]);
	
	for(i = 0; i < number_of_friends; i++)
	{
		if(height_of_friends[i] > height_of_fence)
			min_width += 2;
		else
			min_width += 1;
	}
	
	printf("%i", min_width);
	
	return 0;
}
