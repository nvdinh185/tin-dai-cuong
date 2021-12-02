//uoc cua n
#include <stdio.h>
int main() {
	int i,n,dem = 0;
	printf("Nhap n:");
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
		if (n%i==0) { printf("%5d",i);
		              dem+=1;
		            }            
	}
	printf("\n\n");
	printf("So uoc cua %d la %d\n", n, dem);
	return 0;
}
