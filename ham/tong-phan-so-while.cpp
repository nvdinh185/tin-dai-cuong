#include<stdio.h>

main()
{
	int i = 1;
	float s = 0;
	while(1.0/i>=0.01){
		s += 1.0/i;
		i++;
	}
	printf("Ket qua = %f", s);
}
