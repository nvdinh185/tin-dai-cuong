#include<stdio.h>

int max2so(int a, int b)
{
	if(a>b)
	{
		return a;
	} else {
		return b;
	}	
}

int max3so(int d, int e, int f)
{	
	int max = d;
	if(max<e) max=e;
	if(max<f) max=f;
	return max;
}

int main()
{
	int a=5, b=3, c=8, d=7, e=8, f=9;
	printf("%d\n", max2so(a, b));
	printf("%d", max3so(d, e, f));
}
