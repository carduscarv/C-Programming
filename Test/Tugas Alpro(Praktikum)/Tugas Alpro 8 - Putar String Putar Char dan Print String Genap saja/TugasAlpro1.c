//Tugas Algoritma dan Pemrograman 1 (TP1)
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

#include <stdio.h> //merupakan berkas header standar input output

	 int main(){
		int angka; //variabel dengan jenis integer untuk memasukkan data angka yang dibutuhkan
		int angka1; //variabel dari angka pertama yang diinput
		int angka2; //variabel dari angka kedua yang diinput
		int angka3; //variabel dari angka ketiga yang diinput
		int angka4; //variabel dari angka keempat yang diinput
		int hasil; //variabel yang merupakan output dari masukkan variabel angka yang telah diolah
		int h; //variabel untuk konversi hitungan jam
		int m; // variabel untuk konversi hitungan menit
		int s; //variabel untuk konversi hitungan detik

		//meminta masukkan angka yang dibutuhkan
		scanf("%d", &angka);

		//Mengolah masukkan menjadi keluaran yang hasilnya merupakkan anti masukkan/terbalik
		angka1=angka/1000;
		angka2=(angka-angka1*1000)/100;
		angka3=(angka-(angka1*1000)-(angka2*100))/10;
		angka4=angka-(angka1*1000)-(angka2*100)-(angka3*10);

		hasil=(angka4*1000)+(angka3*100)+(angka2*10)+angka1;
		

		//rumus yang digunakan untuk konversi dari angka yang sudah dibalik menjadi hitungan jam
			h = hasil/(60*60);
			m = hasil%3600/60;
			s = hasil%3600%60;

		//Hasil akhirnya adalah

		printf("%d\n", hasil);
		printf("%.2d:%.2d:%.2d\n", h,m,s);	

		return 0;	
	}
//Saya Fadhil Farras Haidar N tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Alpro1 dalam mengerjakan TP1, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
