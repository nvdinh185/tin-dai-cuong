#include<stdio.h>

int sofibonacci(int n)
{
	int i, t1=1, t2=1, tong;
	while(t1+t2<=n)
	{
		tong=t1+t2;
		t1=t2;
		t2=tong;
	}
	if(tong==n)
	return true;
	return false;
}

int main()
{
	int n=2;
	if(sofibonacci(n)== true) printf("n la so fibonacci");
	else printf("n khong phai so fibonacci");
}
