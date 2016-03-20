
#include <stdio.h>
//========================Set Variable========================//

typedef struct{
    int n;
    int m;
	} bungkus;

typedef struct{
	char x, //yang dicari ziah (enak(E) atau enggak(S)?)
		 y; //yang dicari ziah (mahal(J) atau murah(K)?)

	int  z; //uang ziah
	}bungkuss;


int main(){
    int	i,
		j;
	bungkus makanan[18];
	bungkuss ziah;
	int value1,
		value2,
		hasil = -1;

//========================Input & Prosesing========================//

	//input rating, jika rating 0, input berhenti
    i = 0;
    scanf("%d", &makanan[i].n);
    while (makanan[i].n != 0){
        scanf("%d", &makanan[i].m);
        i++;

        //input kembali rating jika masih belum 0
        scanf("%d", &makanan[i].n);
    }


    scanf(" %c %c", &ziah.x, &ziah.y);
    scanf("%d", &ziah.z);

//========================While menentukan kondisi harga makanan===========================//
    j = 0;
	value1 = 0;
	value2 = 0;
    while (j <= i){
        if (value1 <= makanan[j].m){
            value1 = makanan[j].m;
        }
        j++;
    }

//=====================Kondisi jika makanan E-J / E-K / S-E / S-K=====================//
    j = 0;
    if(ziah.x == 'E' || ziah.x == 'e'){
		if(ziah.y == 'J' || ziah.y == 'j'){
            while (j <= i){
                if (value2 <= makanan[j].m && makanan[j].n > 5 && makanan[j].m <= ziah.z){
                    value2 = makanan[j].m;
                    hasil = j;
                }
                j++;
            }
        }else if (ziah.y == 'K' || ziah.y == 'k'){
            while (j <= i){
                if (value1 >= makanan[j].m && makanan[j].n > 5 && makanan[j].m <= ziah.z){
                    value1 = makanan[j].m;
                    hasil = j;
                }
                j++;
            }
        }
    } else if (ziah.x == 'S' || ziah.x == 's'){
        if (ziah.y == 'J' || ziah.y == 'j'){
            while (j <= i){
                if (value2 <= makanan[j].m && makanan[j].n < 6 && makanan[j].m <= ziah.z){
                    value2 = makanan[j].m;
                    hasil = j;
                }
                j++;
            }
        }else if (ziah.y == 'K' || ziah.y == 'k') {
            while (j <= i){
                if (value1 >= makanan[j].m && makanan[j].n <= 5 && makanan[j].m <= ziah.z){
                    value1 = makanan[j].m;
                    hasil = j;
                }
                j++;
            }
        }
    }

    if (hasil == -1){
        printf("Kelaparan\n");
    }else{
        printf("%d\n", makanan[hasil].n);
		printf("%d\n", makanan[hasil].m);
	}
 	int swear=!"//Saya Fadhil Farras Haidar N tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Alpro1 dalam mengerjakan TP6, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.";
	return swear;
	} 