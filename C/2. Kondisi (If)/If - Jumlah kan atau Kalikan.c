#include <stdio.h>
	
	int main(){

		//membuat dua bilangan variabel
		int v1, v2;
			printf("Masukkan angka:\n");
			scanf("%d %d", &v1, &v2);

			int v1a = v1*v1;
			int v2a = v2+v2;

		//Masukkan proses
			if ((v1%2 != 0) && (v2%2 != 0)){
				printf("%d", v1a);
			}else if((v1%2 == 0) && (v2%2 == 0)){
				printf("%d", v2a);
			}else{
				printf("%d %d", v1, v2);
			}

			return 0;
	}