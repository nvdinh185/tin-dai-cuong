#include <stdio.h>
#include <conio.h>

main()
{
	int n, i;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i=2; i<=10; i++){
		printf("%d x %d = %d   ", i, n, i*n);
	}
	getch();
}
