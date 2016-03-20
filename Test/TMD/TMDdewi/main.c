#include "header.h"
/*Saya [Dewi Arni Sari] tidak melakukan kecurangan yang dispesifikasikan pada tugas
masa depan Algoritma dan Pemrograman I pada saat mengerjakan Tugas Masa
Depan Algoritma dan Pemrograman I. Jika saya melakukan kecurangan maka
Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya.
Aamiin.*/
//ini main
int main(){
	int n; //masukan dari dewi
	scanf("%d", &n); //enter input many of string
	int i; //counter 
	int j; //counter 
	char input[n][100]; //input string 
	for(i=0; i<n; i++){ //enter untuk masukan string
		scanf("%s", &input[i]); 
	}

	int n_banyak; //banyak string real message 
	scanf("%d", &n_banyak); //enter untuk input dari string pesan

	int banyak[n_banyak]; // position of (string) real message
	for(i=0; i<n_banyak; i++){
		scanf("%d", &banyak[i]); //enter input position of (string) real message
	}

	int x; //ketebalan polanya
	scanf("%d", &x); //enter input ketebalan pola
	
	//menampilkan pesan
	char banyakpesan[n_banyak][100]; //string nya nampung real message
	for(i=0; i<n_banyak; i++){
		strcpy(banyakpesan[i], input[banyak[i] - 1]); //real message nya di copy ka tampungan
		if(i == n_banyak - 1){
			printf("%s", banyakpesan[i]);//agar tulisan tolong di atas dan garis dibawah pakai \n
			for(j=0; j<x; j++){
				printf("\n");
			}
		} else {
			printf("%s", banyakpesan[i]);
			
			if(i != n_banyak - 1){
				printf(" ");
			}
		}
	}//menampilkan result of coding
	printf("\n"); 
	
	//for baru untuk manggil prosedur baris pertama
	for(i=0; i<x; i++){
		for(j=0;j<n_banyak;j++){ //mengatur ketebalan
			keluaran(n, x, j, n_banyak, banyakpesan[j]);
		}
		printf("\n");
	}
	
	//for baru untuk manggil prosedur baris kedua
	for(i=0; i<x; i++){
		for(j=0;j<n_banyak;j++){ //mengatur ketebalan
			keluaran2(n, x,j, n_banyak, banyakpesan[j]);
		}
		printf("\n");
		
	}
	//for baru untuk manggil prosedur baris ketiga
	for(i=0; i<x; i++){
		for(j=0;j<n_banyak;j++){ //mengatur ketebalan
			keluaran3(n, x,j, n_banyak, banyakpesan[j]);
		}
		printf("\n");
		
	}
	//for baru untuk manggil prosedur baris keempat
	for(i=0; i<x; i++){
		for(j=0;j<n_banyak;j++){ //mengatur ketebalan
			keluaran4(n, x,j, n_banyak, banyakpesan[j]);
		}
		printf("\n");
		
	}
	//for baru untuk manggil prosedur baris kelima
	for(i=0; i<x; i++){
		for(j=0;j<n_banyak;j++){ //mengatur ketebalan
			keluaran5(n, x,j, n_banyak, banyakpesan[j]);
		}
		printf("\n");
		
	}
	
	
	
	//for untuk ketebalan
	//i utk ketebalan
	//j -> n_banyak
	
	
	return 0;
}