#include <stdio.h>
#include <stdlib.h>

int main()
{
  int games;
  int i, j, output = 0;

  scanf("%d", &games);

  int arr_home[games];
  int arr_guest[games];

  for(i = 1, j = 1; i <= games; i++)
    scanf("%d %d", &arr_home[i], &arr_guest[i]);

  for(i = 1; i <= games; i++)
  {
    for(j = 1; j <= games; j++)
    {
      if(arr_home[i] == arr_guest[j])
        output++;
    }
  }
  printf("\n%d", output);

  return 0;
}