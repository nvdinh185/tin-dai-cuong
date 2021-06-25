#include <stdio.h>

#define max 10

main(){
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for(int i=0; i<max; i++){
		printf("%5d", a[i]);
	}
}
