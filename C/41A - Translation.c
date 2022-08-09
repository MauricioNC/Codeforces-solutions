#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char word_s[100];
  char word_t[100];

  int size_word_s, size_word_t, i, j;

  scanf("%s", word_s);
  scanf("%s", word_t);

  size_word_s = strlen(word_s);
  size_word_t = strlen(word_t);

  for(i = 0, j = size_word_t-1; 
      i < size_word_s, j >= 0; 
      i++, j--)
  {
    if(word_s[i] != word_t[j])
    {
      printf("NO");
      return 0;
    }
  }

  printf("YES");

  return 0;
}