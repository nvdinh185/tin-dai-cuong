/*
	Thuat to�n:
	Buoc 1: Nh�p gio h, ph�t m, gi�y s v� so tu nhi�n n;
	Buoc 2: T�nh gio ph�t gi�y sau n gi�y theo c�ng thuc duoi d�y;
	 h = (h + ((n + s)/60 + m)/60)%24;
	 m = (m + (n + s)/60)%60;
	 s = (n+ s)%60;
	Buoc 3: In ra gi� tri gio, ph�t v� gi�y moi
*/

# include <stdio.h>

int main()
{
	int h, m, s, n;
	printf ("Nhap h = ");
	scanf ("%d", &h);
	printf ("Nhap m = ");
	scanf ("%d", &m);
	printf ("Nhap s = ");
	scanf ("%d", &s);
	printf ("Nhap n = ");
	scanf ("%d", &n);
	h = (h + ((n + s)/60 + m)/60)%24;
	m = (m + (n + s)/60)%60;
	s = (n+ s)%60;
	printf ("Gio: %d\n", h);
	printf ("Phut: %d\n", m);
	printf ("Giay: %d\n", s);
}
