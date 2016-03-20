//Latihan Alpro 1 - Alphabet Angka
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

#include <stdio.h> //merupakan berkas header standar input output

	 int main(){
 		char value[6]; //variabel array
    	int	i, //variabel yang digunakan untuk looping
     		l  = sizeof(value) / sizeof(value[0]); //Variabel operasi unary bilangan
      	char temp; //variabel temporary, untuk menyimpan angka looping
 		char angka = 0, //variabel genap
      		 huruf = 0; //variabel ganjil

      		//Masuk inputan kedalam variabel temporary
     		for (i = 0; i < l; i++) { //proses looping
	        scanf(" %c",&temp);

		 	//Masukkan proses
	        if (temp =='0' || temp =='1' || temp =='2' || temp=='3' || temp=='4' || temp =='5' || temp =='6' || temp =='7' || temp =='8' || temp =='9'){
	        	angka++;

	        }else{
	        	huruf++;
	        }
	       }

	 	//Tampilkan hasil:
       if (angka > 3 || huruf > 3) {
         printf("tidak valid\n");
       }else{
         for (i = 0; i < l; i++) {
           printf(" %c\n", value[i]);
         }
       }
       //belum beres

	 return 0;
	}