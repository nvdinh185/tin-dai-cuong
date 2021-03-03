#include <stdio.h>

int giaiThua(int n){
	int i;
	int gt=1;
	for(i=n; i>1; i-=2) gt*=i;
	return gt;
}

main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	
	printf("Ket qua %d!! = %d\n", n, giaiThua(n));
	
}
