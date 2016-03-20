//Nama: Fadhil Farras HN && NIM: 1501496
#include <stdio.h>

int main(){
	 int n; //variabel array 1
	 	 
  		scanf("%d", &n); //batas/jumlah input
  		
  int i, //variabel yang digunakan untuk looping
      value[n]; //jumlah
      


      for(i=0; i<n; i++){
      	scanf("%d", &value[i]);
      }

      int total1 = 0;
      for(i=0; i<n/2; i++){
      	
      		total1 = total1+value[i] ;
      }

	 int m;  //variabel array 2
  		scanf("%d", &m);

  	int value2[m]; //jumlah

      for(i=0; i<m; i++){
      	scanf("%d", &value2[i]);
      }

    int separuh2;
       if ((m!=1)&&(m!=2)) {
		separuh2=m/2;
	} else {
		separuh2=m-1;
	}
	
	int total2 = 0;
	for (i=separuh2;i<m;i++) {
		total2=total2+value2[i];
	}

  		if(total1 == total2){
  			printf("valid\n");
	} else {
		printf("tidak valid\n");
  	}

	return 0;
}