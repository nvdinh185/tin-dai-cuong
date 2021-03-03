#include<stdio.h>

int main()
{
	int i=1,n;
	float sum=0;
	while(1.0/i>=0.01)
	{
		sum=sum+(1.0/i);
		i++;
	}
	printf("%f", sum);
}
