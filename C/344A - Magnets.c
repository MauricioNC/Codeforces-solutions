#include <stdio.h>
#include <string.h>

int main()
{
	int number_of_magnets = 0, i;
	int linked_magnets = 1;
	
	scanf("%i", &number_of_magnets);
	
	char magnets[4];
	char memorized[4];
	
	if(number_of_magnets > 1)
	{
		for(i = 1; i <= number_of_magnets; i++)
		{
			scanf("%s", magnets);
			
			if(strlen(memorized) > 0 && strcmp(memorized, magnets) != 0)
				linked_magnets++;
			
			strcpy(memorized, magnets);
		}
	}
	else if(number_of_magnets == 1)
	{
		scanf("%s", magnets);
		linked_magnets++;
	}
	else
		linked_magnets = 0;
	
	printf("%i", linked_magnets);

	
	/********		Another solution		********/
	
//  int a, count = 1, i;
//  
//	scanf("%i", &a);
//  int arr[a];
//  
//  for(i = 0; i < a; i++)
//    scanf("%i", arr[i]);
//      
//  for(i = 0; i < a - 1; i++)
//    if(arr[i] != arr[i+1])
//      count++;
//  printf("%i", count);

	return 0;
}
