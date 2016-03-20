//print list semua isi string vertikal
#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	char value[n] [64];
	int i,
		j; //panjang maks

	for(i=0; i<n;i++){
	scanf("%s", &value[i]);
	}

	j=strlen(value[0]);
	for(i=1; i < n; i++){
		if(j < strlen(value[i])){
			j = strlen(value[i]);
		}
	}
	int k;
	for(i = 0; i < j; i++){
		for(k=0; k < n; k++){
			if(i > strlen(value[k])){
				printf(" ");
			}else{
				printf("%c", value[k][i]);

			}
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

	asa
	kul
	ukp
	 ar
	  o
*/
