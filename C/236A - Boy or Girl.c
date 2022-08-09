#include <stdio.h>
#include <string.h>

int main()
{
	char username[100];
	int i, j, counter = 0;
	
	scanf("%s", username);
	
	for(i = 0; i < strlen(username); i++)
		for(j = 0; j < strlen(username); j++)
			if(username[i] == username[j] && i < j)
			{
				counter++;
				break;	
			}	
	
	if(((strlen(username) - counter)) % 2 == 0)
		printf("CHAT WITH HER!");
	else if(((strlen(username) - counter)) % 2 != 0)
		printf("IGNORE HIM!");
	
	return 0;
}
