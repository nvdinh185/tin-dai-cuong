#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	int i, n;
	float s = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		s += (pow(-1, i+1))/i;
	}
	printf("Ket qua: %4.2f", s);
	getch();
}
