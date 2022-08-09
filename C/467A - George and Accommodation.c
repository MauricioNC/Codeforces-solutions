#include <stdio.h>

int main()
{
	/*
		n = rooms available in the dormitory
		p = people living in a single room
		q = total of people that can be accomodated
	*/
	
	int n, p, q;
	int i, rooms_availables = 0;
		
	scanf("%i", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%i %i", &p, &q);
		
		if(p < q && (q - p) >= 2)
			rooms_availables++;
	}
	
	printf("%i", rooms_availables);
	return 0;
}
