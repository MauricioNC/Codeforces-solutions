#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, k = 0, l = 0, n = 0, *numbers, t;

  scanf("%d", &n);

  numbers = (int *)calloc(n, sizeof(int));

  for(i = 0; i < n; i++)
    scanf("%d", &numbers[i]);

  int min = numbers[0], max = numbers[0];

  for(i = 1; i < n; i++)
  {
    if (numbers[i] > max)
		{
			max = numbers[i];
			k = i;
		}
		if (numbers[i] <= min)
		{
			min = numbers[i];
			l = i;
		}
  }

  if (k < l)
    t = k + n - 1 - l;
	else
    t = k + n - 1 - l - 1;

  printf("%d", t);

  return 0;
}