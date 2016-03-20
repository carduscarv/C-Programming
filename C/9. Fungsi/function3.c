#include <stdio.h>
#include <string.h>

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

int main(){
	int m;
	int i;
	int count=0;

	scanf("%d", &m);
	char palyndrome[m][100];
	for(i=0; i<m; i++){
		scanf("%s", &palyndrome[i]);
		if(wutPalyndrome(palyndrome[i]) == 1){
				count++;
		}
	}


	if(m == count){
		printf("valid\n");
	}else{
		printf("tidak valid\n");
	}

	return 0;
}