//Tugas Latihan online judge 3 ribuan
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

	/*
		diberikan 6 buah float.
		Jika ada minimal 3 integer ribuan. valid

		Contoh masukan:
		2000
		965
		921
		18
		1000
		2871

		yang memenuhi syarat : 1000, 2000, 2871

		Keluaran:
		3 ribuan atau lebih
		
	*/

#include <stdio.h> //merupakan berkas header standar input output

	 int main(){

	 	//membuat enam kotak masukkan bilangan
	 	int a, b, c, d, e, f;

	 	//masukkan input
	 	scanf("%d\n", &a);
		scanf("%d\n", &b);
		scanf("%d\n", &c);
		scanf("%d\n", &d);
		scanf("%d\n", &e);
		scanf("%d\n", &f);

	 	//membuat enam tanda dengan integer
	 	int t1=0, t2=0, t3=0, t4=0, t5=0, t6=0;

	 		//periksa bilangan
	 		if(a >= 999){
	 			t1 = 1;
	 		}

	 		if(b >= 999){
	 			t2 = 1;
	 		}

		 	if(c >= 999){
		 		t3 = 1;
		 	}

		 	if(d >= 999){
		 		t4 = 1;
		 	}

		 	if(e >= 999){
		 		t5 = 1;
		 	}

		 	if(f >= 999){
		 		t6 = 1;
		 	}

		 		//periksa persyaratan
		 		if((t1==1 && t2==1 && t3==1) || (t4==1 && t5==1 && t6==1)){
		 			printf("ribuan 3 atau lebih\n");
		 		}else if((t1==1) && (t2!=1) && (t3==1) && (t4!=1) && (t5==1) && (t6!=1)){
					printf("ribuan 3 atau lebih\n");
		 		}else if((t1!=1) && (t2==1) && (t3!=1) && (t4==1) && (t5!=1) && (t6==1)){
					printf("ribuan 3 atau lebih\n");
		 		}else if((t1==1 && t2==1) && (t3==1 || t4==1 || t5==1 || t6==1)){
		 			printf("ribuan 3 atau lebih\n");
		 		}
		 		else if((t2==1 && t3==1) && (t1==1 || t4==1 || t5==1 || t6==1)){
		 			printf("ribuan 3 atau lebih\n");
		 		}else if((t3==1 && t4==1) && (t1==1 || t2==1 || t5==1 || t6==1)){
		 			printf("ribuan 3 atau lebih\n");
		 		}else if((t4==1 && t5==1) && (t3==1 || t1==1 || t2==1 || t6==1)){
		 			printf("ribuan 3 atau lebih\n");
		 		}else if((t5==1 && t6==1) && (t3==1 || t4==1 || t1==1 || t2==1)){
		 			printf("ribuan 3 atau lebih\n");
		 		}else{
		 			printf("tidak valid\n");
		 		}

		 		return 0;
	 }

//Saya Fadhil Farras Haidar N tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Alpro1 dalam mengerjakan soal online judge, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
