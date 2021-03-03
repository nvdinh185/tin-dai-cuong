#include<stdio.h>

int nguyento(int n)
{
	int i,j, dem=0;
	for(j=2; j<n; j++)
	{
		if(n%j==0) dem++;
	}
	if(dem==0) return 1;
	else return 0;
}

int main()
{
	int i, n=10;
	for(i=2; i<=n; i++)
	{
		if(nguyento(i)==1) printf("%3d", i);
	}
}
