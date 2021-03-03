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
		sum += donvi;
		sogoc = sogoc/10;		
	}
	printf("Tong cac chu so cua %d la %d!", n, sum);
}
