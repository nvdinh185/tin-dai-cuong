#include<stdio.h>
#include<math.h>

main()
{
	int n = 3, i;
	float x = 2.5;
	float s = 1;
	for(i=1; i<=n; i++){
		s += pow(x, i)/i;
	}
	printf("Ket qua = %f", s);
}
