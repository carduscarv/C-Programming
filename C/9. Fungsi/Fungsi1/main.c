#include "header.h"

int main(){
	int hasil;
	char str[50];

	//masukan dan keluaran yang telah di proses di fungsi
	printf("masukan string:");
	scanf("%s", &str);
	printf("jumlah a adalah : %d\n", jumlahA(str));

	int x, y;
	printf("masukan dua angka:");
	scanf("%d %d", &x, &y);
	printf("hasil pertambahan : %d\n", tambah(x,y));

	//masukan dan keluaran untuk penjumlahan dengan array
	int n, i;
	printf("masukan jumlah putaran:");
	scanf("%d", &n);

	printf("input angka:\n");
	int value[n];
	for(i=0; i<n; i++){
		scanf("%d", &value[i]);
	}

	printf("jumlah deret : %d\n", sum(n, value));

	return 0;
}