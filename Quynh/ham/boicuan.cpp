#include<stdio.h>

int main()
{
	int i,n;
	printf("Nhap n= ");
	scanf("%d",&n);
	for(i=1;i<=50;i++)
	{
		if(i%n==0)
		printf("%d\n",i);
	}

}
