# include<stdio.h>
# include<math.h>

int main()
{ 
	int x, y;
	float tu, mau;
	printf("Nhap x = ");
	scanf("%d", &x);
	printf("Nhap y = ");
	scanf("%d", &y);
	tu = pow(x*x + y*y, 1/3) - log(x+y)/log(5);
	mau = atan(x-y) + M_PI/4;
	printf("ket qua %f/%f = %.2f", tu, mau, tu/mau);
}
