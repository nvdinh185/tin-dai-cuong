#include<stdio.h>
#include<math.h>

main()
{
	int n = 6, i;
	float s = 0;
	for(i=1; i<=n; i++){
		s += pow(-1, i+1)/i;
	}
	printf("Ket qua = %f", s);
}
