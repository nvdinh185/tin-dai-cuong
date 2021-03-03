#include<stdio.h>

int mu(int x, int n)
{
	int i, s = 1;
	for(i=1; i<=n; i++){
		s *= x;
	}
	return s;
}

main()
{
	int x = 3, n = 3, i;
	float tong = 1.0;
	for(i=1; i<=n; i++){
		tong += (float) mu(x, i)/i;
	}
	printf("Ket qua tong = %f", tong);
}
