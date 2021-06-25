#include<stdio.h>

main()
{
	int n = 12, i;
	float s = 0;
	for(i=1; i<=n; i++){
		s += 1.0/i;
	}
	printf("Ket qua = %f", s);
}
