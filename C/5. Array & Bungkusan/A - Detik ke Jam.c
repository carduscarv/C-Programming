#include <stdio.h>
#include <conio.h>
 
int main(){
	int s, //variable detik
		i, //variabel index
		jml[2], //variabel jam dan detik
		waktu[2]={3600,60}; //hitungan waktu

 	//masukkan tampilan
 	printf("Masukan jumlah detik yang mau dihitung : "); 
 	scanf("%d",&s);
		
		//looping
		for(i=0;i<=1;i++){
			jml[i] = s / waktu[i];
			s = s - (waktu[i]*jml[i]);
		}
		
		printf("%.2d : %.2d : %.2d",jml[0],jml[1],s);
 
		getch();
 
	}