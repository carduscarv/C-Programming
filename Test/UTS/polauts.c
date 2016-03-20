//Latihan Alpro 1 (bbt)
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

#include <stdio.h>

int main(){
	int bold;
	int i,j;
	scanf("%d", &bold);

	for(i = 0; i < bold; i++){
		for(j = bold-1; j > i; j--){
			printf(" ");
		}

		for(j = 0; j <= i; j++){
			printf("*");
		}

		for(j = 0; j < bold; j++){
		printf("*");
		}

		for(j = 0; j <= i; j++){
			printf("*");
		}

		printf("\n");
	}

	for(i = 0; i < bold; i++){
		for(j = 0; j < bold; j++){
			printf("*");
		}

		for(j = 0; j < bold; j++){
			printf(" ");
		}

		for(j = 0; j < bold; j++){
			printf("*");
		}

		for(j = bold-1; j > i; j--){
			printf(" ");
		}

		for(j = 0; j < i+1; j++){
			printf("*");
		}

		for(j = 0; j < bold; j++){
			printf("*");
		}
		printf("\n");
	}

	for(i = 0; i < bold; i++){
		for(j = 0; j < i; j++){
			printf(" ");
		}

		for(j = bold; j > i; j--){
			printf("*");
		}

		for(j = 0; j < bold; j++){
			printf("*");
		}

		for(j = bold; j > i; j--){
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
