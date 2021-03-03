#include<stdio.h>

int giaithua(int n){
	int i, s = 1;
	for(i=1; i<=n; i++){
		s *= i;
	}
	return s;	
}

int main()
{
	int n = 12; // toi da chi tinh duoc 12
	printf("%d! = %d", n, giaithua(n));
}
