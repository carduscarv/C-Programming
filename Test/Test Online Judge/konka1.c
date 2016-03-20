//Tugas Algoritma dan Pemrograman 1 (TP1)
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/
	/*
		diberikan 6 buah char.
		Periksa apakah kombinasinya Angka-Huruf atau Huruf-Angka

		Contoh masukan:
		a 2 b 6 f 2

		Keluaran:
		kombinasi valid

		Contoh masukan:
		a 2 b 6 f a

		Keluaran:
		tidak valid
		
	*/

	#include <stdio.h> //merupakan berkas header standar input output

	 int main(){
	 	//Masukkan variabel karakter
	 	char c1, c2, c3, c4, c5, c6;

	 	//meminta masukkan variabel
	 	scanf(" %c", &c1);
		scanf(" %c", &c2);
		scanf(" %c", &c3);
		scanf(" %c", &c4);
		scanf(" %c", &c5);
		scanf(" %c", &c6);

		//membuat enam tanda dengan integer
		int t1=0, t2=0, t3=0, t4=0, t5=0, t6=0;

		//periksa huruf/angka
		if((c1 != '1') && (c1 != '2') && (c1 !='3') && (c1 != '4') && (c1 != '5') && (c1 != '6') && (c1 != '7') && (c1 !='8') && (c1 != '9')){
			t1 = 1;
		}

		//periksa huruf/angka
		if((c2 == '1') || (c2 == '2') || (c2 =='3') || (c2 == '4') || (c2 == '5') || (c2 == '6') || (c2 == '7') || (c2 =='8') || (c2 == '9')){
			t2 = 1;
		}
		
		//periksa huruf/angka
		if((c3 != '1') && (c3 != '2') && (c3 !='3') && (c3 != '4') && (c3 != '5') && (c3 != '6') && (c3 != '7') && (c3 !='8') && (c3 != '9')){
			t3 = 1;
		}

		//periksa huruf/angka
		if((c4 == '1') || (c4 == '2') || (c4 =='3') || (c4 == '4') || (c4 == '5') || (c4 == '6') || (c4 == '7') || (c4 =='8') || (c4 == '9')){
			t4 = 1;
		}

		//periksa huruf/angka
		if((c5 != '1') && (c5 != '2') && (c5 !='3') && (c5 != '4') && (c5 != '5') && (c5 != '6') && (c5 != '7') && (c5 !='8') && (c5 != '9')){
			t5 = 1;
		}

		//periksa huruf/angka
		if((c6 == '1') || (c6 == '2') || (c6 =='3') || (c6 == '4') || (c6 == '5') || (c6 == '6') || (c6 == '7') || (c6 =='8') || (c6 == '9')){
			t6 = 1;
		}

		//periksa persyaratan
			if((t1 == 1) && (t2 == 1) && (t3 == 1) && (t4 == 1) && (t5 == 1) && (t6 == 1)){
				printf("kombinasi valid\n");
			}else if((t1 != 1) && (t2 != 1) && (t3 != 1) && (t4 != 1) && (t5 != 1) && (t6 != 1)){
				printf("kombinasi valid\n");
			}else{
				printf("kombinasi tidak valid\n");
			}


		return 0;	
	}
//Saya Fadhil Farras Haidar N tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Alpro1 dalam mengerjakan latihan judge, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.