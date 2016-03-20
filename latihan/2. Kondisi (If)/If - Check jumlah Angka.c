	#include <stdio.h>

	int main(){
		//MASUKKAN INPUT
		printf("masukkan angka:\n");
		int n;
		scanf("%d", &n);
		
		//MASUKKAN OUTPUT
		if (n >= 75){
			printf("LULUS");
		}else{
			printf("NOT LULUS");
		}

		return 0;
	}