#include<stdio.h>//good

int sohoanhao(int n)
{
	int i, sum = 0;
	for(i=1; i<n; i++)
	{
		if(n%i==0)
		sum += i;
	}
	if(sum==i)
	return 1;
	return 0;
}

int main()
{
	int n = 18;
	if(sohoanhao(n)==1) printf("%d la so hoan hao", n);
	else printf("%d khong la so hoan hao", n);
}
