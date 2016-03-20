#include <stdio.h>

int main() {
  int n; //variabel array
  		scanf("%d", &n);
  int i, //variabel yang digunakan untuk looping
      value[n]; //jumlah

      //Masuk inputan kedalam variabel temporary
      for (i = 0; i < n; i++) { //proses looping
      	value[i] = i;
      }
      for (i=0; i < n; i++){
      	printf("%d\n", value[i]);
      }
      	return 0;
     }