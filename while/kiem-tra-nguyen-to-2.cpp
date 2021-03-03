#include<stdio.h>

int main()
{
	int n, i = 2, nt = 1;
	printf ("Nhap n = ");
	scanf ("%d", &n);
	while (i<n)
	{
		if (n%i==0) nt = 0;
		i++;
    }
    if(nt==1) printf ("%d la so nguyen to\n", n);
    else printf ("%d khong la so nguyen to\n", n);
}
