//mengganti seluruh huruf vokal menjadi deretan angka
#include <stdio.h>
#include <string.h>

int main(){
	char value[64];
	int i,j;
	int penghitung=0;
	scanf("%s", &value);

	for (i = 0; i < strlen(value); i++){
		if(value[i] =='a' || value[i] =='i' || value[i] =='u' || value[i] =='e' || value[i] =='o'){

			printf("%d", penghitung);
			penghitung++;

			if(penghitung > 9){
				penghitung = 0;
			}
		}else{
			printf("%c", value[i]);
		}
	}
	printf("\n");

	return 0;
}