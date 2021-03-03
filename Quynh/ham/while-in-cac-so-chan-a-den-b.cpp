#include<stdio.h>

int main()
{
	int a = 1, b;
	printf("Nhap a,b = ");
	scanf("%d%d", &a, &b);
	while(a<=b)
	{
		if(a%2==0)
		{
			printf("%d ", a);
		}
		a++;
	}
}
 
