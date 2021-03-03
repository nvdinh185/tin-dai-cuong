#include<stdio.h>

int demuoc(int n)
{
	int i, dem = 0;
	for(i=1; i<=n; i++)
	{
		if(n%i==0) dem++;	
	}
	return dem;
}

int main()
{
	int i, n;
	printf ("Nhap n = ");
	scanf ("%d", &n);
	for(i=1; i<=n; i++)
	{
		if(demuoc(i)>2) printf("%d\n", i);
	}
}
