#include "header.h"

int main(){
	int n, i, j;
	printf("masukkan jumlah angka: ");
	scanf("%d", &n);

	char str[n][100];
	for(i=0; i<n; i++){
		scanf(" %s", &str[i]);
	}

	int hitungan = 0;
	for(i=0; i<jumVo(n, str); i++){
		hitungan++;
		for(j=0; j<n; j++){
			if(j==0){
				printf("%d", hitungan);
			}
			printf("%s ", str[j]);
		}
		printf("\n");
	}

	return 0;
}