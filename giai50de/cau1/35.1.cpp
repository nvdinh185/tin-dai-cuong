#include <stdio.h>
int giaiThua(int n){
	if(n==0 || n==1) return 1;
	else return n*giaiThua(n-2);
}
int main(){
	int n;
	do{
		printf("Nhap n = ");
		scanf("%d", &n);
	}while(n>19);
	if(n==0) printf("Khong co giai thua kep\n");
	else printf("%d!! = %d", n, giaiThua(n));
}
