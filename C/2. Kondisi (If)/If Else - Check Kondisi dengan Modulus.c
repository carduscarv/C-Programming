//Tugas Algoritma dan Pemrograman 1 (TP1)
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

#include <stdio.h> //merupakan berkas header standar input output

	 int main(){
	 	int a1,a2,a3,a4;
	 	int t1=0, t2=0;

	 	scanf("%d %d %d %d", &a1,&a2,&a3,&a4);

	 	int h1=a1%a2;
	 	
	 	if(h1==a3){
	 		t1=1;
	 	}if(h1==a4){
	 		t2=1;
	 	}

	 	int hasil=t1+t2;
	 	printf("%d\n",hasil);
	 	
	 	return 0;
	 }