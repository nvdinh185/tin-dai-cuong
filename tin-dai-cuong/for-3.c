#include<stdio.h>
int main(){
	int n, i, sum = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	for((i = 1) ; (i <= n) ; i++ ){
	   if(i%2 == 0)
	   sum += i;
    }
    printf("\nsum = %d", sum);
}
