// tong cac giai thua
#include <stdio.h>
int main() {
	int i,n, gt,s;
	printf("Nhap n = ");
	scanf("%d",&n);
	gt =1; s = 0;
	for (i=1;i<=n;i++) {
		gt = gt *i;
		s = s+gt;
		} 
	printf("S = %d",s);
}
