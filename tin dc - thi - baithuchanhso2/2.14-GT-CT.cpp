//Tinh n giai thua
#include <stdio.h>
int main() {
	int i,n, gt = 1;
	printf("Nhap n = ");
	scanf("%d",&n);
	if(n<0) printf("Khong ton tai giai thua cho so am");
	else if (n==0) printf("n! = 1");
	else {
		for (i=n;i>=1;i--) {
			gt = gt*i;
			}
		printf("%d! = %d",n,gt);
		}
	}	
