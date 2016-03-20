//mengitung jumlah minimum dan maksimum
#include <stdio.h>

int main(){
	 int n; //variabel array
  		scanf("%d", &n); //batas/jumlah input
  int i, //variabel yang digunakan untuk looping
      value[n]; //jumlah

      for(i=0; i<n; i++){
      	scanf("%d", &value[i]);
      }
      //--------------MIN PHASE---------------
      int min = 100;
      for(i=0; i<n/2; i++){
      	if(value[i] < min){
      		min=value[i];
      }
  }

      //-------------MAX PHASE----------------
      int max = 0;
      for(i = n/2; i < n; i++){
      	if(value[i] > max){
      		max = value[i];
      	}

      }

      if(min == max){
      	printf("valid\n");
      	printf("%d", min);
      }else{
      	printf("tidak valid\n");
      	printf("%d\n", min);
      	printf("%d\n", max);
      }

	return 0;
}