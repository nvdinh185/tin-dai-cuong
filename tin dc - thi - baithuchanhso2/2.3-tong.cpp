//tong 1/n
#include <stdio.h>
int main() {
	int i,n;
	float s = 0 ; 
	printf("Nhap n:"); 
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		s = s+(float) 1/i;  
	}
	printf("Tong: S = %0.3f\n",s); 
    return 0;
	}
