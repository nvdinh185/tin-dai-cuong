#include <stdio.h>
#include <conio.h>

main()
{
	int n, i;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i=1; i<=10; i++){
		printf("%d x %d = %d\n", n, i, n*i);
	}
	getch();
}
