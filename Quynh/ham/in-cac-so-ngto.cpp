#include<stdio.h>

int main() 
{
	int i, n,j, dem=0;
	printf("n= ");
	scanf("%d",&n);
	for(j=2;j<=n;j++)
	{
		dem=0;
		for(i=2;i<j;i++)
		{
			if(j%i==0)
			{
			  dem++;
			}
		
		}
	if(dem==0) printf("%3d",j);
	}

}

	
