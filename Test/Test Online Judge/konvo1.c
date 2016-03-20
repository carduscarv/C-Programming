//Tugas Algoritma dan Pemrograman 1 (TP1)
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

	/*
		diberikan 6 buah char.
		Periksa apakah kombinasinya Vokal-Konsonan atau Konsonan-Vokal

		Contoh masukan:
		a b e v e j

		Keluaran:
		kombinasi valid

		Contoh masukan:
		a b f e e f

		Keluaran:
		tidak valid
		
	*/

#include <stdio.h> //merupakan berkas header standar input output

	int main(){
		//membuat enam kotak karakter
		char c1, c2, c3, c4, c5, c6;
			//Masukkan input karakter
			scanf("%c\n", &c1);
			scanf("%c\n", &c2);
			scanf("%c\n", &c3);
			scanf("%c\n", &c4);
			scanf("%c\n", &c5);
			scanf("%c\n", &c6);

			//membuat enam tanda dengan integer
			int t1=0, t2=0, t3=0, t4=0, t5=0, t6=0;

			//periksa vokal/konsonan
			if((c1 != 'a') && (c1 != 'i') && (c1 != 'u') && (c1 != 'o') && (c1 != 'e')){
				t1 = 1;
			}

			//periksa vokal/konsonan
			if((c2 == 'a') || (c2 == 'i') || (c2 == 'u') || (c2 == 'o') || (c2 == 'e')){
				t2 = 1;
			}

			//periksa vokal/konsonan
			if((c3 != 'a') && (c3 != 'i') && (c3 != 'u') && (c3 != 'o') && (c3 != 'e')){
				t3 = 1;
			}

			//periksa vokal/konsonan
			if((c4 == 'a') || (c4 == 'i') || (c4 == 'u') || (c4 == 'o') || (c4 == 'e')){
				t4 = 1;
			}

			//periksa vokal/konsonan
			if((c5 != 'a') && (c5 != 'i') && (c5 != 'u') && (c5 != 'o') && (c5 != 'e')){
				t5 = 1;
			}

			//periksa vokal/konsonan
			if((c6 == 'a') || (c6 == 'i') || (c6 == 'u') || (c6 == 'o') || (c6 == 'e')){
				t6 = 1;
			}

			//periksa semua persyaratan
			if((t1 == 1) && (t2 == 1) && (t3 == 1) && (t4 == 1) && (t5 == 1) && (t6 == 1)){
				printf("kombinasi valid\n");
			}else if((t1 != 1) && (t2 != 1) && (t3 != 1) && (t4 != 1) && (t5 != 1) && (t6 != 1)){
				printf("kombinasi valid\n");
			}else{
				printf("kombinasi tidak valid\n");
			}

			return 0;
		}
			