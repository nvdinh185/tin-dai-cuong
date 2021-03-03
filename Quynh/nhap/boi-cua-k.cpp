#include<stdio.h>

int main()
{
	int k, m, n;
	printf ("Nhap k = ");
	scanf ("%d", &k);
	printf ("Nhap m = ");
	scanf ("%d", &m);
	printf ("Nhap n = ");
	scanf ("%d", &n);
	while (m<=n)
	{
		if (m%k==0) printf ("xuat dap an=%d\n", m);
		++m;
	}	
}
