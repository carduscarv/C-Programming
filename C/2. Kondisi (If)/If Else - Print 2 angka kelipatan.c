//Tugas Algoritma dan Pemrograman 1 (TP1)
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

#include <stdio.h> //merupakan berkas header standar input output

	 int main(){
	 	int a1,a2,a3;

	 	scanf("%d %d %d", &a1,&a2,&a3);

	 	if(a1%a2==0){
	 		printf("%d %d\n", a1,a2);
	 	}
	 	if(a1%a3==0){
	 		printf("%d %d\n", a1,a3);
	 	}

	 	if(a2%a1==0){
	 		printf("%d %d\n", a2,a1);
	 	}
	 	if(a2%a3==0){
	 		printf("%d %d\n", a2,a3);
	 	}

	 	if(a3%a1==0){
	 		printf("%d %d\n", a3,a1);
	 	}
	 	if(a3%a2==0){
	 		printf("%d %d\n", a3,a2);
	 	}

	 	return 0;
	 }