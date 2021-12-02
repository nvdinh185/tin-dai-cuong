#include<stdio.h>

int main()
{
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	int i, t1=1, t2=1, tong;
	while(t1+t2<=n)
	{
		tong = t1 + t2;
		t1 = t2;
		t2 = tong;
	}
	if(tong==n){
		printf("%d la so fibonacci", n);
	}else{
		printf("%d khong phai so fibonacci", n);
	}
}
