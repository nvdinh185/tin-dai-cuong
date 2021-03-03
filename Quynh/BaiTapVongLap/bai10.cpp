#include<stdio.h>

int main()
{
	int n, j, dem=0;
	printf ("Nhap n = ");
	scanf ("%d", &n);
	for (j=1; j<=n; j++)
	{
		if(n%j==0)
		if(j%2==0)
		dem++;
	}
	printf ("%3d",dem);
}

//Bai lam tot
