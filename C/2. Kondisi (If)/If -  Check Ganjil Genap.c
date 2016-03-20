//Tugas Algoritma dan Pemrograman 1 (TP1)
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

#include <stdio.h> //merupakan berkas header standar input output

	 int main(){
	 	int a1,a2,a3;

	 	scanf("%d %d %d", &a1,&a2,&a3);

	 	//masukkan proses
	 	if(a1 % 2 == 0){
	 		printf("%d genap\n",a1);
	 	}else{
	 		printf("%d ganjil\n",a1);
	 	}
	 	
	 	if(a2%2 == 0){
	 		printf("%d genap\n",a2);
	 	}else{
	 		printf("%d ganjil\n",a2);
	 	}

	 	if(a3%2 == 0){
	 		printf("%d genap\n",a3);
	 	}else{
	 		printf("%d ganjil\n",a3);
	 	}
		
		return 0;
	 }