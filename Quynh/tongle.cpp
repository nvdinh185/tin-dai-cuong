#include<stdio.h>

int main()
{
	int n,m,sum=0;
	printf ("Nhap n=");
	scanf ("%d",&n);
	for (m=1;m<=n;m++)
	if(m%2==1) sum+=m;
	printf("%d",sum);
	
}
