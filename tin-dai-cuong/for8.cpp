#include<stdio.h>
int main(){
	int i, n, sum = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i =1 ; i <= n ; i++){
		sum += i*3;
    }
	printf("Tong la = %d",sum);
}
