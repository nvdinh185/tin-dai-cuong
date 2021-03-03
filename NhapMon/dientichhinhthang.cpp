# include <stdio.h>

int main()
{ 
	int a, b, h;
	float S;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	printf("Nhap h = ");
	scanf("%d", &h);
	S = (float) ((a+b)*h)/2;
	printf("Dien tich hinh thang = %f", S);
}
