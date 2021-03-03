#include<stdio.h>

void inchan(int a, int b){
	int i;
	for(i=a; i<=b; i++)
	{
		if(i%2==0) printf("%d\n", i);
	}
}

main()
{
	int a = 2, b = 18;
	inchan(a, b);
}
