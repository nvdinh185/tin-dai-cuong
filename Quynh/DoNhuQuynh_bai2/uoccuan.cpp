#include<stdio.h>

int main()
{
	int n,m=1;
	printf ("Nhap n=") ;
	scanf ("%d",&n);
	while (m<=n) 
	{
		if (n%m==0) 
		printf ("ket qua=%d\n",m); 
		++m;
    }
}
