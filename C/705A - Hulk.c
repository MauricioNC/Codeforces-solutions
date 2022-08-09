#include <stdio.h>
#include <string.h>

int main()
{
  int n, i, j;

  scanf("%d", &n);

  for(i = 1, j = 1; i <= n; i++, j++)
  {
    if(i % 2 != 0 && i != n)
      printf("I hate that ");
    else if(i % 2 == 0 && i != n) 
      printf("I love that ");

    if(i == n)
      if(i % 2 == 0)
        printf("I love it");
      else
        printf("I hate it");
  }

  return 0;
}