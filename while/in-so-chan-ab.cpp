#include<stdio.h>

main()
{
	int a = 2, b = 18;
	int i = a;
	while(i<=b)
	{
		if(i%2==0) printf("%d\n", i);
		i++;
	}
}
