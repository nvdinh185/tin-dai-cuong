#include<stdio.h>

long long gt(int n){	
    long long s = 1;
    for (int i = 1; i <= n; i++)
        s *= i;
    return s;
}

long long C(int k, int n){
    return  gt(n)/(gt(k)*gt(n - k));
}

int main(){
	int m = 5, i;
	for(i=0; i<=m; i++){
		printf("%5d", C(i, m));
	}
}
