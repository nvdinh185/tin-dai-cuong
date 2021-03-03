#include<stdio.h>

    int giaiThua(int n)
{
	if (n==0 || n==1) 
	return 1;
	else
	return n*giaiThua(n-1);
}

	int main()
	{
		int n=4;
		for ( int i=0;i<=n;i++){
		for ( int j=0;j<=n-i;j++){
		printf(" ");
	}
	int c=0;
	for (int j=0;j<=i;j++)
	{
		c=(giaiThua(i))/(giaiThua(i-j)*giaiThua(j));
		printf("%d ",c);
	}
	printf("\n");
    }
}
