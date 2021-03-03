#include<stdio.h>

int main()
{
	int a,b;
	printf("Nhap a,b = ");
	scanf("%d%d", &a, &b);
	for(a=1; a<=b; a++)
	{
		if(a%2==0) printf("%d ", a);
	}
}
 
