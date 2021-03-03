#include<stdio.h>

int main()
{
	int n, max = 0, donvi, sogoc;
	printf("Nhap n = ");
	scanf("%d", &n);
	sogoc = n;
	while(n>0){
		donvi = n%10;
		if(max<donvi) max = donvi;
		n /= 10;
	}
	printf("Chu so lon nhat trong %d la %d", sogoc, max);
}
