// cac so chan va cac so le nho hon n
#include <stdio.h>
int main() {
	int i, n;
	printf("Nhap n = ");
	scanf("%d", &n);
	printf("Cac so chan la");
	for (i=1;i<n;i++) { 
	     if (i%2==0) printf("%5d", i);
    }
    printf("\n");
    printf("Cac so le la");
	for(i=1;i<n;i++) {
	    if (i%2!=0) printf("%5d",i);
	}
}
