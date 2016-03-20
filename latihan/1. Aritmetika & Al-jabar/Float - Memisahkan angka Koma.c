//nyobain koma-komaan floating
//by MONG
#include <stdio.h>
int main ()
{
	float angka;
	//angka depan
	int forw;
	//angka belakang
	int rev;
	
	printf ("masukan angka float:\n");
	scanf ("%f", &angka);
	//int hanya menampilkan bilangan bulat
	forw = angka;
	//rumus untuk menghitung koma dibelakang
	rev = (angka - forw) * 100;
	
		printf("Bilangan depan %d\n", forw);
		printf("Bilangan belakang %d\n", rev);
		
	return 0;

}