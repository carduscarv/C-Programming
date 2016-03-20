//menghitung jarak 2 titik
//by MONG

#include <stdio.h>
#include <math.h>
	int main(){
		int x1, x2, y1, y2, kuadrat, kuadrat1, kuadrat2;
		float akar;
		
		//Masukkan x1
		printf("Masukkan nilai x1:\n");
		scanf("%d", &x1);
		//Masukkan x2
		printf("Masukkan nilai x2:\n");
		scanf("%d", &x2);
		//Masukkan y1
		printf("Masukkan nilai y1:\n");
		scanf("%d", &y1);
		//Masukkan y2
		printf("Masukkan nilai y2:\n");
		scanf("%d", &y2);
		//hitung
		kuadrat1 = (x1-x2)*(x1-x2);
		akar = sqrt (kuadrat1);
		kuadrat2 = (y1-y2)*(y1-y2);
			int luas = akar + kuadrat2;
			
			//Jumlah
			printf("maka akar dari x1-x2 kuadrat + y1-y2 kuadrat = %d", luas);
			
	return 0;
	
	}