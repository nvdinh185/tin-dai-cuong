#include<stdio.h>

int main()
{
	int n, donvi;
//	Nhap so co >= 2 chu so:
	do{
		printf("Nhap n = ");
		scanf("%d", &n);
	} while(n<10);

//	gan max = n chia du 10 (chu so hang don vi)
	int max=n%10;
	n/=10;

//	dung vong lap while de lap
	while(n>0){
		donvi = n%10;
		if(max<donvi) max = donvi;
		n = n/10;
	}

//	in ra chu so lon nhat
	printf("Chu so lon nhat la %d", max);
}
