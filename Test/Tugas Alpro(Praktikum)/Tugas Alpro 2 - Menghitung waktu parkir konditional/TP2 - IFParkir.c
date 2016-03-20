//Tugas Algoritma dan Pemrograman 1 (TP2)
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

	/*
		Contoh masukan:
		5 >> hari ke
		a >> paket
		10 >> jam masuk
		16 >> jam keluar
		10000 >> uang


		Keluaran:
		jum'at kelabu >> hari dan nama paket
		5000 >> kembalian
		
	*/

#include <stdio.h> //merupakan berkas header standar input output
	int main(){
		//membuat variabel persyaratan
		int hari, jm, jk, uang, jam, harga, hasil;
		char paket;

		//masukkan isi variabel
		scanf("%d", &hari);
		scanf(" %c", &paket);
		scanf("%d", &jm);
		scanf("%d", &jk);
		scanf("%d", &uang);

		//masukkan proses
		if(hari>=1 || hari<=7){
			if(hari==1 && paket=='a'){
				printf("senin kelabu\n");
			}else if(hari==2 && paket=='a'){
				printf("selasa kelabu\n");
			}else if(hari==3 && paket=='a'){
				printf("rabu kelabu\n");
			}else if(hari==4 && paket=='a'){
				printf("kamis kelabu\n");
			}else if(hari==5 && paket=='a'){
				printf("jum'at kelabu\n");
			}else if(hari==6 && paket=='a'){
				printf("sabtu kelabu\n");
			}else if(hari==7 && paket=='a'){
				printf("minggu kelabu\n");
			}else if(hari==1 && paket=='b'){
				printf("senin ceria\n");
			}else if(hari==2 && paket=='b'){
				printf("selasa ceria\n");
			}else if(hari==3 && paket=='b'){
				printf("rabu ceria\n" );
			}else if(hari==4 && paket=='b'){
				printf("kamis ceria\n");
			}else if(hari==5 && paket=='b'){
				printf("jum'at ceria\n");
			}else if(hari==6 && paket=='b'){
				printf("sabtu ceria\n");
			}else if(hari==7 && paket=='b'){
				printf("minggu ceria\n");
			}
	}
		if(jk<jm){
			jam=(jk+24)-jm;
		}else{
		jam=jk-jm;
	}

		if(paket=='a'){
			if(jam>2){
			harga=(1500*2)+((jam-2)*500);
		}else{
			harga=jam*1500;
		}
	}
		if(paket=='b'){
			if(jam>1){
			harga=3000+((jam-1)*1000);
		}else{
			harga=3000;
		}
	}

		int tpajak=harga+(harga/4);

		
		if(hari<=5){
			hasil=(uang-harga);
		}else if(hari>5){
			hasil=uang-tpajak;
		}

		if(hasil<0){
			printf("tidak valid\n");
		}else if(hasil>=0){
			printf("%d\n", hasil);
	}
		

		return 0;
	}

	//Saya Fadhil Farras Haidar N tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Alpro1 dalam mengerjakan TP2, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
