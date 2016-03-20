//menyamakan banyaknya ganjil genap, jika sama valid
#include <stdio.h>

int main(){
	 int n; //variabel array
  		scanf("%d", &n); //batas/jumlah input
  int i, //variabel yang digunakan untuk looping
      value[n]; //jumlah

      for(i=0; i<n; i++){
      	scanf("%d", &value[i]);
      }

      //proses
    int ganjil=0;
    int genap=0;
      for(i=0; i<n; i++){
      	if(value[i]%2==0){
      		genap++;
      	}else{
      		ganjil++;
      	}

      }

      if(genap == ganjil){
      	printf("valid\n");
      	printf("%d\n", genap);
      }else{
      	printf("tidak valid\n");
      	printf("ganjil: %d\n", ganjil);
      	printf("genap: %d\n", genap);
      }

      return 0;
  }