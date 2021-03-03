#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    int can_n = sqrt(n);
    if(can_n*can_n == n){
        printf("%d la so chinh phuong!\n", n);
    }else{
        printf("%d khong phai so chinh phuong!\n", n);
    }
}
