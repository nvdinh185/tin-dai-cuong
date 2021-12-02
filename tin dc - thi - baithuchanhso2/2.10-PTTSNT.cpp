//Phan tich thua so nguyen to
#include <stdio.h>
int main() {
	int i,n;
	printf("Nhap n > 1: ");
	scanf("%d",&n);
	if(n<2) printf("Nhap n>1");
	else {
		i = 2;
	    printf("%d = ",n);
	    while (n>1) {
	    	if(n % i ==0) {
	    		printf("%d",i);
			    if(n !=i) 
			         printf(" x ");
			    n/=i;
			} else i++;
		}
	}
}		     
	    		
