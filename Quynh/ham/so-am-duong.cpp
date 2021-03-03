#include<stdio.h>

int soduong(int a)
{
	if(a>0)
	{
		return 0;
	}
	else return 1;
}

int main()
{
	int a=-4, kiemtra;
	kiemtra=soduong(a);
	if(kiemtra == 0) printf("a la so duong");
	else printf("a la so am");
}

