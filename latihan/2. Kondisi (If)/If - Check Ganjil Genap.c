#include <stdio.h>
	
	int main(){

		int a1, a2;

			scanf("%d", &a1);
			scanf("%d", &a2);
			if(a1 % 2 == 0){
				printf("INI GENAP!\n");
				}else{
					printf("INI GANJIL!\n");
				}

			if(a2 % 2 != 0){
				printf("INI GANJIL!\n");
				}else{
					printf("INI GENAP!\n");
				}

			return 0;
}
