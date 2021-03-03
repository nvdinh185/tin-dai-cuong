#include <stdio.h>
#include <conio.h>

bool soHoanHao(int n){
	int j, s=0;
	for(j=1; j<=n/2; j++){
		if(n%j==0) s+=j;
	}
	if(s==n) return true;
	return false;
}

main(){
	int n, i;
	printf("Nhap n = ");
	scanf("%d", &n);
	printf("Danh sach so hoan hao nho hon %d: ", n);
	for(i=1; i<=n; i++){
		if(soHoanHao(i)) printf("%10d", i);
	}
	getch();
}
