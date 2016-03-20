#include "header.h"

int wutMax(int n, int paket1[]){
	int temp = 0;
	int i;

	for(i=0; i<n; i++){
		if(temp < paket1[i]){
			temp = paket1[i];
		}
	}

	return temp;
}
