#include "header.h"

int wutPalyndrome(char palyndrome[]){
	int i;
	int n = strlen(palyndrome);;
	int count=0;

	for(i=0; i<n/2; i++){
		if(palyndrome[i] == palyndrome[n-(i+1)]){
			count++;
		}
	}

	if(count == n/2){
		return 1;
	}else{
		return 0;
	}
}