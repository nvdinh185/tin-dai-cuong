#include<stdio.h>

int max2so(int a, int b){
	if(a>b) return a;
	else return b;
}

int main()
{
	int a = 12, b = 15, c = 14, max;
	max = max2so(a, b);
	max = max2so(max, c);
	printf("%d", max);
}
