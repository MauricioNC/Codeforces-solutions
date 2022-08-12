#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number_of_contests, i, j;

  scanf("%d", &number_of_contests);

  int performance[number_of_contests], *amazing_performance;

  amazing_performance = (int *)calloc(number_of_contests, sizeof(int));

  for( i = 0; i < number_of_contests; i++ )
    scanf("%d", &performance[i]);

  int min = performance[0], max = performance[0];

  for(i = 0; i < number_of_contests; i++)
  {
    for(j = i; j > 0; j--)
    {
      if(performance[j] > max)
      {
        max = performance[j];
        amazing_performance[j] = 1;
      }

      if(performance[j] < min)
      {
        min = performance[j];
        amazing_performance[j] = 1;
      }
    }
  }

  for(i = 0, j = 0; i < number_of_contests; i++)
    if(amazing_performance[i] == 1)
      j++;

  printf("%d", j);

  return 0;
}