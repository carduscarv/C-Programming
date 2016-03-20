//Latihan Alpro 1
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/
#include <stdio.h>
#include <string.h>

int main (){
	int i,
		j,
		n = 0,
		plus = 0;
	
	int libBinary[8];
	
	libBinary[0] = 128;
	libBinary[1] = libBinary[0]/2;
	libBinary[2] = libBinary[1]/2;
	libBinary[3] = libBinary[2]/2;
	libBinary[4] = libBinary[3]/2;
	libBinary[5] = libBinary[4]/2;
	libBinary[6] = libBinary[5]/2;
	libBinary[7] = libBinary[6]/2;

	//masukan input
	char binary[64];
	scanf("%s", &binary);

	//lib string
	char strMong[27]="abcdefghijklmnopqrstuvwxyz ";
	//proses
	for(i = 0 ; i < strlen(binary) ; i++) {
		if(binary[i] == '1'){
			plus = plus + libBinary[n];
		}
		n++;
		
		//saat angka mencapai 8, tentukan huruf
		if (n % 8 == 0){
			printf("%c", strMong[plus-1]);
			
			//reset point
			plus=0;
			n=0;
		}
	}
	printf("\n");


	return 0;
}
