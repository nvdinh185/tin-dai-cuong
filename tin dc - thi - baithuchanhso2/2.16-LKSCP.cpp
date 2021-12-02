//so chinh phuong
#include <stdio.h>
#include <math.h>
int main() {
	int m,n,i,dem=0;
	printf("Nhap m,n:");
	scanf("%d%d",&m,&n);
	int BD = sqrt(m);
	int KT = sqrt(n);
	if (m>=0 && m<n) {
		if (BD*BD==m) {
			BD = BD;
			}
		else {
			BD = BD + 1;
			}
		for (int i=BD; i<=KT;i++) {
			printf("%5d",i*i);
			dem++;
			}
	if (dem==0) printf("Khong co so chinh phuong");
	else printf("\nCo %d so chinh phuong\n",dem);
}
}
