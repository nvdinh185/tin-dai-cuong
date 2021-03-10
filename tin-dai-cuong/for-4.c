#include<stdio.h>
int main(){
	int i, n, sum = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i = 1 ; i <= n ; i++){
		if(n%i == 0){
		printf("\ni = %d", i);	
		sum += 1;
	    }
	}
		printf("\nSo uoc cua n = %d", sum);
}
