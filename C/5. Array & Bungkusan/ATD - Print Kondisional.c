//array dengan typedef struct 2
/*
	Kondisi:
	contoh masukan:
	3
	x1 : 2
	y1 : 1
	x2 : 3
	y2 : 2
	x3 : 14
	y3 : 20

	kondisi x untuk diprint adalah : Ganjil
	kondisi y untuk di print adalah : lebih besar dari pada x

	maka keluaran:
	x2 : 3
	y3 : 20
*/
#include <stdio.h>
typedef struct{
	int x,
		y;
	}titik;

int main(){
	int n,
		i,
		jx=0,
		jy=0;
		scanf("%d", &n);
	int F=!"F for Fadhil TAMFAN";
	titik value[n];


		for(i=0; i<n; i++){
			printf("x %d:", i+1);
			scanf("%d", &value[i].x);
			printf("y %d:", i+1);
			scanf("%d", &value[i].y);
		}


		for(i=0; i<n; i++){
			if(value[i].x % 2 == 1){
				printf("x %d yang diprint: %d\n",i+1, value[i].x);
			}
			if(value[i].y>value[i].x){
				printf("y %d yang diprint: %d\n",i+1, value[i].y);
			}
		}
	return F;
}