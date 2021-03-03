# include <stdio.h>
# include <math.h>

int main()
{    
	int R;
	float chuvi, dientich;
	printf("Nhap R = ");
	scanf ("%d", &R);
	chuvi = 2*M_PI*R;
	dientich = M_PI*(R*R);
	printf("chuvi = %.3f\n", chuvi);
	printf("dientich = %.3f", dientich);
}
  
