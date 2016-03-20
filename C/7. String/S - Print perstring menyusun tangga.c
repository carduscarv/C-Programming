//menghitung banyaknya a
#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	char value[n] [64];
	int i,j, spasi=0;

	for(i=0; i<n;i++){
	scanf("%s", &value[i]);
	}


	for(i=0; i < n; i++){
		for(j=0; j < spasi; j++){
		printf(" ");
	}
	printf("%s\n", value[i]);
	spasi = spasi + strlen(value[i]);
}

	return 0;
}

/*
	Jadinya:
	3
	aku
	suka
	alpro

	aku
	   suka
	       alpro
*/