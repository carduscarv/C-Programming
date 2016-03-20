#include "header.h"

//fungsi berbentuk integer dengan bahan baku string
int jumlahA(char str[]){
	//variabel lokal
	int i,
		count = 0;

	//proses fungsi untuk menghitung jumlah nilai A
	for(i=0; i<strlen(str); i++){
		if(str[i] == 'a' || str[i] == 'A'){
			count++;
		}
	}

	return count;
}

//fungsi berbentuk integer dengan bahan baku integer
int tambah(int a, int b){
	//proses fungsi pertambahan
	int hasil = a + b;

	return hasil;
}

//fungsi berbentuk array
int sum(int n, int value[n]){
	//proses fungsi pertambahan dengan metode looping
	int i, hasil = 0;
	for(i=0; i<n; i++){
		hasil=hasil+value[i];
	}
	return hasil;
}