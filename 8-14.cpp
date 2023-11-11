#include <stdio.h>

#define SQUARE(x) (x)*(x)
int main()
{
	int ret = SQUARE(5+1);
	printf("%d\n",ret);
	return 0;
	
 } 
