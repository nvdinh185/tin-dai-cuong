#include<stdio.h>
#include<conio.h>
int main()
{
	int n,sotachra,a,s=0;
	printf("nhap n: ");
	scanf("%d", &n);
	a=n;
	while (n!=0){
		sotachra=n%10;
		s=(s+sotachra)*10;
		n/=10;
	}
	
	if (s/10==a){
	printf("la so doi xung");}
	else {
		printf("khong phai so doi xung");
	}
}
