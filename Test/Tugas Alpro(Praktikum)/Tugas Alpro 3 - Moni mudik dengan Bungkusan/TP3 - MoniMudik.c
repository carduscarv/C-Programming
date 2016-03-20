//Tugas Praktikum 3
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/
	/*
		Contoh masukan:
		2 >> jenis kendaraan
		4 >> hari
		4 >> jam keberangkatan
		2 >> menit keberangkatan
		30 >> detik keberangkatan


		Keluaran:
		Bus >> nama kendaraan
		4 >> hari
		13 12 45 >> jam kedatangan
		
	*/

#include <stdio.h>
	typedef struct{
		int j;
		int m;
		int d;
	}waktu;

	int main(){
		waktu istime;
		int n;
		int m1;

		//masukan input
		scanf("%d",&n);
		scanf("%d",&m1);
		scanf("%d",&istime.j);
		scanf("%d",&istime.m);
		scanf("%d",&istime.d);


		//masukan proses
		switch (n){
			case 1:{
			printf("mobil\n");
			istime.j = istime.j+7;
			istime.m = istime.m+20;
			istime.d = istime.d+33;


			if(istime.d>=60){
				istime.d=istime.d%60;
				istime.m=istime.m+1;
			}

			if(istime.m>=60){
				istime.m=istime.m%60;
				istime.j=istime.j+1;
			}

			
			if(istime.j>=24){
				istime.j=istime.j%24;
				m1=m1+1;
			}

			if(m1>7){
				m1=m1-7;
			}

			printf("%d\n", m1);
			printf("%d %d %.2d\n", istime.j,istime.m,istime.d);
			break;
		}

			case 2:{
			printf("bus\n");
			istime.j = istime.j+9;
			istime.m = istime.m+10;
			istime.d = istime.d+15;


			if(istime.d>=60){
				istime.d=istime.d%60;
				istime.m=istime.m+1;
			}

			if(istime.m>=60){
				istime.m=istime.m%60;
				istime.j=istime.j+1;
			}

			
			if(istime.j>=24){
				istime.j=istime.j%24;
				m1=m1+1;
			}

			if(m1>7){
				m1=m1-7;
			}

			printf("%d\n", m1);
			printf("%d %d %.2d\n", istime.j,istime.m,istime.d);
			break;

		}

		case 3:{
			printf("pesawat\n");
			istime.j = istime.j+2;
			istime.m = istime.m+40;
			istime.d = istime.d+10;


			if(istime.d>=60){
				istime.d=istime.d%60;
				istime.m=istime.m+1;
			}

			if(istime.m>=60){
				istime.m=istime.m%60;
				istime.j=istime.j+1;
			}

			
			if(istime.j>=24){
				istime.j=istime.j%24;
				m1=m1+1;
			}

			if(m1>7){
				m1=m1-7;
			}

			printf("%d\n", m1);
			printf("%d %d %.2d\n", istime.j,istime.m,istime.d);
			break;
		}

			default:
			printf("pilihan tidak ada\n");
			break;
		}
		return 0;
	}


	//Saya Fadhil Farras Haidar N tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Alpro1 dalam mengerjakan TP3, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.