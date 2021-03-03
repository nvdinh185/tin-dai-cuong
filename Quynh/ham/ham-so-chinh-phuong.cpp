#include<stdio.h>//good

int sochinhphuong (int n)
{
	int i;
	for(i=1; i<=n; i++)
	if(i*i==n)
	return 1;
	return 0;
}

int main()
{
	int n = 81;
	if(sochinhphuong(n)==1) printf("%d la so chinh phuong", n);
	else printf("%d khong phai so chinh phuong", n);
}
