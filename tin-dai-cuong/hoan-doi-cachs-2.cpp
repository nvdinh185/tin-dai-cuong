#include<stdio.h>
int main(){
	int a, b;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	printf("Gia tri truoc khi hoan doi : a = %d, b = %d",a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("gia tri sau khi hoan doi :a = %d, b = %d",a,b);
}
