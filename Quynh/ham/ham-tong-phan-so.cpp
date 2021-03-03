#include<stdio.h>
#include<math.h>

float tongphanso( int x)
{
	int  i;
	float tong=1;
	for(i=1;i<=x;i++)
	{
		tong=tong+(pow(x,i)/i);
	}
	printf("%.2f", tong);
}

int main()
{
	int x=3;
	tongphanso(x);
}
