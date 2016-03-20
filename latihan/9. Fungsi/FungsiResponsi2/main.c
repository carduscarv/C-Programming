#include "header.h"

int main(){
	int n;
	scanf("%d", &n);

	int i;
	char strMong[n][100];
	for(i=0; i<n; i++){
		scanf("%s", &strMong[i]);
	}

	int vowelUp = wutVowel(strMong[0]);
	int konsoUp = wutConsonant(strMong[0]);
	int vowelDown = wutVowel(strMong[n-1]);
	int konsoDown = wutConsonant(strMong[n-1]);


	if((vowelUp == vowelDown) && (konsoUp == konsoDown)){
		printVowel(strMong[0]);
		printVowel(strMong[n-1]);
		printf("\n");
		printConso(strMong[0]);
		printConso(strMong[n-1]);
		printf("\n");
	}else{
		printf("tidak sama\n");
	}

	return 0;
}