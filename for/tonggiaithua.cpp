#include<stdio.h>

int main(){
	int n;
	printf("nhap n = ");
	scanf("%d", &n);
	int s = 0;
	for(int i=1; i<=n; i++){
		int giaithua=1;
		for(int j=1; j<=i; j++){
			giaithua*=j;
		}
		s+=giaithua;
	}
	printf("%d", s);
}
