//giai thua kep - while
#include <stdio.h>
int gT(int n){
	int i, gt = 1;
	if(n%2==0){
		i=2;
		while(i<=n){
			gt*=i;
			i+=2;
		}
	}
	if(n%2==1){
		i=1; 
		while(i<=n){
			gt*=i;
			i+=2;
		}
	}
	return gt;
}
int main() {
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	if(n==0) printf("Khong co giai thua kep\n");
	else printf("%d!! = %d", n, gT(n));
}
