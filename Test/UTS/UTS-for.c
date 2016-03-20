//UTS Algoritma dan Pemrograman 1 (Pola Gaun)
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/
#include <stdio.h>

#include <stdio.h>

int main() {
  int n, //range nilai/bintang
    i, //baris
    j; //kolom

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    for(j = n; j > i+1; j--){
      printf(" ");
    }

    for(j=0; j < i; j++){
      printf("*");
    }

    for(j=0; j < n+1; j++){
      printf("*");
    }

    for(j = 0; j < n; j++){
      printf(" ");
    }

    for(j=0; j < n+1; j++){
      printf("*");
    }

    for(j=0; j < i; j++){
      printf("*");
    }

  printf("\n");
  }

  for(i = 0; i < n; i++){

    for(j=0; j < n*2; j++){
      printf(" ");
    }

    for(j=0; j < n; j++){
      printf("*");
    }

  printf("\n");
  }

  for(i = 0; i < n; i++){
    for(j =1; j < n; j++){
      printf(" ");
    }

    for(j = n; j > i; j--){
      printf(" ");
    }

    for(j=0; j < i+1; j++){
      printf("*");
    }

    for(j=0; j < n; j++){
      printf("*");
    }

    for(j=0; j < i+1; j++){
      printf("*");
    }


  printf("\n");
  }


  return 0;
}

//Saya Fadhil Farras Haidar N tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Alpro1 dalam mengerjakan UTS, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.