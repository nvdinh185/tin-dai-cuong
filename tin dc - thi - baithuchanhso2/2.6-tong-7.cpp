//tong cac so chia het cho 7
#include <stdio.h>
int main() { 
	int i,n, s;
	s = 0 ; 
	printf("Nhap n:"); 
	scanf("%d", &n);
	for(i=1; i<=n; i++) { 
		if(i%7==0) s+= i; 
		} 
	printf("Sum = %d\n",s); 
	return 0; 
}
