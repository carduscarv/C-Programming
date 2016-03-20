//menentukan nilai maksimum
#include <stdio.h>

int main() {
  int n; //variabel array
  		scanf("%d", &n); //batas/jumlah input
  int i, //variabel yang digunakan untuk looping
      value[n]; //jumlah
      for(i=0; i<n; i++){
      	scanf("%d", &value[i]);

      }

      int maks = value[0];

      for(i=1; i<n; i++){
      	if(maks<value[i]){
      		maks=value[i];
      	}
      }

      printf("nilai maks: %d\n", maks);

      return 0;
  }