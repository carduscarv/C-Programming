//Latihan alpro 1 NAPJIL14 (TP1)
/*  Nama:Fadhil Farras Haidar N
  NIM: 1501496
*/

#include <stdio.h>

  int main(){
  	int a1, a2, a3, a4, a5, a6;
  	int genap1=0, genap2=0, genap3=0;
  	int ganjil1=0, ganjil2=0, ganjil3=0;

  	//masukan input
  	scanf("%d %d %d %d %d %d", &a1,&a2,&a3,&a4,&a5,&a6);

  	//proses

  	if(a1%2==0){ //genap
  		if(genap1==0){
  			genap1=a1;
  		}else if(genap2==0){
  			genap2=a1;
  		}else if(genap3==0){
  			genap3=a1;
		}
	}
	else if(a1%2 == 1){ //ganjil
  		if(ganjil1==0){
  			ganjil1=a1;
  		}else if(ganjil2==0){
  			ganjil2=a1;
  		}else if(ganjil3==0){
  			ganjil3=a1;
  		}
  	}


  	if(a2%2==0){ //genap
  		if(genap1==0){
  			genap1=a2;
  		}else if(genap2==0){
  			genap2=a2;
  		}else if(genap3==0){
  			genap3=a2;
		}
	}
	else if(a2%2 == 1){ //ganjil
  		if(ganjil1==0){
  			ganjil1=a2;
  		}else if(ganjil2==0){
  			ganjil2=a2;
  		}else if(ganjil3==0){
  			ganjil3=a2;
  		}
  	}


  	if(a3%2==0){ //genap
  		if(genap1==0){
  			genap1=a3;
  		}else if(genap2==0){
  			genap2=a3;
  		}else if(genap3==0){
  			genap3=a3;
		}
	}
	else if(a3%2 == 1){ //ganjil
  		if(ganjil1==0){
  			ganjil1=a3;
  		}else if(ganjil2==0){
  			ganjil2=a3;
  		}else if(ganjil3==0){
  			ganjil3=a3;
  		}
  	}


  	if(a4%2==0){ //genap
  		if(genap1==0){
  			genap1=a4;
  		}else if(genap2==0){
  			genap2=a4;
  		}else if(genap3==0){
  			genap3=a4;
		}
	}
	else if(a4%2 == 1){ //ganjil
  		if(ganjil1==0){
  			ganjil1=a4;
  		}else if(ganjil2==0){
  			ganjil2=a4;
  		}else if(ganjil3==0){
  			ganjil3=a4;
  		}
  	}

  	if(a5%2==0){ //genap
  		if(genap1==0){
  			genap1=a5;
  		}else if(genap2==0){
  			genap2=a5;
  		}else if(genap3==0){
  			genap3=a5;
		}
	}
	else if(a5%2 == 1){ //ganjil
  		if(ganjil1==0){
  			ganjil1=a5;
  		}else if(ganjil2==0){
  			ganjil2=a5;
  		}else if(ganjil3==0){
  			ganjil3=a5;
  		}
  	}

  	if(a6%2==0){ //genap
  		if(genap1==0){
  			genap1=a6;
  		}else if(genap2==0){
  			genap2=a6;
  		}else if(genap3==0){
  			genap3=a6;
		}
	}
	else if(a6%2 == 1){ //ganjil
  		if(ganjil1==0){
  			ganjil1=a6;
  		}else if(ganjil2==0){
  			ganjil2=a6;
  		}else if(ganjil3==0){
  			ganjil3=a6;
  		}
  	}

  	//masukan output
  	if(genap1!=0 && genap2!=0 && genap3!=0 && ganjil1!=0 && ganjil2!=0 && ganjil3!=0)
  	printf("%d\n%d\n%d\n%d\n%d\n%d\n", genap1,ganjil1,genap2,ganjil2,genap3,ganjil3);

  	return 0;
  }