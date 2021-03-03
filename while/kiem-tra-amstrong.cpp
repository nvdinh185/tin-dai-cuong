#include<stdio.h>
#include<math.h>

int main()
{
	int n, sogoc, donvi, sum=0;
	printf("Nhap n = ");
	scanf("%d", &n);
	sogoc = n;
	while(sogoc>0)
	{
		donvi = sogoc%10;
		sum += pow(donvi, 3);
		sogoc = sogoc/10;		
	}
	if(sum==n) printf("%d la so Amstrong!", n);
	else printf("%d khong la so Amstrong!", n);
}
