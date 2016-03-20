#include "header.h"

int main(){
	int i;
	int strCount=0;
	char strMong[64][64];
	scanf("%s", &strMong[0]);

	i=0;
	while(strcmp(strMong[i], "end") != 0){
		i++;
		scanf("%s", strMong[i]);
		strCount++;
	}

	if(strCount > 10){
			strCount = 10;
		}

	int n;
	scanf("%d", &n);
	
	char charmongStr,
		 charmongReplace;
	for(i=0; i<n; i++){
		scanf(" %c %c", &charmongStr, &charmongReplace);
		changeHepi(strCount, n, strMong, charmongStr, charmongReplace);
	}
	
	
	if(n == 0){
		isZero(strCount, strMong);
	}

	printHepi(n, strCount, strMong);

	return 0;
}