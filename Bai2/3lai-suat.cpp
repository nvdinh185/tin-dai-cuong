#include <stdio.h>

main(){
	int i, n;
	float T = 1000000;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i=0; i<n; i++) T *= 1.02;
	printf("So tien phai tra sau %d thang: %.2f", n, T);
}
