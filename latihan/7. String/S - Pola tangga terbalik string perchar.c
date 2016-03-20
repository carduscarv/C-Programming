//bismillah..
#include <stdio.h>
#include <string.h>

int main() {

	//deklarasi variabel integer masukan
	int n;
	int i, j, sama=0, spasi=0; //deklarasi variabel penghitung
	
	scanf("%d", &n); //masukan jumlah string
	char panitia[n][100]; //deklarasi array of string sebanyak n string
	char fix[500]="\0"; //deklarasi array of char yg akan menampung semua huruf dari array of string
	
	//pengulangan untuk masukan string 
	for(i=0; i<n; i++) {
		scanf("%s", &panitia[i]);
		strcat(fix, panitia[i]); //menambahkan setiap string/kata ke variabel yg akan dibuat pola 
	}
	
	for(i=0; i<n; i++) { //pengulangan
		if(strcmp(panitia[i], panitia[i+1])!=0) { //mengecek apakah ada kata yg sama
			
			j=i+1;
			while(sama==0 && j<n){
				if(strcmp(panitia[i], panitia[j])==0){
					sama=1; //jika ada kata yg sama, nilai sama=1
				} else {
					j++;
				}
			}
		} else {
			sama=1;
		}
	}
	
	if(sama==0 && strlen(fix)%2==0) { //jika tidak ada kata/string yg sama dan jumlah seluruh hurufnya genap, maka print valid dan dibuat pola 
		printf("valid\n");
			//untuk menampilkan huruf2 yg mendatar
			for(j=0; j<strlen(fix)/2; j++) {
				printf("%c", fix[j]);
				spasi++;
			}
			
			printf("\n");
			//membuat pola countdown dengan huruf sisanya
			for(i=strlen(fix)/2; i<strlen(fix); i++) {
				for(j=1; j<spasi; j++) {
					printf(" ");
				}
				
				printf("%c\n", fix[i]);
				spasi--;
			}
	} else {
		printf("tidak valid\n"); //jika ada string/kata yg sama atau jumlah seluruh hurufnya ganjil, tampil tidak valid 
	}
		
return 0;
} //alhamdulillah..
