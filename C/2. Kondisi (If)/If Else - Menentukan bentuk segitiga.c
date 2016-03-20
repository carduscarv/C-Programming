#include <stdio.h>
#include <math.h>

	int main(){
		//MASUKKAN INPUT
		
		int s1, s2, s3;
		printf("masukkan angka pertama:\n");
		scanf("%d", &s1);
		printf("masukkan angka kedua:\n");
		scanf("%d", &s2);
		printf("masukkan angka ketiga:\n");
		scanf("%d", &s3);

		int a=s1*s1;
		int b=s2*s2;
		int c=s3*s3;



		//MASUKKAN PROSES
		if((s1 == s2) && (s2 == s3)){
			printf("Ini segitiga sama sisi");
		}else if((s1 == s2) && (s2 != s3)){
			printf("Ini segitiga sama kaki");
		}else if((a + b) == (c)){
			printf("Ini segitiga siku-siku");
		}else{
			printf("bukan segitiga atau segitiga sama sisi");
		}

		return 0;
	}