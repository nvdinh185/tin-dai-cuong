#include<stdio.h>

int main()
{
	int a, b, c;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	printf("Nhap c = ");
	scanf("%d", &c);
	if(a+b<c || a+c<b || b+c<a){
		printf("Khong phai la 3 canh cua 1 tam giac!");
	} else {
		if(a==b && b==c) printf("Tam giac deu!");
		else if((a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b) && (a==b || a==c))
			printf("Tam giac vuong can!");
		else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b) printf("Tam giac vuong!");
		else if(a==b || a==c) printf("Tam giac can!");
		else printf("Tam giac thuong!");
	}
}
