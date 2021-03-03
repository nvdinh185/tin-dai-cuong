#include<stdio.h>
#include<math.h>

int main()
{
	int n, i;
	float s = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		s += pow(-1, i+1)/i;	
	}
	printf("Ket qua: %f", s);
}
