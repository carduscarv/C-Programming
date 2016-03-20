#include <stdio.h>

	int main(){
		//MASUKKAN INPUT
		
		int n;
		printf("masukkan angka:\n");
		scanf("%d", &n);

		//MASUKKAN PROSES
		if (n >= 80){
			printf("A");
		}else if ((n < 80) && (n >= 70)){
			printf("B");
		}else if ((n < 70) && (n >= 60)){
			printf("C");

		}else if((n <60) && (n >= 50)){
			printf("D");
		}else{
			printf("E");
		}

		return 0;
	}