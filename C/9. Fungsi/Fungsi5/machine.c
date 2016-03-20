#include "header.h"

int getPoint(char LJK[], char source[], int n){
	int i;
	int score = 0;

	for(i=0; i<n; i++){
		if(LJK[i] != ' '){
			if(LJK[i] == source[i]){
				score = score + 2;
			}else{
				score = score - 1;
			}
		}
	}
	return score;
}