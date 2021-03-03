#include<stdio.h>

int main()
{
	int n, a, b, c, sotrunggian;//bien n de lam gi?
	printf ("Nhap a,b,c = ");
	scanf("%d%d%d",&a,&b,&c);
	int max=a;
	if (max<b) max=b;
	if (max<c) max=c;
	int min=a;
	if (min>b) min=b;
	if (min>c) min=c;
	sotrunggian=a+b+c-max-min;
	printf("%d",sotrunggian);
}

//Tuong doi tot, bien n khong dung nen khong can khai bao
