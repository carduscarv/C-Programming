//Tugas Algoritma dan Pemrograman 1 (TP1)
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

#include <stdio.h> //merupakan berkas header standar input output

	int main(){

		//variabel integer
		int a,b,c,d,e,f, total;


	 	//masukkan input
	 	scanf("%d\n", &a);
		scanf("%d\n", &b);
		scanf("%d\n", &c);
		scanf("%d\n", &d);
		scanf("%d\n", &e);
		scanf("%d\n", &f);


		 		if((a%d==0 && b%d==0) || (a%e==0 && b%e==0) || (a%f==0 && b%f==0) || (a%d==0 && c%d==0) || (a%e==0 && c%e==0) || (a%f==0 && c%f==0) || (c%d==0 && b%d==0) || (c%e==0 && b%e==0) || (c%f==0 && b%f==0)){
		 			printf("valid\n");
		 		}else{
		 			printf("tidak valid\n");
		 		}

		 return 0;
		 
	}

	//Saya Fadhil Farras Haidar N tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Alpro1 dalam mengerjakan CLOJ, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.