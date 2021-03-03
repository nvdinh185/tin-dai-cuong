#include<stdio.h>
#include<math.h>

int main()
{
	int x, i;
	float tong=1;
	printf("Nhap x = ");
	scanf("%d", &x);
	for(i=1;i<=x;i++)
	{
		tong=tong+(pow(x,i)/i);
	}
	printf("%.2f", tong);
}
