#include<stdio.h>

int demso0(int n)
{
	int donvi, dem = 0;
	while(n>0)
	{
		donvi = n%10;
		if(donvi==0) dem++;
		n = n/10;
	}
	return dem;
}

int main()
{
	int n, dem;
	printf ("Nhap n = ");
	scanf ("%d", &n);
	dem = demso0(n);
	printf("So chu so 0 trong %d la: %d", n, dem);
}
