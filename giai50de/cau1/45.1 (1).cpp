//so trung gian - toan tu
#include <stdio.h>
int tG(int a, int b, int c){
	int max=a, min=a;
	min = b<min ? (c<min? c : b): (c<min? c : min);
	max = b>max ? (c>max? c : b): (c>max? c : max);
	return a+b+c-max-min;
}
int main() {
	int a, b, c;
	printf("Nhap a,b,c: ");
	scanf("%d%d%d", &a, &b, &c);
	printf("So trung gian la %d", tG(a,b,c));
}
