#include<stdio.h>

int main()
{
	int n;
	printf ("Nhap n = ");
	scanf ("%d", &n);
	for (int i=2; i<=n; i++){
		int dem = 0;
		for (int j=2; j<i; j++){
			if (i%j==0) dem++; //dem = dem + 1
		}
	    if(dem==0) printf ("%5d", i);
	}
}
