#include<stdio.h>

int main()
{
	int i, j, dem;
	for(i=2;i<=500;i++)
	{
		dem=0;
		for(j=2;j<i;j++)
		{
			if (i%j==0)
			dem++;
		}
   	if(dem==0)	printf ("%5d",i);
	}
	
}

//Bai lam tot
