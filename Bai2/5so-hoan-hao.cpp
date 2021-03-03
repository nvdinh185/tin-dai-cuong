#include <stdio.h>
#include <conio.h>

main(){
	int i, j, s;
	for(i=1; i<1000; i++){
		s=0;
		for(j=1; j<=i/2; j++){
			if(i%j==0) s+=j;
		}
		if(s==i) printf("\n%d", i);
	}
	getch();
}
