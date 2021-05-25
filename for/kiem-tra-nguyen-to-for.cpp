#include<stdio.h>

int main()
{
	int n, i, dem = 0;
	printf ("Nhap n = ");
	scanf ("%d", &n);
	for (i=1; i<=n; i++)
	{
		if (n%i==0) dem++; //dem = dem + 1
    }
    if(dem==0) printf ("%d la so nguyen to\n", n);
    else printf ("%d khong la so nguyen to\n", n);
}
