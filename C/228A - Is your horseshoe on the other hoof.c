#include <stdio.h>

int main()
{
  int n1, n2, n3, n4;
  int i, j, minimum = 0, horseshoe[4] = {0}, aux;

  scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
  
  horseshoe[0] = n1;
  horseshoe[1] = n2;
  horseshoe[2] = n3;
  horseshoe[3] = n4;

  for(i = 0; i < 4; i++)
  {
    aux = horseshoe[i];
    for(j = i+1; j < 4; j++)
    {
      if(aux == horseshoe[j] && i != j)
      {
        minimum++;
        break;
      }
    }
  }

  printf("%d", minimum);

  return 0;
}