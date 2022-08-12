#include <stdio.h>
#include <stdlib.h>

int main()
{
  int money,bills = 0, i;
  int denom[] = {100, 20, 10, 5, 1};

  scanf("%d", &money);

  for(i = 0; i < 5; i++)
  {
    bills += money / denom[i];
    money = money % denom[i];
  }

  printf("%d", bills);
  return 0;
}
