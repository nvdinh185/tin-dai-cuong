#include <stdio.h>
#include <conio.h>

main(){
	int i, n;
	float s=0;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)	s += 1.0/i;
	printf("Tong la: %0.2f", s);
	getch();
}
