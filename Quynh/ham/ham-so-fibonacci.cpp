/*
thuat toan
buoc 1: tao vong lap t1+t2<n
buoc 2: giai thuat toan nhu bai fibonacci
buoc 3: neu tong=n thì là so fibonacci nguoc lai tong khac n thì khong phai fibonacci

*/
#include<stdio.h>

int sofibonacci(int n)
{
	int i, t1 = 1, t2 = 1, tong;
	while(t1+t2<=n)
	{
		tong = t1 + t2;
		t1 = t2;
		t2 = tong;
	}
	if(tong==n)
	return 1;
	return 0;
}

int main()
{
	int n = 2;
	if(sofibonacci(n)==1) printf("%d la so fibonacci", n);
	else printf("%d khong phai so fibonacci", n);
}
