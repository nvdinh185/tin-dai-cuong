#include <stdio.h>

#define MAX 10

void hienThi(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("%5d", arr[i]);
	}
}

void thayDoi(int arr[], int n){
	for(int i=0; i<n; i++){
		if(i%2!=0) arr[i] *= 2;
	}
}

main(){
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("Truoc khi thay doi:\n");
	hienThi(a, MAX);
	printf("\nSau khi thay doi:\n");
	thayDoi(a, MAX);
	hienThi(a, MAX);
}
