#include <stdio.h>

int main()
{
  int num_of_tests, i;
  int tests;

  scanf("%d", &num_of_tests);


  for(i = 0; i < num_of_tests; i++)
  {
    scanf("%d", &tests);
    printf("%d\n", ((tests - 1) / 2));
  }
  
  return 0;
}