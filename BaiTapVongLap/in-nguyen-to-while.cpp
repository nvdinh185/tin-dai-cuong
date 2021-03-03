#include<stdio.h>

int main()
{
	int n, i, dem, j = 2;
	printf ("Nhap n = ");
	scanf ("%d", &n);
	while (j<n)
	{
		i = 2;
		dem = 0;
		while (i<j)
		{
			if (j%i==0) dem++; //dem = dem + 1
			i++;
	    }
	    if(dem==0) printf ("%d ", j);
	    j++;
	}
}
