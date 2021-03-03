#include<stdio.h>

int main()
{
	int n, phepnhan, i;
	printf ("Ban cuu chuong ban can ? ");
	scanf ("%d", &n);
	for (i=1; i<=10; i++)
	{
	printf ("%d*%d=%d\n", n, i, n*i);//Hàng này nen tab vo cho dep nhe
	}
}
