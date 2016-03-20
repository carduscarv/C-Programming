//menampilkan ganjil saja

#include <stdio.h>

int main() {
  int n; //variabel array
  		scanf("%d", &n); //batas/jumlah input
  int i, //variabel yang digunakan untuk looping
      value[n]; //jumlah

      //Masuk inputan kedalam variabel temporary
      for (i = 0; i < n; i++) { //proses looping
      	scanf("%d", &value[i]);
      }

      for (i=0; i < n; i++){
        if(value[i] % 2 == 1){
          printf("%d\n", value[i]);
        }

      }
      	return 0;
     }