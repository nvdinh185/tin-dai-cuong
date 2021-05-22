#include <stdio.h>
#include <math.h>
#include <windows.h>
int a=10;int b=7;
int s=10;int d=8;
int e=10;int f=9;
int g=10;int v=10;
int i=10;int k=11;
int l=10;int m=12;
int p=10;int q=13;
int x=10;int y=14;
int z=10;int t=15;

void gotoxy(int x, int y)
{
    static HANDLE h = NULL;  
    if(!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };  
    SetConsoleCursorPosition(h,c);
}

int main(){
	//ab
    while(a<50)
    {
		gotoxy(10,7);puts("    Huong oi !!!");
    	gotoxy(a,b);
    	puts("              ***       *** ");
		a++;	
    	Sleep(100);
   }
   //sd
     while(s<50)
    {
	
		gotoxy(10,8);puts("      Da khuya roi ...");
    	gotoxy(s,d);
    	puts("            *******   ******* ");
		s++;	
    	Sleep(100);
   }
   //ef
       while(e<50)
    {
		gotoxy(10,9);puts("   Hom nay em co met khong?...");
    	gotoxy(e,f);
    	puts("           ********* ********* ");
		e++;	
    	Sleep(100);
   }
   //gv
     while(g<50)
    {
	
		gotoxy(10,10);puts("        Den gio di ngu roi...");
    	gotoxy(g,v);
    	puts("           ******************* ");
		g++;	
    	Sleep(100);
   }
   //ik
       while(i<50)
    {
		gotoxy(10,11);puts("     Em di ngu di nhe...");
    	gotoxy(i,k);
    	puts("            ***************** ");
		i++;	
    	Sleep(100);
   }
   //lm
     while(l<50)
    {
	
		gotoxy(10,12);puts("     Mai roi hoc tiep...");
    	gotoxy(l,m);
    	puts("              *************");
		l++;	
    	Sleep(100);
   }
   //pq
       while(p<50)
    {
		gotoxy(10,13);puts("     CHUC EM NGU NGON...");
    	gotoxy(p,q);
    	puts("                 ******* ");
		p++;	
    	Sleep(150);
   }
   //xy
     while(x<50)
    {
	
		gotoxy(10,14);puts(" VA CO GIAC MO NGOT NGAO");
    	gotoxy(x,y); 
    	puts("                   ***                 ");
		x++;	
    	Sleep(100);
   }
   //zt
        while(z<50)
    {
	
		gotoxy(5,15);puts("............Hehe..............");
    	gotoxy(z,t);
    	puts("                    *    ");
		z++;	
    	Sleep(200);
   }
     printf("\n\n");
}
     

