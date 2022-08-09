#include <stdio.h>
#include <math.h>


int main()
{
	long long  number;
	int luckyNumbers = 0;
	
	scanf("%I64lld", &number);
	
	do
	{

		if(number % 10 == 4 || number % 10 == 7)
			luckyNumbers++;

		number /= 10;

	}
	while(number != 0);

	if(luckyNumbers == 4 || luckyNumbers == 7)
		printf("YES");
	else
		printf("NO");

	return 0;
}
