#include<stdio.h>

int sochan(int n)
{
	if(n%2==0)
	return 1;
	return 0;
}

int main()
{
	int i, n = 10;
	for(i=1; i<=n; i++)
	{
		if(sochan(i)==1) printf("%3d", i);
	}
}
