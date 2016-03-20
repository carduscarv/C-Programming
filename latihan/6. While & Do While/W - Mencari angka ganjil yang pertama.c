//while untuk mencari angka (ganjil)
#include <stdio.h>
int main(){
	int i, //penghitung
		value[5], //array
		status;

		for(i = 0; i<5; i++){
			printf("masukan angka array:");
			scanf("%d", &value[i]);
			printf("\n");
		}

		//Proses
		status=0;
			//inisialisasi
			i=0;

			//proses while
			while((status==0) && (i<5)){
				if((value[i] % 2 == 1)){
					status = 1;
				}else{
					i++;
				}
			}

				if(status == 0){
					printf("the number's you find is not found\n");
				}else{
					printf("the number has found\n");
					printf("%d\n", value[i]);
				}

				return 0;
			}