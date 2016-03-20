#include <stdio.h>
#include <string.h>

int main(){
	int putar,
		n;
	scanf("%d", &n);
	int i,
		j;
	char strmong[n][64];

	for(i=0; i < n; i++){
		scanf("%s", &strmong[i]);
	}

	for(i=0; i < n; i++){
		if(i%2==0){
			printf("%d %s\n", i+1, strmong[i]);
		}
	}
	printf("\n");

	for(i=0; i < n; i++){
		if(i%2==1){
			printf("%d %s\n", i+1, strmong[i]);
		}
	}


	return 0;
}

/*
	4
	aku
	suka
	alrpo
	bgt


	1 aku
	3 alpro

	2 suka
	4 bgt

*/