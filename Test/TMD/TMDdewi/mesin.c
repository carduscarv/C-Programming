#include "header.h"
//perbaris mendatar /horizontal kekanan
//baris pertama nich
void keluaran(int n, int x, int k, int n_banyak, char banyakpesan[]){
	int j; //x itu ketebalan polanya
	//Tolong (yang diminta soal)
	if(strcmp(banyakpesan, "tolong")==0){
		for(j=0; j<x; j++){ //ketebalan 2
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris pertama nich
	//Kirim (yang diminta soal)
	else if(strcmp(banyakpesan, "kirim")==0){
		for(j=0; j<x; j++){ //kelipatan 2
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris pertama nich
	//Berita
	else if(strcmp(banyakpesan, "berita")==0){
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris pertama nich
	//Kosong
	else if(strcmp(banyakpesan, "kosong")==0){
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris pertama nich
	//Matamata
	else if(strcmp(banyakpesan, "matamata")==0){
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris pertama nich
	//Pasukan (yang diminta soal)
	else if(strcmp(banyakpesan, "pasukan")==0){
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris pertama nich
	//Aman
	else if(strcmp(banyakpesan, "aman")==0){
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris pertama nich
	//Masuk
	else if(strcmp(banyakpesan, "masuk")==0){
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris pertama nich
	//Tahan
	else if(strcmp(banyakpesan, "tahan")==0){
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	
}
//---------------------------------------------------------------------
//baris kedua nich
void keluaran2(int n, int x,int k, int n_banyak, char banyakpesan[]){
	int j; 
	//Tolong (yang diminta soal)
	if(strcmp(banyakpesan, "tolong")==0){
		for(j=0; j<x; j++){ //ketebalan 2
			//if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		//}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris kedua nich
	//Kirim (yang diminta soal)
	else if(strcmp(banyakpesan, "kirim")==0){
		for(j=0; j<x; j++){ //kelipatan 2
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris kedua nich
	//Berita
	else if(strcmp(banyakpesan, "berita")==0){
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris kedua nich
	//Kosong
	else if(strcmp(banyakpesan, "kosong")==0){
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris kedua nich
	//Matamata
	else if(strcmp(banyakpesan, "matamata")==0){
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris kedua nich
	//Pasukan (yang diminta soal)
	else if(strcmp(banyakpesan, "pasukan")==0){
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris kedua nich
	//Aman
	else if(strcmp(banyakpesan, "aman")==0){
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris kedua nich
	//Masuk
	else if(strcmp(banyakpesan, "masuk")==0){
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris kedua nich
	//Tahan
	else if(strcmp(banyakpesan, "tahan")==0){
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	
}
//----------------------------------------------------------
//---------------------------------------------------------------------
//baris ketiga nich
void keluaran3(int n, int x,int k, int n_banyak, char banyakpesan[]){
	int j; 
	//Tolong (yang diminta soal)
	if(strcmp(banyakpesan, "tolong")==0){
		for(j=0; j<x; j++){ //ketebalan 2
			printf("0");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris ketiga nich
	//Kirim (yang diminta soal)
	else if(strcmp(banyakpesan, "kirim")==0){
		for(j=0; j<x; j++){ //kelipatan 2
			printf("0");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris ketiga nich
	//Berita
	else if(strcmp(banyakpesan, "berita")==0){
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris ketiga nich
	//Kosong
	else if(strcmp(banyakpesan, "kosong")==0){
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris ketiga nich
	//Matamata
	else if(strcmp(banyakpesan, "matamata")==0){
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris ketiga nich
	//Pasukan (yang diminta soal)
	else if(strcmp(banyakpesan, "pasukan")==0){
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris ketiga nich
	//Aman
	else if(strcmp(banyakpesan, "aman")==0){
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris ketiga nich
	//Masuk
	else if(strcmp(banyakpesan, "masuk")==0){
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris ketiga nich
	//Tahan
	else if(strcmp(banyakpesan, "tahan")==0){
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	
}

//---------------------------------------------------------------------
//baris keempat nich
void keluaran4(int n, int x,int k, int n_banyak, char banyakpesan[]){
	int j; 
	//Tolong (yang diminta soal)
	if(strcmp(banyakpesan, "tolong")==0){
		for(j=0; j<x; j++){ //ketebalan 2
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris keempat nich
	//Kirim (yang diminta soal)
	else if(strcmp(banyakpesan, "kirim")==0){
		for(j=0; j<x; j++){ //kelipatan 2
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris keempat nich
	//Berita
	else if(strcmp(banyakpesan, "berita")==0){
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris keempat nich
	//Kosong
	else if(strcmp(banyakpesan, "kosong")==0){
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris keempat nich
	//Matamata
	else if(strcmp(banyakpesan, "matamata")==0){
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris keempat nich
	//Pasukan (yang diminta soal)
	else if(strcmp(banyakpesan, "pasukan")==0){
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris keempat nich
	//Aman
	else if(strcmp(banyakpesan, "aman")==0){
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris keempat nich
	//Masuk
	else if(strcmp(banyakpesan, "masuk")==0){
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris keempat nich
	//Tahan
	else if(strcmp(banyakpesan, "tahan")==0){
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	
}

//---------------------------------------------------------------------
//baris kelima nich
void keluaran5(int n, int x,int k, int n_banyak, char banyakpesan[]){
	int j; 
	//Tolong (yang diminta soal)
	if(strcmp(banyakpesan, "tolong")==0){
		for(j=0; j<x; j++){
		if(k < n_banyak - 1){ //ketebalan 2
			printf(" ");
		}
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris kelima nich
	//Kirim (yang diminta soal)
	else if(strcmp(banyakpesan, "kirim")==0){
		for(j=0; j<x; j++){ //kelipatan 2
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris kelima nich
	//Berita
	else if(strcmp(banyakpesan, "berita")==0){
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris kelima nich
	//Kosong
	else if(strcmp(banyakpesan, "kosong")==0){
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris kelima nich
	//Matamata
	else if(strcmp(banyakpesan, "matamata")==0){
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris kelima nich
	//Pasukan (yang diminta soal)
	else if(strcmp(banyakpesan, "pasukan")==0){
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris kelima nich
	//Aman
	else if(strcmp(banyakpesan, "aman")==0){
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris kelima nich
	//Masuk
	else if(strcmp(banyakpesan, "masuk")==0){
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan/
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	//baris kelima nich
	//Tahan
	else if(strcmp(banyakpesan, "tahan")==0){
		for(j=0; j<x; j++){
			printf(" ");
		}
		for(j=0; j<x; j++){
			printf("0");
		}
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){
			printf(" ");
		}
		}
		//spasi garis transparan
		for(j=0; j<x; j++){
			if(k < n_banyak - 1){ //menghilangkan spasi nya
				printf(" ");
			}
		}
	}
	
}
