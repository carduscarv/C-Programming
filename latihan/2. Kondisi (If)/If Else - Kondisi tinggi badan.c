//tinggi badan
#include <stdio.h>
	int main(){
		char jk;
		int t;

		scanf(" %c", &jk);
		scanf("%d", &t);

			if((jk=='l') || (jk=='L')){
				if(t>=170){
					printf("lulus\n");
				}else{
					printf("not lulus\n");
				}
			}else if((jk=='p') || (jk=='P')){
				if(t>=160){
					printf("lulus\n");
				}else{
					printf("not lulus\n");
				}
			}
			return 0;
	}