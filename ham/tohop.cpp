#include<stdio.h>

int gt(int n) {
    int s = 1;
    for (int i = 1; i <= n; i++)
        s *= i;
    return s;
}

int C(int k, int n) {
    return  gt(n) / (gt(k)*gt(n - k));
}

int main(){
	int n = 12, k = 6;
	printf("%d", C(k, n));
}
