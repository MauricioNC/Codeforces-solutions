#include <stdio.h>
#include <stdlib.h>

int main()
{
  int k, l, m, n, d, i, *output, counter = 0;

  scanf("%d", &k);
  scanf("%d", &l);
  scanf("%d", &m);
  scanf("%d", &n);
  scanf("%d", &d);

  output = (int *)calloc((d+1), sizeof(int));

  if(k == 1 || l == 1 || m == 1 || n == 1)
  {
    printf("%d", d);
    return 0;
  }

  if(d < k && d < l && d < m && d < n)
  {
    printf("0");
    return 0;
  }

  for(i = 1; i <= d; i++)
  {
    i % k == 0 ? output[i] = 1 : i;
    i % l == 0 ? output[i] = 1 : i;
    i % m == 0 ? output[i] = 1 : i;
    i % n == 0 ? output[i] = 1 : i;
  }

  for(i = 1; i <= d; i++)
    if(output[i] == 0)
      counter++;

  printf("%d\n", d-counter);

  return 0;

}