/*
	Thuat toán:
	Buoc 1: Nhâp gio h, phút m, giây s và so tu nhiên n;
	Buoc 2: Tính gio phút giây sau n giây theo công thuc duoi dây;
	 h = (h + ((n + s)/60 + m)/60)%24;
	 m = (m + (n + s)/60)%60;
	 s = (n+ s)%60;
	Buoc 3: In ra giá tri gio, phút và giây moi
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
