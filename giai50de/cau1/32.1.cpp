//giai thua kep - for
#include <stdio.h>
int gT(int n){
	int i, gt = 1;
	if(n%2==0)
		for(i=2; i<=n; i+=2) gt*=i;
	if(n%2==1)
		for(i=1; i<=n; i+=2) gt*=i;
	return gt;
}
int main() {
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	if(n==0) printf("Khong co giai thua kep\n");
	else printf("%d!! = %d", n, gT(n));
}
