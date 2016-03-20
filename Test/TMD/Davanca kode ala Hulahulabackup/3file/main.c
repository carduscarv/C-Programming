#include "header.h"

//fungsi inti pemrograman
int main(){
	int i; //variabel indeks

	//masukkan jumlah array of string
	int sumString;
	scanf("%d", &sumString);
	
	//masukkan isi array of string
	char cmdString[sumString][64];
	for(i=0; i<sumString; i++){
		scanf("%s", cmdString[i]);
	}

	///////////////////////////////////////////////////////////////////

	//masukan jumlah string yg akan dipilih
	int sumInt;
	scanf("%d", &sumInt);

	//masukkan angka array of string
	int arrayInt[sumInt];
	for(i=0; i<sumInt; i++){
		scanf("%d", &arrayInt[i]);
	}

	///////////////////////////////////////////////////////////////////

	//masukkan ketebalan pola
	int theBold;
	scanf("%d", &theBold);

	//buat variabel array of string baru untuk memindahkan isi array of string yang terpilih
	char opushonStr[sumInt][64];
	for(i=0; i<sumInt; i++){
		//dengan prosedur, tentukan kata mana saja yg dipilih, lalu pindahkan ke variabel baru
		erabaStr(i, sumString, cmdString, sumInt, arrayInt, opushonStr);
	}

	//test apakah variabel baru tersebut sudah terisi kata atau belum
	/*for(i=0; i<sumInt; i++){
		printf("%s", opushonStr[i]);
	 }*/
	
	///////////////////////////////////////////////////////////////////
	//print kata yg terpilih dengan prosedur
	erabaPrint(sumInt, opushonStr);

	///////////////////////////////////////////////////////////////////

	//prosedur pola dihitung persatuan baris, terdapat lima baris
	gyo1(theBold, sumInt, opushonStr);
	gyo2(theBold, sumInt, opushonStr);
	gyo3(theBold, sumInt, opushonStr);
	gyo4(theBold, sumInt, opushonStr);
	gyo5(theBold, sumInt, opushonStr);

	/*
		kamus variabel/prosedur:
		i: indeks
		sumString: jumlah array of string
		cmdString: isi array of string
		sumInt: jumlah string yg akan dipilih (integer)
		arrayInt: nomor string
		theBold: ketebalan pola
		opushonStr: berisi string2 yg terpilih (opushon=terpilih .jp)
		erabaStr: prosedur pemilihan (eraba=pilih .jp)
		erabaPrint: prosedur print string terpilih (eraba=pilih .jp)
		gyo: prosedur baris (gyo=baris .jp)

	*/


	return 0;
}