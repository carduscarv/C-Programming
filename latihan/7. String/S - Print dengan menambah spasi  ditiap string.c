//print list horizontal
#include <stdio.h>
#include <string.h>

typedef struct{
	char value[50];
}string;

int main(){
	int n,
		i,
		j;

	scanf("%d", &n);

	string strmong[n];

	for(i=0; i<n; i++){
	scanf("%s", &strmong[i].value);
}


	for(i=0; i < n; i++){
		for(j=0; j < strlen(strmong[i].value); j++){
			printf(" ");
		printf("%c", strmong[i].value[j]);
		}
		printf("\n");
}


	return 0;
}

/*
	Jadinya:
	3
	aku
	suka
	alpro

	a k u
	s u k a
	a l p r o
*/