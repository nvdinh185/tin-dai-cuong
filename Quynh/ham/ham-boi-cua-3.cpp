#include<stdio.h>//good

int boicuan(int i)
{

	if(i%3==0)
	return 1;
	return 0;
}
	
int main()
{
	int n = 8, kiemtra = boicuan(n);// a = b*c + d*e;
	if(kiemtra==1) printf("%d la boi cua 3", n);
	else printf("%d khong la boi cua 3", n);
}

	
