#include<stdio.h>

void nhandoi(int &a, int &b)
{
	if(a%2==0) a=a*2;
    if(b%2==0) b=b*2;
   
}

int main()
{
	int a,b;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	nhandoi(a,b);
	printf("a = %d\n", a);
	printf("b = %d", b);
	
}
