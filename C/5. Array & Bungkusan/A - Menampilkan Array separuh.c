//tampilkan separuh
#include <stdio.h>

int main() {
  int n; //variabel array
      scanf("%d", &n); //batas/jumlah input
  int value[n], //variabel yang digunakan untuk looping
      i; //jumlah

      //Masuk inputan kedalam variabel temporary
      for (i = 0; i < n; i++) { //proses looping
        scanf("%d", &value[i]);
      }

      for (i=0; i < (n/2); i++){
          printf("%d\n", value[i]);


      }
        return 0;
     }