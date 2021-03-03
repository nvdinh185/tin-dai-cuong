#include<stdio.h>//good

int chanle(int a)
{
	if(a%2==0)
	{	
		return 1;
	} else {
		return 0;	
	}
}

int main()
{
	int a = 3, kiemtra;
	kiemtra = chanle(a);
	if(kiemtra==0) printf("%d la so le", a);
	else printf("%d la so chan", a);
}

