#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort_str(char *str, int len);
void clear_str(char *str, int len, char *str_aux);

int main()
{
  char str[1000];
  char str_aux[1000];
  int len, i, j, distinct_num = 0, pos = 0;

  fgets(str, 1000, stdin);

  len = strlen(str);

  clear_str(str, len, str_aux);

  len = strlen(str_aux);

  sort_str(str_aux, len);

  for(i=0; i < len; i++)
  {
    if(str_aux[i] > 96 && str_aux[i] < 123)
    {
      distinct_num++;
      if(str_aux[i] == str_aux[i+1])
        distinct_num--;
    }
  }
  printf("%d", distinct_num);

  return 0;
}

void clear_str(char *str, int len, char *str_aux)
{
  int i, j;

  for(i = 0, j = 0; i < len-1; i++)
  {
    if(str[i] != '{' && str[i] != ',' && str[i] != ' ' && str[i] != '}')
    {
      str_aux[j] = str[i];
      j++;
    }
  }
}

void sort_str(char *str, int len)
{
  int i, j;
  char actual;

  for (i = 1; i < len; i++) {
    actual = str[i];
    for (j = i; j > 0 && str[j - 1] > actual; j--) {
      str[j] = str[j - 1];
    }
    str[j] = actual;
  }
}