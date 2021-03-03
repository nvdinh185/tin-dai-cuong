#include<stdio.h>

void giaithua(int n)
{
	int i, giaithua;
	for(i=1;i<=n;i++)
	{
		giaithua=giaithua*i;
	}
	printf("%d",giaithua);
}

int main()
{
	int n=5;
	giaithua(n);
}
