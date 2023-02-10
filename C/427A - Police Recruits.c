#include <stdio.h>

int main()
{

  int events, i, total_crimes = 0;

  scanf("%d", &events);

  int crimes[events];

  for (i = 0; i < events; i++)
    scanf("%d", &crimes[i]);

  for (i = 0; i < events; i++)
  {
    if (i > 0)
      if (crimes[i-1] < 0)
        total_crimes++;
      else
        total_crimes--;
  }
  
  printf("%d", total_crimes);

  return 0;
}