#include<stdio.h>//good

int soamstrong(int i)
{
	int donvi, sogoc, sum;
	{
		sogoc = i;
		sum = 0;
		while(sogoc>0)
		{
			donvi = sogoc%10;
			sum += donvi*donvi*donvi;
			sogoc = sogoc/10;
		}
		if(sum==i)
		return 1;
		return 0;
	}
}

int main()
{
	int i = 153;
	if(soamstrong(i)==1) printf("%d la so amstrong", i);
	else printf("%d khong phai so amstrong", i);
}
