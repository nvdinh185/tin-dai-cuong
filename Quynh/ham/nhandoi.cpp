#include<stdio.h>

int main()	
{
	int a, b;
	printf("nhap a,b =");
	scanf("%d%d",&a,&b);
	if(a%2==0) printf("a = %d", 2*a);
	else printf("a=%d\n",a);
    if(b%2==0) printf("b = %d", 2*b);
    else printf("b=%d",b);
}
	
