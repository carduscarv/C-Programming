//Latihan Alpro 1 (bbn)
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

#include <stdio.h>

int main(){
	int bold;
	int i,j;
	scanf("%d", &bold);

	for(i = 0; i < bold; i++){
		for(j = 0; j < i+1; j++){
			printf("*");
		}

		for(j = bold-1; j > i; j--){
			printf(" ");
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

		for(j = 0; j < i+1; j++){
			printf("*");
		}



		printf("\n");
	}

	for (i = 1;i <= bold-1; i++){
		for (j = bold-1; j >= i; j--) {
			printf("*");
		}

		for (j = 1; j <= i; j++) {
			printf(" ");
		}

		for (j = 1;j <= i; j++) {
			printf(" ");
		}

		for (j = bold-1; j >= i; j--) {
			printf("*");
		}

		for (j = 1;j <= bold; j++) {
			printf("*");
		}

		for (j = bold-1; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}

	for(i = 0; i < bold; i++){
		for(j = 0; j < i+1; j++){
			printf("*");
		}

		for(j = bold-1; j > i; j--){
			printf(" ");
		}

		for(j = bold-1; j > i; j--){
			printf(" ");
		}

		for(j = 0; j < i+1; j++){
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
