//Latihan Alpro 1 fsacil
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

#include <stdio.h> //merupakan berkas header standar input output

	int main(){

		//variabel integer kecil
		int a4,
			a5,
			a6,
		//variabel integer besar (diambil dari float)
			inte1,
			inte2,
			inte3,
		//variabel angka dibelakang float
			koma1,
			koma2,
			koma3;
		//variabel integer kosong
		int t1=0,
			t2=0,
			t3=0;

		//variabel float besar
		float 	a1,
				a2,
				a3;

			//masukkan input dari user
				scanf("%f %f %f %d %d %d", &a1,&a2,&a3,&a4,&a5,&a6);

			//masukkan proses perumusan float dan integer
				inte1=a1;
				koma1=((((a1-inte1)*1000)+1)/10);

				inte2=a2;
				koma2=((((a2-inte2)*1000)+1)/10);
				
				inte3=a3;
				koma3=((((a3-inte3)*1000)+1)/10);

			//masukkan kondisi
				if((inte1 % a4 == 0 && (koma1) % a4 == 0) || (inte1 % a5 == 0 && (koma1) % a5 == 0) || (inte1 % a6 == 0 && (koma1) % a6 == 0)){
					t1 = 1;
				}

				if((inte2 % a4 == 0 && (koma2) % a4 == 0) || (inte2 % a5 == 0 && (koma2) % a5 == 0) || (inte2 % a6 == 0 && (koma2) % a6 == 0)){
					t2 = 1;
				}

				if((inte3 % a4 == 0 && (koma3) % a4 == 0) || (inte3 % a5 == 0 && (koma3) % a5 == 0) || (inte3 % a6 == 0 && (koma3) % a6 == 0)){
					t3 = 1;
				}

				//proses hasil;
				int hasil = t1+t2+t3;

				//kondisi pemenuhan syarat
				if(hasil>=2){
					printf("valid\n");
				}else{
					printf("tidak valid\n");
				}


			return 0;

	}

	//Saya Fadhil Farras Haidar N tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Alpro1 dalam mengerjakan fsacil, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
