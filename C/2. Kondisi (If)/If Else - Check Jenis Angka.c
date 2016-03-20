#include <stdio.h>
	
	int main(){
		//Masukkan input variabel
		int a;
		printf("masukkan angka:\n");
		scanf("%d", &a);

		//MASUKKAN PROSES PEMILHAN
		if((a > 0) && (a <=9)){
			printf("Ini satuan");
		}else if((a > 9) && (a <= 99)){
			printf("Ini puluhan");
		}else if((a > 99) && (a <= 999)){
			printf("Ini ratusan");
		}else if(a > 999){
			printf("Ini ribuan");
		}else{
			printf("Lainnya");
		}

		return 0;
	}