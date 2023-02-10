#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char alphabet[26][2];
  int i, j, len, alphabet_pos[26] = {0}; 
  char *word;

  char lower = 'a';
  char upper = 'A';

  for(i = 0; i < 26; i++)
  {
    alphabet[i][0] = lower;
    lower += 1;
    
    alphabet[i][1] = upper;
    upper += 1;
  }

  scanf("%d", &len);

  word = (char*)malloc(len * sizeof(char));

  scanf(" %s", word);

  if(strlen(word) >= 26)
  {
    for(i = 0; i < strlen(word); i++)
    {
      for(j = 0; j < 26; j++)
      {
        if(word[i] == alphabet[j][0] || word[i] == alphabet[j][1])
        {
          alphabet_pos[j] = 1;
          break;
        }
      }
    }
  }
  else
  {
    printf("NO");
    return 0;
  }

  for(i = 0; i < 26; i++)
    if(alphabet_pos[i] == 0)
    {
      printf("NO");
      return 0;
    }

  printf("YES");
  return 0;
}