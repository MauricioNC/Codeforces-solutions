#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, number_of_firend = 0;
	int i;
	
	// Read the number of friends invited to the party
	scanf("%i", &n);
	
	// Depending of the number of friends, a new array is created with the size of friends
	int *array_auxiliar = malloc(n * sizeof(int));
	
	// Evaluate if the spece in memory is allocated successfully
	if(*array_auxiliar)
	{
		// Loop from 1 untill n
		for(i = 1; i <= n; i++)
		{
			// Read for the number of friend (the id number)
			scanf("%i", &number_of_firend);
			
			// Store in the array_auxiliar, at the positin of nnumber_of_friend, the value of the position (i)
			/* Example:
					first round:
						number_of_friend = 2
						array_auxiliar[2] = 1
					second round:
						number_of_friends = 3
						array_auxiliar[3] = 2
					third round:
						number_of_friends = 4
						array_auxiliar[4] = 3
					fourth round:
						number_of_friends = 1
						array_auxiliar[1] = 4
			*/
			array_auxiliar[number_of_firend] = i;
		}
		
		for(i = 1; i <= n; i++)
			printf("%i ", array_auxiliar[i]);
			
			
		// Free the memory
		free(array_auxiliar);
		
		// Asigned NULL to the array_auxiliar
		array_auxiliar = NULL;
	}
	else
		return 0;
	
	
	return 0;
}
