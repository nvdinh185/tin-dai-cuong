#include<stdio.h>
#include<math.h>

float tongphanso(int x, int n)
{
	int i;
	float tong = 1.0;
	for(i=1; i<=n; i++){
		tong += (float) pow(x, i)/i;
	}
	return tong;
}

main()
{
	int x = 3, n = 3;
	printf("%f", tongphanso(x, n));
}
