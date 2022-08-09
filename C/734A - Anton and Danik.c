#include <stdio.h>
#include <string.h>

int main()
{
  int gamesPlayed, i;
  int anton = 0, danik = 0;

  scanf("%i", &gamesPlayed);

  char winnerInitial[gamesPlayed];

  scanf("%s", winnerInitial);

  for(i = 0; i < strlen(winnerInitial); i++)
    if(winnerInitial[i] == 'A')
      anton++;
    else
      danik++;

  if(anton > danik)
    printf("Anton");
  else if(danik > anton)
    printf("Danik");
  else
    printf("Friendship");
  

  return 0;
}