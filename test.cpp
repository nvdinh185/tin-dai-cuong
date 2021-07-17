#include <stdio.h>
#include <math.h>

int main()
{
	int x = 16;
	
	printf("%d\n", (int)sqrt(x)* (int)sqrt(x));
	
	//printf("%d", sqrt(x)* sqrt(x));
	
	if( ((int)sqrt(x) * (int)sqrt(x))== x ) printf("yes");
}
