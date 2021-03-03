#include<stdio.h>

int main() 
{
	int n, i, t1=1, t2=1, tong;
	printf("Nhap n = ");
	scanf("%d",&n);
	while(t1+t2<=n)
	{
		tong=t1+t2;
		t1=t2;
		t2=tong;
	}
	if(tong==n) printf("n la so fibonacci");
	else printf("n khong phai so fibonacci");
}
