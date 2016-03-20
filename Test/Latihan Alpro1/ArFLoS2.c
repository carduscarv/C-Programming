//ARFLOS2

#include <stdio.h>

int main() {
  int n; //variabel array
  		scanf("%d", &n); //batas/jumlah input
  int i, //variabel yang digunakan untuk looping
      count=0;
  float value[n];
  int values[10];
  int belvalues[10];
  int hasil;

      //Masuk inputan kedalam variabel temporary
      for(i = 0; i < n; i++){ //proses looping
      	scanf("%f", &value[i]);
        values[i] = value[i];
        belvalues[i]=(value[i]-values[i])*1000;
          if(belvalues[i]%2==1){
            belvalues[i]=(belvalues[i]+1)/10;
          }else{
            belvalues[i]=belvalues[i]/10;
          }

          if((values[i] % 2 == 0) && (belvalues[i] % 2 ==1)){
          count++;
        }
      }

        

        if(count >= 3){
          printf("yes\n");
        }else{
          printf("no\n");
        }
      	return 0;
     }