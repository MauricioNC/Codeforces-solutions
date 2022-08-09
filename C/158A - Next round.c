#include <stdio.h>

int main()
{
	int n, k, i, counter = 0;
	
	scanf("%i %i", &n, &k);
	
	int score[n];
	
	for(i = 0; i < n; i++)
		scanf("%i", &score[i]);
	
	for(i = 0; i < n; i++)
		if(score[i] >= score[k-1] && score[i] > 0)
			counter++;
			
	printf("\n%i", counter);
	
	
	return 0;
}
