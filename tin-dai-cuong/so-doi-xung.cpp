#include<stdio.h>

int main()
{
	int n, sotachra, a, s=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	a=n;
	while (n!=0) {
		sotachra=n%10;
		s=(s+sotachra)*10;
		n/=10;
		printf("%d\t%d\n", n, s);
	}
	if (s/10==a){
		printf("la so doi xung");
	} else {
		printf("khong phai so doi xung");
	}
}
