#include <stdio.h>

	int main(){
		//MASUKKAN INPUT

		float f;
		printf("Masukkan angka koma:\n");
		scanf("%f", &f);

		int a=f;
		int b=(f-a)*100;

		//Masukkan proses
		if (a % b == 0){
			printf("valid");
		}else{
			printf("tidak valid");
		}

		return 0;

	}