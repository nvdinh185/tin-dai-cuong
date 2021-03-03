#include<stdio.h>

main()
{
	int n = 5, i, luythua = 2;
	for(i=1; i<n; i++){
		luythua *= 2;
	}
	printf("2^%d = %d", n, luythua);
}
