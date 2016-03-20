//menghitung banyaknya a
#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	char value[n] [64];
	int i,j, jumlah=0;

	for(i=0; i<n;i++){
	scanf("%s", &value[i]);
	}


	for(i=0; i < n; i++){
		for(j=0; j < strlen(value[i]); j++){
		if(value[i] [j] == 'a'){
			jumlah++;
		}
	}
}
	printf("Jumlah: %d\n", jumlah);


	return 0;
}

/*
	Jadinya:
	3
	aku
	suka
	alpro

	jumlah : 3
*/