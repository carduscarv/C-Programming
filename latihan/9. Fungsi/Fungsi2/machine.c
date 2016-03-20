#include "header.h"

//fungsi berbentuk integer dengan bahan baku string
int nilaiMinimal(int n, int value[n]){
	//variabel lokal
	int i,
		min = value[0];

	//proses fungsi untuk menghitung jumlah nilai A
	for(i=0; i<n; i++){
		if(min > value[i]){
			min = value[i];
		}
	}

	return min;
}

//fungsi berbentuk integer dengan bahan baku integer
int nilaiMaksimal(int n, int value[n]){
	//variabel lokal
	int i,
		max = value[0];

	//proses fungsi untuk menghitung jumlah nilai A
	for(i=0; i<n; i++){
		if(max < value[i]){
			max = value[i];
		}
	}

	return max;
}

//fungsi berbentuk array
void cetakN(int n){
	int i;
	int count=1;
	for(i=0; i<n; i++){
		printf("%d Terimakasih untuk tetap semangat\n", count);
		count++;

	}
}