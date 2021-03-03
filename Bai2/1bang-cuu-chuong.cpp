#include<stdio.h>
#include<conio.h>
int main()
{
	printf("________________Bang cuu chuong________________\n\n");
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=2;j<=9;j++)
		printf("%2d x%2d = %-2d ",j,i,i*j);
		printf("\n");
	}
	getch();
}
