#include<stdio.h>

int C(int k, int n){
	if (k == 0 || k == n) return 1;
    if (k == 1 || k == n-1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}

int main(){
	int n = 5;
	printf("---------VE TAM GIAC PASCAL---------\n");
	for (int i = 0; i < n; i++) {
//        for (int j = n; j > i; j--)
//            printf(" ");
        for (int j = 0; j <= i; j++) {
            printf("%d ", C(j, i));
        }
        printf("\n");
    }
}
