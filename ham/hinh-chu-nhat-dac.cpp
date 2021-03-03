#include<stdio.h>

void veHCN(int hang, int cot){
	for(int i=1; i<=hang; i++)
	{
		for(int j=1; j<=cot; j++){
			printf("%3c", '*');
		}		
		printf("\n");
	}
}

main()
{
	int hang = 4, cot = 5;
	veHCN(hang, cot);
}
