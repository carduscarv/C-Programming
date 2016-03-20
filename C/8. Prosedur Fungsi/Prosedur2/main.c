#include "header.h"

int main(){
	int f;
	scanf("%d", &f);

	pola(f);
	pola(f+2);

	int kumpulan[f];


	int i;
	for(i=0; i<f; i++){
		scanf("%d", &kumpulan[i]);
	}

	tulisArrayInt(f, kumpulan);
	return 0;
}