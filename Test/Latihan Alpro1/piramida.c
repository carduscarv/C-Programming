//Tugas Piramidasadahurip
/*  Nama:Fadhil Farras Haidar N
  NIM: 1501496
*/

#include <stdio.h>
#include <string.h>
    int main (){
    char c[105];
    int i,a1,a2,a3,panjang,baris,spasi;

        scanf("%s",&c);
        i = 1;
        baris = 1;
        panjang = 1;
//mencari batas kolom dan baris yang diperlukan untuk perulangan mencetak huruf
        while (i<strlen(c))
    {
        panjang++;
        baris+=2;
        i+=baris;
    }
        spasi = panjang-1;

        a3 = 0;
        for(i=0;i<baris;i++){
            for(a1=0;a1<panjang;a1++){
                if(a1<spasi){
                    printf(" ");
                }else{
                //rumus untuk penentuan huruf mana yang akan dicetak
                if(i<=baris/2){
                    a2 = (a1*a1)+a3;
                    a3++;
                }else{
                    a2 = i + (a1*a1) - a3;
                    a3--;
            }
            
            /*pencetakan huruf dan spasi*/
            if(a2<strlen(c)){
                printf("%c",c[a2]);
            }else{
                printf(" ");
            }
        }
    }
    /*menentukan batas pencetakan spasi*/
    if(i<baris/2)
    {
        spasi--;
        a3 = 0;
    }
    else
    {
        spasi++;
        a3 = panjang - spasi - 1;
    }

    printf("\n");
}
return 0 ;
}

//Saya Fadhil Farras Haidar N tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Alpro1 dalam mengerjakan piramida sadahurip, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.