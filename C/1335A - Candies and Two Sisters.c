#include <stdio.h>

int main()
{
  int num_of_tests, i, j, sis1 = 0, sis2 = 0;
  int tests;

  scanf("%d", &num_of_tests);


  for(i = 0; i < num_of_tests; i++)
  {
    scanf("%d", &tests);
    printf("%d\n", ((tests - 1) / 2));
  }
  
  return 0;
}