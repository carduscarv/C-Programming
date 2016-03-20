//Tugas Algoritma dan Pemrograman 1 (TP1)
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

#include <stdio.h> //merupakan berkas header standar input output

	 int main(){
	int x; 	
	 	
	 	scanf("%d",&x);

	 	//Masukkan proses 	
	 	if(x%2==1){
	 		printf("angka %d merupakan bilangan ganjil\n", x);
	 	}if(x%3==0){
	 		printf("angka %d merupakan kelipatan 3\n", x);
	 	}if(x%5==0){
	 		printf("angka %d merupakan kelipatan 5\n", x);
	 	}if(x>=0){
	 		printf("%d merupakan bilangan positif\n", x);
	 	}
	 	return 0;
	 }