#include<stdio.h>

int C(int k, int n){
	if (k == 0 || k == n) return 1;
    if (k == 1 || k == n-1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}

int main(){
	int n = 20, k = 6;
	printf("C(%d, %d) = %d", k,n, C(k, n));
}
