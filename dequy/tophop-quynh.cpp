#include<stdio.h>

long long gt(int n)
{
	
    long long s = 1;
    for (int i = 1; i <= n; i++)
        s *= i;
    return s;
}
long long C(int k, int n) {
    return  gt(n) / (gt(k)*gt(n - k));
}
int main()
{
	   int n, k;
	   printf("Nhap n = ");
	   scanf("%d", &n);
	   printf("Nhap k = ");
	   scanf("%d", &k);
	   printf("%d", C(k, n));
}
