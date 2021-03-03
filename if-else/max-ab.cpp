#include <stdio.h>
/*
	Thuat toan:
	1. gan max = a;
	2. so sanh max voi b, neu max < b thi gan max = b;
	3. in max ra man hinh  
*/

int main ()
{
	int a, b;
	printf ("nhap a, b = ");
	scanf ("%d%d",&a, &b);
	int max = a;
	if (max<b) max = b;
	if(a == b) printf("Khong co gia tri lon nhat.");
	else printf ("Gia tri lon nhat la max = %d", max);
} 

