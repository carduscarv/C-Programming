#include "header.h"

int string1(int tanda1, int n, char string[n][64], int k){
	tanda1=0;
	int i;
	for(i=0; i<n; i++){
		if(strlen(string[i]) == k){
			tanda1++;
		}
	}
	return tanda1;
}

int string2(int tanda2, int m, char strings[m][64], int k){
	tanda2=0;
	int i;
	//proses1
	for(i=0; i<m; i++){
		if(strlen(strings[i]) == k){
			tanda2++;
		}
	}
	return tanda2;
}

void compares(int hasil_tanda1, int hasil_tanda2, int n, char string[n][64], int m, char strings[m][64]){
	int i;
	if(hasil_tanda1 == hasil_tanda2){
		for(i=0; i<n; i++){
			printf("%s\n", string[i]);
		}
	}else{
		for(i=0; i<m; i++){
			printf("%s\n", strings[i]);
		}
	}
}