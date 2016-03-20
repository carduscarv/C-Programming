//Latihan Alpro 1 dgcecep
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

#include <stdio.h> //merupakan berkas header standar input output

	int main(){
		//masukkan variabel yang dibutuhkan
		int n, //jumlah domba keseluruhan
			m, //reproduksi domba pertahun
			p, //jumlah domba yang dijual pertahun
			r, //variabel tahun
			i; //variabel looping (iterasi)

		//masukkan input oleh user
			scanf("%d %d %d %d", &n, &m, &p, &r);

		//masukkan proses pe-loopingan domba pertahun
			for (i = 0; i < r; i++){
				n = n + (m*(n/2)); //replace jumlah domba tiap looping pertahun
			}

		//masukkan juga proses pe=loopingan domba setelah domba mulai dijual
			if(r > 2){
				r = r-2;

					for (i=0; i < r; i++){
						n = n-p;
					}
			}

		//print hasil akhir/jumlah domba dihitung tahun
			printf("%d\n", n);

		return 0;
	}

		//Saya Fadhil Farras Haidar N tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Alpro1 dalam mengerjakan dgcecep, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.