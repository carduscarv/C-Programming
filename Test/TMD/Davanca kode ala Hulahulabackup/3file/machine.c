#include "header.h"

//prosedur pemilihan, pindahkan angka yg ada didalam array of string dengan urutan arrayInt (nomor pilihan user)
void erabaStr(int i, int sumString, char cmdString[sumString][64], int sumInt, int arrayInt[sumInt], char opushonStr[sumInt][64]){
	
		strcpy(opushonStr[i], cmdString[arrayInt[i]-1]);

	}

//prosedur print kata yg terpilih
void erabaPrint(int sumInt, char opushonStr[sumInt][64]){
	int i; //indeks

	for(i=0; i<sumInt; i++){	
		//kondisi dimana print hanya dilakukan untuk kata-kata yg telah ditentukan dalam soal, yaitu kata-kata yg memiliki pola
		if((strcmp(opushonStr[i], "tolong") == 0) || (strcmp(opushonStr[i], "kirim") == 0) 
			|| (strcmp(opushonStr[i], "pasukan") == 0) || (strcmp(opushonStr[i], "aman") == 0) 
			|| (strcmp(opushonStr[i], "masuk") == 0) || (strcmp(opushonStr[i], "kosong") == 0) 
			|| (strcmp(opushonStr[i], "matamata") == 0) || (strcmp(opushonStr[i], "tahan") == 0) 
			|| (strcmp(opushonStr[i], "berita") == 0)){
			//saat print, jika string belum mencapai akhir tetap print spasi
			if(opushonStr[i] != opushonStr[sumInt-1]){
				printf("%s ", opushonStr[i]);
			}
			//tidak perlu spasi saat string mencapai titik akhir
			else{
				printf("%s", opushonStr[i]);
			}
		}
	}
	
	printf("\n");
}

///////////////////////////////////////////////////////////////////////
/////////-----------------------BARIS 1-----------------------/////////
///////////////////////////////////////////////////////////////////////

void gyo1(int theBold, int sumInt, char opushonStr[sumInt][64]){
	int i, //indeks1
		j, //indeks2
		k; //indeks3

	for(j=0; j<theBold; j++){
		for(i=0; i<sumInt; i++){
			
			//pola1: ---
			if(strcmp(opushonStr[i], "tolong") == 0 || strcmp(opushonStr[i], "aman") == 0){
				for(k=0; k<theBold*3; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}else{
						printf("");
					}
				}
				
				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
			}
		
			//pola2: -0-
			else if(strcmp(opushonStr[i], "kirim") == 0 || strcmp(opushonStr[i], "kosong") == 0 || strcmp(opushonStr[i], "matamata") == 0){
				
				for(k=0; k<theBold; k++){
					printf(" ");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}else{
						printf("");
					}
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
				
			}
			//pola3: --0
			else if(strcmp(opushonStr[i], "berita") == 0){
				
				for(k=0; k<theBold*2; k++){
					printf(" ");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
				
			}
			//pola4: 0--
			else if(strcmp(opushonStr[i], "pasukan") == 0 || strcmp(opushonStr[i], "tahan") == 0){
				
				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold*2; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}else{
						printf("");
					}
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
				
			}
			//pola5: 00-
			else if(strcmp(opushonStr[i], "masuk") == 0){
				
				for(k=0; k<theBold*2; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}else{
						printf("");
					}
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
				
			}
		}
		printf("\n");
	}
}
///////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////
/////////-----------------------BARIS 2-----------------------/////////
///////////////////////////////////////////////////////////////////////

void gyo2(int theBold, int sumInt, char opushonStr[sumInt][64]){
	int i, //indeks1
		j, //indeks2
		k; //indeks3

	for(j=0; j<theBold; j++){
		for(i=0; i<sumInt; i++){
			
			//pola1: ---
			if(strcmp(opushonStr[i], "aman") == 0){
				for(k=0; k<theBold*3; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}else{
						printf("");
					}
				}
				
				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
			}
		
			//pola2: -0-
			else if(strcmp(opushonStr[i], "tolong") == 0 || strcmp(opushonStr[i], "tahan") == 0){
				
				for(k=0; k<theBold; k++){
					printf(" ");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}else{
						printf("");
					}
				}
				
				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
				
			}
			//pola3: --0
			else if(strcmp(opushonStr[i], "berita") == 0 || strcmp(opushonStr[i], "masuk") == 0){
				
				for(k=0; k<theBold*2; k++){
					printf(" ");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
				
			}
			//pola4: 0--
			else if(strcmp(opushonStr[i], "pasukan") == 0){
				
				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold*2; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}else{
						printf("");
					}
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
				
			}
			//pola5: -00
			else if(strcmp(opushonStr[i], "kirim") == 0){
				
				for(k=0; k<theBold; k++){
					printf(" ");
				}

				for(k=0; k<theBold*2; k++){
					printf("0");	
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
				
			}
			//pola6: 0-0
			else if(strcmp(opushonStr[i], "matamata") == 0 || strcmp(opushonStr[i], "kosong") == 0){
				
				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					printf(" ");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
				
			}
		}
		printf("\n");
	}
}
///////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////
/////////-----------------------BARIS 3-----------------------/////////
///////////////////////////////////////////////////////////////////////

