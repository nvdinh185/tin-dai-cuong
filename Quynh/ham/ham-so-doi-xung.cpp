# include<stdio.h>//good

int sodoixung(int n)
{
	int sogoc, sodao, donvi;
	sogoc = n;
	sodao = 0;
	while(sogoc>0)
	{
		donvi = sogoc%10;
		sodao = sodao*10 + donvi;
		sogoc = sogoc/10;
	}
	if(sodao==n)
	return 1;
	return 0;
}

int main()
{
	int n=1233210;
	if(sodoixung(n)==1) printf("%d la so doi xung", n);
	else printf("%d khong phai so doi xung", n);
}
