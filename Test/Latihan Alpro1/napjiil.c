//Tugas Algoritma dan Pemrograman 1 (TP1)
/*  Nama:Fadhil Farras Haidar N
  NIM: 1501496
*/

#include <stdio.h>

int main() {
  int value[6], //variabel array 
      i, //variabel yang digunakan untuk looping
      l  = sizeof(value) / sizeof(value[0]), //Variabel operasi unary bilangan
      temp; //variabel temporary, untuk menyimpan angka looping
  int nap = 0, //variabel genap
      jil = 0; //variabel ganjil


      //Masuk inputan kedalam variabel temporary
      for (i = 0; i < l; i++) { //proses looping
        scanf(" %d",&temp);

      //periksa kondisi inputan/temporary
      if (temp % 2 == 0) {
        nap++; //untuk bilangan genap
      if (nap <= 3) {
        value[(nap - 1) * 2] = temp;
        }
      }
      else {
        jil++; //untuk bilangan ganjil

        if (jil <= 3) {
          value[(jil * 2) - 1] = temp;
          }
        }

      }

      //Tampilkan hasil:   
       if (jil > 3 || nap > 3) {
         printf("tidak valid\n");
       }else{
         for (i = 0; i < l; i++) {
           printf("%d\n", value[i]);
         }
       }
      
       return 0;
}

//Saya Fadhil Farras Haidar N tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Alpro1 dalam mengerjakan napjil, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.