void gyo3(int theBold, int sumInt, char opushonStr[sumInt][64]){
	int i, //indeks1
		j, //indeks2
		k; //indeks3

	for(j=0; j<theBold; j++){
		for(i=0; i<sumInt; i++){
			
			//pola1: 000
			if(strcmp(opushonStr[i], "tolong") == 0 || strcmp(opushonStr[i], "kirim") == 0){
				for(k=0; k<theBold*3; k++){
					printf("0");
				}
				
				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
			}
		
			//pola2: -0-
			else if(strcmp(opushonStr[i], "matamata") == 0){
				
				for(k=0; k<theBold; k++){
					printf(" ");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}else{
						printf("");
					}
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
				
			}
			
			//pola3: 00-
			else if(strcmp(opushonStr[i], "pasukan") == 0 || strcmp(opushonStr[i], "masuk") == 0){
				
				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}else{
						printf("");
					}
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
				
			}
			//pola4: -00
			else if(strcmp(opushonStr[i], "berita") == 0 || strcmp(opushonStr[i], "aman") == 0 || strcmp(opushonStr[i], "tahan") == 0){
				
				for(k=0; k<theBold; k++){
					printf(" ");
				}

				for(k=0; k<theBold*2; k++){
					printf("0");
						
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
				
			}
			//pola5: 0-0
			else if(strcmp(opushonStr[i], "kosong") == 0){
				
					for(k=0; k<theBold; k++){
						printf("0");
					}

					for(k=0; k<theBold; k++){
						printf(" ");
					}

					for(k=0; k<theBold; k++){
						printf("0");
					}
					
					for(k=0; k<theBold; k++){
						if(opushonStr[i] != opushonStr[sumInt-1]){
							printf(" ");
						}
					}
				
			}
		}
		printf("\n");
	}
}
///////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////
/////////-----------------------BARIS 4-----------------------/////////
///////////////////////////////////////////////////////////////////////

void gyo4(int theBold, int sumInt, char opushonStr[sumInt][64]){
	int i, //indeks1
		j, //indeks2
		k; //indeks3

	for(j=0; j<theBold; j++){
		for(i=0; i<sumInt; i++){
		
			//pola1: -0-
			if(strcmp(opushonStr[i], "tolong") == 0 || strcmp(opushonStr[i], "tahan") == 0){
				
				for(k=0; k<theBold; k++){
					printf(" ");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}else{
						printf("");
					}
				}
				
				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
				
			}
			//pola2: --0
			else if(strcmp(opushonStr[i], "masuk") == 0){
				
				for(k=0; k<theBold*2; k++){
					printf(" ");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
				
			}
			//pola3: -00
			else if(strcmp(opushonStr[i], "kirim") == 0){
				
				for(k=0; k<theBold; k++){
					printf(" ");
				}

				for(k=0; k<theBold*2; k++){
					printf("0");	
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
				
			}
			//pola4: 0-0
			else if(strcmp(opushonStr[i], "berita") == 0 || strcmp(opushonStr[i], "kosong") == 0
					|| strcmp(opushonStr[i], "aman") == 0 || strcmp(opushonStr[i], "pasukan") == 0
					|| strcmp(opushonStr[i], "matamata") == 0){
				
				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					printf(" ");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
				
			}
		}
		printf("\n");
	}
}
///////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////
/////////-----------------------BARIS 5-----------------------/////////
///////////////////////////////////////////////////////////////////////

void gyo5(int theBold, int sumInt, char opushonStr[sumInt][64]){
	int i, //indeks1
		j, //indeks2
		k; //indeks3

	for(j=0; j<theBold; j++){
		for(i=0; i<sumInt; i++){
			
			//pola1: ---
			if(strcmp(opushonStr[i], "tolong") == 0){
				for(k=0; k<theBold*3; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}else{
						printf("");
					}
				}
				
				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
			}
		
			//pola2: -0-
			else if(strcmp(opushonStr[i], "kirim") == 0 || strcmp(opushonStr[i], "kosong") == 0 ||
					strcmp(opushonStr[i], "matamata") == 0 || strcmp(opushonStr[i], "tahan") == 0){
				
				for(k=0; k<theBold; k++){
					printf(" ");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}else{
						printf("");
					}
				}
				
				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
				
			}
			//pola3: -00
			else if(strcmp(opushonStr[i], "berita") == 0 || strcmp(opushonStr[i], "aman") == 0){
				
				for(k=0; k<theBold; k++){
					printf(" ");
				}

				for(k=0; k<theBold*2; k++){
					printf("0");	
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
				
			}
			//pola4: 00-
			else if(strcmp(opushonStr[i], "pasukan") == 0 || strcmp(opushonStr[i], "masuk") == 0){
				
				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}else{
						printf("");
					}
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf(" ");
					}
				}
				
			}
		}
		printf("\n");
	}
}
///////////////////////////////////////////////////////////////////////


