#include<stdio.h>

int khongphainguyento(int n)
{
	int j, dem=0;
	for(j=1;j<=n;j++)
	{
		if(n%j==0)
		dem++;
	}
	if(dem>=3) return 1;
	return 0;
}

int main()
{
	int i, n=20;
	for(i=2;i<=n;i++)
	{
		if(khongphainguyento(i)==1) printf("%3d", i);
	}
}
