#include <stdio.h>

	int main(){
		int n; //jumlah bintang
		int i; //baris
		int j; //kolom

			//masukan proses perulangan for
			printf("masukan banyak nya bintang:\n"); //tampilan awal
			scanf("%d", &n); //masukan jumlah bintang

			for (i=1; i<=n; i++){  //logika proses baris
				for (j=1; j<=i; j++){ //logika proses kolom (bersarang)
					printf("*"); //tampilan hasil baris
				}
					printf("\n"); //masuk ke proses kolom
			}

		return 0;
	}