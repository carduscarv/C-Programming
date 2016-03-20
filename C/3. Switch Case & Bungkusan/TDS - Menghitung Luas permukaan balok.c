#include <stdio.h>

typedef struct{
	int panjang,
		lebar,
		tinggi,
		lp,
		volume;
}balok;

int main(){
	balok b;

	printf("masukkan nilai panjang lebar tinggi:");
	scanf("%d %d %d", &b.panjang, &b.lebar, &b.tinggi);

	b.lp = 2 * ((b.panjang * b.lebar) + (b.panjang * b.tinggi) + (b.lebar * b.tinggi));
	b.volume = b.panjang * b.lebar * b.tinggi;
	printf("luas permukaan: %d\n", b.lp);
	printf("Volume: %d\n", b.volume);

	return 0;
}