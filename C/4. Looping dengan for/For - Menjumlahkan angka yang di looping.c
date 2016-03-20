#include <stdio.h>

	int main(){
		int n; //berapa_kali
		int hasil_jumlah=0;
		int i; //penghitung

			//masukan proses perulangan for
			printf("masukan angka berapa kali akan diulang:\n"); //tampilan awal
			scanf("%d", &n); //masukan input
			printf("\n"); //newline

			for (i=1; i<=n; i++){  //logika proses
				hasil_jumlah=hasil_jumlah+i; //hasil proses
			}
		printf("Hasil penjumlahan dari 1 hingga angka %d\n",n); //tampilan sebelum hasil
		printf("%d\n", hasil_jumlah); //tampilan hasil

		return 0;
	}