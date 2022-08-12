#include <stdio.h>

int main()
{
  int rows, cols, i, j, flag = 0;

  scanf("%d %d", &rows, &cols);

  char pattern[rows][cols];
  
  for( i = 0; i < rows; i++ )
    for( j = 0; j < cols; j++ )
      pattern[i][j] = '.';

  for( i = 0; i < rows; i++ )
  {
    for( j = 0; j < cols; j++ )
    {
      if(i % 2 != 0)
      {
        if(flag == 0)
        {
          pattern[i][cols-1] = '#';
          flag = 1;
        }
        else if(flag = 1)
        {
          pattern[i][0] = '#';
          flag = 0;
        }
        break;
      }
      else
        pattern[i][j] = '#';
    }
  }

  for( i = 0; i < rows; i++ )
  {
    for( j = 0; j < cols; j++ )
      printf("%c", pattern[i][j]);
    printf("\n");
  }
  return 0;
}