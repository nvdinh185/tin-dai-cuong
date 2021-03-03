#include <stdio.h>
#include <conio.h>

main(){
	int i, n;
	float T = 500;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i=1; i<=n; i++) T *= 1.1;
	printf("So tien phai tra sau %d thang: %.2f", n, T);
	getch();
}
