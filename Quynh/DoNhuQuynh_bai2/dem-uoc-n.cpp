#include<stdio.h>

int main()
{
	int n, m=1, dem=0;
	printf ("Nhap n=") ;
	scanf ("%d",&n);
	while (m<=n) 
	{
		if (n%m==0)
		++dem; //dem = dem + 1
		++m;
    }
    printf ("ket qua=%d\n",dem);
}
