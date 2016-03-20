//while tampilkan maks 3 angka (genap)
#include <stdio.h>
int main(){
	int i, //penghitung
		j,
		value[5]; //array

		for(i = 0; i<5; i++){
			printf("masukan angka array:\n");
			scanf("%d", &value[i]);
			printf("\n");
		}

		/////////////////////PROSES PEMROGRAMAN////////////////////////
			//inisialisasi
			i=0;
			j=0;

			//proses while
			while((i<5) && (j<3)){
				if(value[i]%2==0){
					j++;
					printf("%d\n", value[i]);

				}
				i++;

			}

			return 0;
		}