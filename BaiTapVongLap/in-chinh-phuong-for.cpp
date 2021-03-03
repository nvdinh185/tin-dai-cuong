#include <stdio.h>
#include <math.h>

int main(){
    int n, i, j, dem;
    printf("Nhap n = ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
    	dem = 0;
    	for(j=1; j<i; j++)
		{
    		if(j*j==i) dem++;
		}
		if(dem!=0) printf("%4d", i);
	}    
}
