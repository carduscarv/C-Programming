//Tugas Algoritma dan Pemrograman 1 (TP1)
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

#include <stdio.h> //merupakan berkas header standar input output

	 int main(){
	 	int n,m,p; //jenis domba
	 	int a,b,c; //waktu domba lompat

	 	//Masukkan input
	 	scanf("%d %d %d %d %d %d", &n,&m,&p,&a,&b,&c);

	 	//Masukkan proses
	 	int menit=(n*a)+(m*b)+(p*c);

	 	int jam=menit/60;
	 	int me=menit%60;

	 	//Hasil
	 	printf("%.2d:%.2d:00\n", jam,me);

	 return 0;
	}