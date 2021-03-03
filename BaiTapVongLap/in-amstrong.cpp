#include<stdio.h>
#include<math.h>

int main()
{
	int i, sogoc, donvi, sum;
	printf("Cac so Amstrong nho hon 1000 la: ");
	for(i=1; i<1000; i++)
	{
		sogoc = i;
		sum = 0;
		while(sogoc>0)
		{
			donvi = sogoc%10;
			sum += pow(donvi, 3);
			sogoc = sogoc/10;		
		}
		if(sum==i) printf("%4d", i);
	}	
}
