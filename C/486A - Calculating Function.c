#include <stdio.h>

int main()
{
  unsigned long long int n;
  
  scanf("%lld", &n);
  
  if(n % 2 != 0)
    printf("%lld", -((n/2)+1));
  else
  	printf("%lld", n/2);
  
  return 0;
}