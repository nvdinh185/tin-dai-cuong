#include<stdio.h>
int main() {
	int n, h;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	if(n%2==0) {
	 printf(" la so chan ");
		h = n * n;
		printf("so chan gap doi: ");
		printf("%d", h); 
}
else printf("la so le");
return 0;

	}
