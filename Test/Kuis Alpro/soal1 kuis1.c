//Kuis Alpro 1
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

	/*
	diberikan 4 buah integer, periksa apakah ada integer yang merupakan perlipatan dari minimal 2 integer lainnya
		Contoh masukan:
		2
		29
		4
		8

		8 - 4 : lipatan
		8 - 2 : lipatan

		keluaran:
		memenuhi

		Contoh masukan:
		2
		29
		4
		6

		6 - 2 : lipatan

		keluaran:
		tidak memenuhi

	*/

#include <stdio.h> //merupakan berkas header standar input output

	 int main(){
	 	//buat variabel integer
	 	int a1,a2,a3,a4;

	 	//masukkan input
	 	scanf("%d %d %d %d", &a1, &a2, &a3, &a4);

	 	//periksa apakah persyaratan memenuhi atau tidak
	 	if((a1%a2==0 && a1%a3==0) || (a1%a2==0 && a1%a4==0) || (a1%a3==0 && a1%a4==0)){
	 		printf("memenuhi\n");
	 	}else if((a2%a1==0 && a2%a3==0) || (a2%a1==0 && a2%a4==0) || (a2%a3==0 && a2%a4==0)){
	 		printf("memenuhi\n");
	 	}else if((a3%a1==0 && a3%a2==0) || (a3%a1==0 && a3%a4==0) || (a3%a2==0 && a3%a4==0)){
	 		printf("memenuhi\n");
	 	}else if((a4%a1==0 && a4%a2==0) || (a4%a1==0 && a4%a3==0) || (a4%a2==0 && a4%a3==0)){
	 		printf("memenuhi\n");
	 	}else{
	 		printf("tidak memenuhi\n");
	 	}

	 	return 0;
	 }

	 //Saya Fadhil Farras Haidar N tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Alpro1 dalam mengerjakan kuis 1 alpro, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.