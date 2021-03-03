#include<stdio.h>

void sochan(int a, int b)
{
	for(int i=a; i<=b; i++)
	{
		if(i%2==0) 
		printf("%3d", i);
	}	
}

int main()
{
	int a=1, b=10;
	sochan(a, b);
}

 
 
