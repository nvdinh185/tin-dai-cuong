#include <stdio.h>
#include <conio.h>

main(){
	int f;
	float c;
	for(f=0; f<=300; f+=20){
		c = 5.0*(f - 32)/9;
		printf("\n%dF = %.2fC", f, c);
	}
	getch();
}
