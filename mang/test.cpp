#include <stdio.h>

main(){
	int a[8];
	a[0]=0; a[1]=1; a[2]=2; a[3]=3;
	for(int i=0; i<7; i++){
		printf("%10d", a[i]);
	}
}
