#include<stdio.h>

void demsokhong(int n)
{
	int  donvi, dem=0;
	while(n>0)
	{
		donvi=n%10;
		if(donvi==0)dem++;
		n=n/10;
	}
	printf ("%d",dem);
}

int main()
{
	int n=300030;
	demsokhong(n);
}
