#include <stdio.h>

int main()
{

	int drinks, i;
	double orange_juice_percentage = 0.0;

	scanf("%d", &drinks);

	int arr[drinks];

	for(i = 0; i < drinks; i++)
	{
		scanf("%d", &arr[i]);
		orange_juice_percentage += arr[i];
	}

	printf("%.12lf", orange_juice_percentage/drinks);

	return 0;
}