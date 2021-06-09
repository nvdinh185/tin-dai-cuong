#include<stdio.h>

void thayDoi(int &a){
	if(a%2==0) a += 1;
	else a -= 1;
}

int main()
{
	int a = 1;
	
	printf ("Truoc khi thay doi a = %d\n", a);
	thayDoi(a);
	printf ("Sau khi thay doi a = %d", a);
}
