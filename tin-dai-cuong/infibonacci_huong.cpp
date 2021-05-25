#include <stdio.h>

int main(){
	int n;
	int a=0;
	int b=1;
	int s=1;
	do{	
		printf("nhap n:");
		scanf("%d",&n);
    }while (n<=0);
 
	while (s<=n)
	{
		printf ("%5d", s);
		s=a+b;
		a=b;
		b=s;
	}
	
}
