#include <stdio.h>
	
	int main(){

		//membuat tiga kotak karakter
		char c1, c2, c3;
			scanf("%c %c %c", &c1, &c2, &c3);

		//membuat tiga tanda dengan integer
		int t1=0, t2=0, t3=0;
			
			//periksa konsonan
			if((c1 != 'a') && (c1 != 'i') && (c1 != 'u') && (c1 != 'o') && (c1 != 'e')){
				t1 = 1;
			}

			//periksa vokal
			if((c2 == 'a') || (c2 == 'i') || (c2 == 'u') || (c2 == 'o') || (c2 == 'e')){
				t2 = 1;
			}

			//periksa konsonan
			if((c3 != 'a') && (c3 != 'i') && (c3 != 'u') && (c3 != 'o') && (c3 != 'e')){
				t3 = 1;
			}

			//periksa semua persyaratan
			if((t1 == 1) && (t2 == 1) && (t3 == 1)){
				printf("memenuhi syarat\n");
			}else{
				printf("tidak memenuhi syarat");
			}

			return 0;
}