#include <stdio.h>
#include <string.h>

int IsPErfectYear (int year, int pos);
int GetDigitsYear (int *year, int arrayYear[4]);

int main()
{
  int year, pos = 0;

  scanf("%i", &year);

  if(year < 1000 || year > 9000)
  {
    printf("El anio debe estar dentro del limite: \'1000 <= year <= 9000 \'");
    return 0;
  }

	while(IsPErfectYear(year, pos) == 1)
    year++;

	printf("%i", year);
	
  return 0;
}

int IsPErfectYear (int year, int pos)
{
  int arrayYear[4] = {0}, yearMemo[4] = {0};
	int i, j = 0;
  
  GetDigitsYear(&year, arrayYear);
  
  for(i = 0; i < 4; i++)
  {
    while(yearMemo[j] == arrayYear[i] && i < 4 && j < 4)
    {
      yearMemo[j] = arrayYear[i];
      j++;
		}
	}
	
  return 1;
}

int GetDigitsYear (int *year, int arrayYear[4])
{
	int aux = 0, i;
	
	for(i = 4-1; i >= 0; i--)
  {
    aux = *year;
    arrayYear[i] = aux % 10;
    *year /= 10;
  }
  
  return *arrayYear;
}

