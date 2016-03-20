#include "header.h"

int jumVo(int n, char str[n][100]){
	//variabel lokal
	int i,
		j,
		count = 0;

	//proses fungsi untuk menghitung jumlah nilai A
	for(i=0; i<n; i++){
		for(j=0; j<strlen(str[i]); j++){
			if(str[i][j] == 'a' || str[i][j] == 'A' || str[i][j] == 'i' || str[i][j] == 'I' || str[i][j] == 'u' || str[i][j] == 'U' || str[i][j] == 'e' || str[i][j] == 'E' || str[i][j] == 'o' || str[i][j] == 'O'){
				count++;
			}
		}
	}

	return count;
}
