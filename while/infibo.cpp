#include<stdio.h>

int main(){
	int a = 1;
	int b = 1;
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	printf("%5d", a);
	printf("%5d", b);
	int c = a + b;
	while(c<n){
		printf("%5d", c);
		a = b;
		b = c;
		c = a + b;
	}
}
