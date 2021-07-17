// giai thua kep - do while
#include <stdio.h>
int gT(int n){
	int i, gt = 1;
	if(n%2==0){
		i=2;
		do{
			gt*=i;
			i+=2;
		}while(i<=n);
	}
	if(n%2==1){
		i=1; 
		do{
			gt*=i;
			i+=2;
		}while(i<=n);
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
