//Hai so nguyen to cung nhau
#include <stdio.h>
int main() {
	int a,b,m,n;
	printf("Nhap 2 so a,b:");
	scanf("%d%d", &a, &b);
	m = a; n = b;
	while (a!=0) {
		int x = a;
		a = b % a;
		b = x;
	}
	if(b==1) printf("%d,%d la 2 so nguyen to cung nhau",m,n);
	else printf("%d,%d khong phai la 2 so nguyen to cung nhau",m,n);
}
