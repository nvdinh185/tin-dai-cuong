#include<stdio.h>
int main(){
	int i, n, sum = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i = 1 ; i < n ; i++){
		if(n % i ==0)
		   sum += i;
	}
	if(n == sum)
	    printf("Day la so hoan hao.");
	else
	    printf("Day khong phai la so hoan hao.");    
}
