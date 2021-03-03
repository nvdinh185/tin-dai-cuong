#include<stdio.h>

int main()
{
	int a, b, c, max, min, sotrunggian;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	printf("Nhap c = ");
	scanf("%d", &c);
	max = a; min = a;
	if(b>max) max = b;
	if(c>max) max = c;
	if(b<min) min = b;
	if(c<min) min = c;
	sotrunggian = a + b + c - max - min;
	printf("So trung gian la: %d", sotrunggian);
}
