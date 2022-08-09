#include <stdio.h>
#include <string.h>

int main()
{

  int i;
  char n1_1[102], n2_2[102];

  fgets(n1_1, 102, stdin);
  fgets(n2_2, 102, stdin);

  for(i = 0; i < strlen(n1_1)-1; i++)
    if(n1_1[i] != n2_2[i])
      printf("1");
    else
      printf("0");

  return 0;
}