#include <stdio.h>
#include <stdlib.h>

int main()
{
  int total_levels, p, q, *x_guy, *y_guy, i, j;
  int *levels_passed;

  scanf("%d", &total_levels);

  x_guy = (int*)calloc(total_levels, sizeof(int));
  y_guy = (int*)calloc(total_levels, sizeof(int));
  levels_passed = (int*)calloc((total_levels+1), sizeof(int));

  scanf("%d", &p);

  for(i = 0; i < p; i++)
  {
    scanf("%d", &x_guy[i]);
    levels_passed[x_guy[i]] = 1;
  }

  scanf("%d", &q);

  for(i = 0; i < q; i++)
  {
    scanf("%d", &y_guy[i]);
    levels_passed[y_guy[i]] = 1;
  }

  for(i = 1; i < total_levels+1; i++)
    if(levels_passed[i] == 0)
    {
      printf("Oh, my keyboard!");
      return 0;
    }

  printf("I become the guy.");
  
  return 0;
}