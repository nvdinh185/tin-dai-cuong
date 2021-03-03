#include<stdio.h>

int main()
{
	int n, donvi, sogoc;
	printf("Nhap n = ");
	scanf("%d", &n);
	sogoc=n;
	while(sogoc>0)
	{ 
		donvi=sogoc%10;
		sogoc=sogoc/10;
		printf ("%3d", donvi);
	}
}

//khong dung yeu cau de bai, vi du nhap so goc = 12345, phai in ra so dao = 54321
