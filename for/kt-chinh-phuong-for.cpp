#include <stdio.h>
#include <math.h>

int main(){
    int n, i, dem=0;
    printf("Nhap n = ");
    scanf("%d", &n);
    for(i=1; i<n; i++){
    	if(i*i==n) dem++;
	}
	if(dem==0) printf("%d khong la so chinh phuong!", n);
	else printf("%d la so chinh phuong!", n);
}
