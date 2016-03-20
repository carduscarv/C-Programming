//UTS Algoritma dan Pemrograman 1 (ARRBALIK)
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/
#include <stdio.h>

int main(){
	 int n; //variabel array
  		scanf("%d", &n); //batas/jumlah input
  int i, //variabel yang digunakan untuk looping
      value[n]; //jumlah


      for(i=0; i<n; i++){
      	scanf("%d", &value[i]);
      }

      int temp;
      int separuh=n/2;

      for(i=0; i<separuh; i++){
      	temp=value[separuh+i];
      	value[separuh+i]=value[i];
      	value[i]=temp;
}
	for(i=0; i<n; i++){
		printf("%d\n", value[i]);
	}


      return 0;
  }

//Saya Fadhil Farras Haidar N tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Alpro1 dalam mengerjakan UTS, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.