#include<stdio.h>

int main()
{
	int n, donvi, dem=0;
	printf ("Nhap n = ");
	scanf ("%d",&n);
	while(n>0)
	{
		donvi=n%10;
		if(donvi==0)dem++;
		n=n/10;
	}
	printf ("%d",dem);
}
