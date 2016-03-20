//Kuis alpro 1
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

	/*
		diberikan 3 char, print 2 untuk vokal, print 1 untuk konsonan

		Contoh masukan:
		a k u

		keluaran
		2 1 2
		
	*/

#include <stdio.h> //merupakan berkas header standar input output

	 int main(){

	 	//buat 3 char
	 	char c1,c2,c3;

	 	//buat 3 kotak integer kosong
	 	int t1=0, t2=0, t3=0;

	 	//masukkan input
	 	scanf(" %c %c %c", &c1,&c2,&c3);

	 	//masukkan persyaratan
	 	if((c1 == 'a') || (c1 == 'i') || (c1 == 'u') || (c1 == 'o') || (c1 == 'e')){
				t1 = 1;
		}

	 	if((c2 == 'a') || (c2 == 'i') || (c2 == 'u') || (c2 == 'o') || (c2 == 'e')){
				t2 = 1;
		}
	 	
	 	if((c3 == 'a') || (c3 == 'i') || (c3 == 'u') || (c3 == 'o') || (c3 == 'e')){
				t3 = 1;
		}

	 	//masukkan proses
	 	if(t1==1 && t2==1 && t3==1){
	 		printf("2 2 2\n");
	 	}else if(t1==1 && t2==1 && t3==0){
	 		printf("2 2 1\n");
	 	}else if(t1==1 && t2==0 && t3==0){
	 		printf("2 1 1\n");
	 	}else if(t1==0 && t2==0 && t3==0){
	 		printf("1 1 1\n");
	 	}else if(t1==0 && t2==1 && t3==0){
	 		printf("1 2 1\n");
	 	}else if(t1==0 && t2==1 && t3==1){
	 		printf("1 2 2\n");
	 	}else if(t1==0 && t2==0 && t3==1){
	 		printf("1 1 2\n");
	 	}else if(t1==1 && t2==0 && t3==1){
	 		printf("2 1 2\n");

	 	}

	 	return 0;

	 }

	 //Saya Fadhil Farras Haidar N tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Alpro1 dalam mengerjakan kuis alpro 1, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.