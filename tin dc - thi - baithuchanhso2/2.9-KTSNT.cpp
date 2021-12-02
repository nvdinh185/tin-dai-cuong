//so nguyen to
#include <stdio.h>
int main() {
	int i,n, dem;
	dem = 0;
	printf("Nhap n:");
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
		if (n%i==0) dem+=1;
	}
	if(dem==2) printf("%d la so nguyen to\n",n);
	else printf("%d khong phai la so nguyen to\n",n);
	return 0;
}
