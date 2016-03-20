//while untuk berhenti ditengah saat angka yang dimasukkan 999
#include <stdio.h>
int main(){
	int i, //penghitung
		value[5]; //array

		for(i = 0; i<5; i++){
			printf("masukan angka array:\n");
			scanf("%d", &value[i]);
			printf("\n");
		}

		/////////////////////PROSES PEMROGRAMAN////////////////////////
			//inisialisasi
			i=0;

			//proses while
			while((value[i] != 999) && (i<5)){
				printf("%d\n", value[i]);
				i++;
			}

				return 0;
			}