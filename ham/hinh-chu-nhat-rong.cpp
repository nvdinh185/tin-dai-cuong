#include<stdio.h>

void veHCN(int hang, int cot){
	for(int i=1; i<=hang; i++)
	{
		for(int j=1; j<=cot; j++){
			if(i==1 || i==hang) printf("%3c", '*');
			else if(j==1 ||j==cot) printf("%3c", '*');
			else printf("%3c", ' ');
		}		
		printf("\n");
	}
}

main()
{
	int hang = 4, cot = 5;
	veHCN(hang, cot);
}
