#include "header.h"

int main(){
	int m;
	int i;
	int count=0;

	printf("Masukan jumlah string yang akan di check: ");
	scanf("%d", &m);
	char palyndrome[m][100];

	printf("Masukan string yang akan di check:\n");

	for(i=0; i<m; i++){
		scanf("%s", &palyndrome[i]);
		if(wutPalyndrome(palyndrome[i]) == 1){
				count++;
		}
	}


	if(m == count){
		printf("valid\n");
	}else{
		printf("tidak valid, karena jumlah string yg palindrom %d sedangkan harusnya ada %d \n", count, m);
	}

	return 0;
}