# include <stdio.h>
# include <math.h>

int main ()
{ 
	int R;
	float V,S;
	printf("Nhap R = ");
	scanf("%d", &R);
	V = (4*M_PI*(R*R*R))/3;
	S = 4*M_PI*(R*R);
	printf("V = %.3f\n", V);
	printf("S = %.3f", S);
}
