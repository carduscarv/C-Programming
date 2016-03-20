//print list semua isi string vertikal
#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	char value[n] [64];
	int i,j;

	for(i=0; i<n;i++){
	scanf("%s", &value[i]);
	}


	for(i=0; i < n; i++){
		for(j=0; j < strlen(value[i]); j++){
		printf("%c", value[i] [j]);
		printf("\n");
		}
}


	return 0;
}

/*
	Jadinya:
	3
	aku
	suka
	alpro

	a
	k
	u
	s
	u
	k
	a
	a
	l
	p
	r
	o
*/
