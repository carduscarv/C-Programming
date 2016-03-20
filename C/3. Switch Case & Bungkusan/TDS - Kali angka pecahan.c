#include <stdio.h>

typedef struct{
	int penyebut,
		pembilang;
}pecahan;

int main(){
	pecahan a;
	pecahan b;
	pecahan c;

	printf("Masukan penyebut pecahan 1:\n");
	scanf("%d", &a.penyebut);
	printf("Masukan pembilang pecahan 1:\n");
	scanf("%d", &a.pembilang);
	printf("Masukan penyebut pecahan 2:\n");
	scanf("%d", &b.penyebut);
	printf("Masukan pembilang pecahan 2:\n");
	scanf("%d", &b.pembilang);

	c.penyebut=a.penyebut*b.penyebut;
	c.pembilang=a.pembilang*b.pembilang;

	printf("hasil: %d / %d * %d / %d = %d / %d",a.penyebut, a.pembilang, b.penyebut, b.pembilang, c.penyebut, c.pembilang );
