#include <stdio.h>
#include <string.h>

int main()
{
  int number_of_figures, i, faces = 0;
  char input[20];

  scanf("%d", &number_of_figures);

  for(i = 0; i < number_of_figures; i++)
  {
    
    scanf(" %s", input);

    if(strncmp(input, "Tetrahedron", 4) == 0)
      faces += 4;
    else if(strncmp(input, "Cube", 4) == 0)
      faces += 6;
    else if(strncmp(input, "Octahedron", 4) == 0)
      faces += 8;
    else if(strncmp(input, "Dodecahedron", 4) == 0)
      faces += 12;
    else if(strncmp(input, "Icosahedron", 4) == 0)
      faces += 20;
  }

  printf("%d", faces);

  return 0;
}