#include "header.h"

int wutVowel(char strMong[]){
	int lenStr = strlen(strMong);
	int i;
	int vowelCount = 0;

	for(i=0; i<lenStr; i++){
		if(strMong[i] == 'a' || strMong[i] == 'i' || strMong[i] == 'e'
			|| strMong[i] == 'o' || strMong[i] == 'u'){
			vowelCount++;
		}
	}

	return vowelCount;
}

int wutConsonant(char strMong[]){
	int lenStr = strlen(strMong);
	int i;
	int consoCount = 0;

	for(i=0; i<lenStr; i++){
		if(strMong[i] != 'a' && strMong[i] != 'i' && strMong[i] != 'e'
			&& strMong[i] != 'o' && strMong[i] != 'u'){
			consoCount++;
		}
	}
	return consoCount;
}

void printVowel(char strMong[]){
	int i;

	for(i=0; i<strlen(strMong); i++){
		if(strMong[i] == 'a' || strMong[i] == 'i' || strMong[i] == 'u' || strMong[i] == 'e' || strMong[i] == 'o'){
			printf("%c", strMong[i]);

		}
	}
}

void printConso(char strMong[]){
	int i;

	for(i=0; i<strlen(strMong); i++){
		if(strMong[i] != 'a' && strMong[i] != 'i' && strMong[i] != 'u' && strMong[i] != 'e' && strMong[i] != 'o'){
			printf("%c", strMong[i]);
		}
	}
}