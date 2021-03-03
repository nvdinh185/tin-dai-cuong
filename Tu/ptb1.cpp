#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("nhap a va b:");
	scanf("%d%d", &a, &b);
	if(a!=0) printf("nghiem cua pt la = %f",(float)-b/a);
	if(a==0)
	if(b==0) printf("pt co vo so nghiem");
	else printf("pt vo nghiem");
	getch();
}
