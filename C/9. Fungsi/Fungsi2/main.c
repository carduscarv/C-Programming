#include "header.h"

int main(){
	int n, i;
	printf("masukkan jumlah angka: ");
	scanf("%d", &n);

	int value[n];
	for(i=0; i<n; i++){
		scanf("%d", &value[i]);
	}

	printf("Print sesuai jumlah Nilai maksimal:\n");
	cetakN(nilaiMaksimal(n, value));
	printf("\n");

	printf("Print saat nilai maksimal dikali nilai minimal:\n");
	cetakN((nilaiMinimal(n, value)*nilaiMaksimal(n, value)));

	return 0;
}