//TP-5 ORAY-ORAYAN
/*perhatian:
-Skrip ini dapat menyebabkan mual
-sakit kepala
-hipertensi
-dan gangguan kehamilan*/

//Nama: Fadhil Farras HN && NIM: 1501496


#include <stdio.h>
int main(){
	 int n, //banyak instruksi
		 m; //banyak langkah
	 int x, y; //koordinat awal oray
	 int i,j; //variabel yang digunakan untuk looping
	 int food[2]; //koordinat makanan
	 char k; //variabel H/V
	 int score=0, mov; //variabel skor dan pergerakan oray
		scanf("%d %d", &x, &y); //masukkan koordinat awal
		scanf("%d", &n); //masukan array instruksi
		

	 int value[n]; //jumlah instruksi

			//loop jumlah instruksi
			for(i=0; i<n; i++){
				scanf("%d", &m); //masukan step oray

				for(j=0; j<m; j++){ //syarat
				 scanf(" %c %d", &k, &mov); //masukan masukan pergerakan oray
			

				//LOGIKA JIKA DAN HANYA JIKA, GA SIH SEBENERNYA CUMA LOGIKA KONJUNGSI MUTLAK YANG DIMASUKAN KEDALAM LOGIKA IMPLIKASI
				 if((k == 'H') || (k == 'h')){
					x= x + mov;
				}else if((k == 'V') || (k == 'v')){
					y = y + mov;
			}
		}
			// masukkan titik makanan oray
			scanf("%d %d", &food[0], &food[1]);

			//rule untuk kondisi makanan oray dan oraynya
			if((x == food[0]) && (y == food[1])){
				value[i] = 1;
			}
		}
			//loop lagi untuk memastikan kondisi sebelumnya
			for (i=0; i<n; i++){
				if(value[i]==1){
					printf("makanan %d\n", i+1); //karena nilai i=0 tambahkan 1
					score=score+1; //buat score dari 0 menjadi 1 poin
				}
			}


			score = score*10; //karena 1 poin berjumlah 10 score, maka kalikan 10

			//tampilkan nilai akhir score
			printf("%d\n", score);

			return 0;

	}

//Saya Fadhil Farras Haidar N tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Alpro1 dalam mengerjakan TP5, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.