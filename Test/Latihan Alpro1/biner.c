//Tugas Algoritma dan Pemrograman 1 (TP1)
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

#include <stdio.h> //merupakan berkas header standar input output
#include <math.h>

	int main(){
		int bin, des, konv;
		konv=1;
		des=0;
		printf("2");
		scanf("%d",&bin);
		do{
		des+=(bin%2)*konv;
		konv*=2;
		bin/=10;
		}while (bin);
		printf("10\n%d\n",des);
	

	return 0;

}
