#include<stdio.h>

int demchan(int n){
	int dem = 0;
	for(int i=1; i<=n; i++)
	{
		if(n%i==0 && i%2==0) dem++;
	}
	return dem;
}

main()
{
	int n = 20;
	printf("%d\n", demchan(n));
}
