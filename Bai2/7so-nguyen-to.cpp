#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	long i, j, dem;
	printf("Danh sach so nguyen to tu 2 -> 1000\n");
	for(i=2; i<=1000; i++){
		dem=0;
		for(j=2; j<i; j++) if(i%j==0) dem++;
		if(!dem) printf("\n%d", i);
	}
	getch();
}
