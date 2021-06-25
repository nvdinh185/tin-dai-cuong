#include <stdio.h>

#define MAX 10

void hienThi(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("%5d", arr[i]);
	}
}

main(){
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	hienThi(a, MAX);
}
