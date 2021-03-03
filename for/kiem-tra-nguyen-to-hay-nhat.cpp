#include<stdio.h>

int main()
{
	int n, i, nguyento = 1;
	printf ("Nhap n = ");
	scanf ("%d", &n);
	for (i=2; i<n; i++)
	{
		if (n%i==0)
		{
			nguyento = 0;
			break;
		}
    }
    if(nguyento) printf ("%d la so nguyen to\n", n);
    else printf ("%d khong la so nguyen to\n", n);
}
