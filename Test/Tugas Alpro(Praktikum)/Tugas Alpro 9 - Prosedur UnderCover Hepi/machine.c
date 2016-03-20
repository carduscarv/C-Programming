#include "header.h"

/*Prosedur yang digunakan untuk memproses perubahan kata ketika n != 0*/
void changeHepi(int strCount, int n, char strMong[n][64], char charmongStr, char charmongReplace){
	int j,
		k;

	//menukar char yg diminta
	for(j=0; j<strCount; j++){
		for(k=0; k<strlen(strMong[j]); k++){
			if(strMong[j][k] == charmongStr){
				strMong[j][k] = charmongReplace;
			}
		}
	}

	/*Hasil dari prosedur:
		Contoh:
		saat kita menginput,
		you handsome
		2
		y b
		o i

		maka hasilnya:
		bou handsime
	*/

}

/*Prosedur yang aktif ketika n = 0,huruf vokal masing-masing string akan bertukar mengikuti metode loop awal-akhir */
void isZero(int n, char strMong[n][64]){
	char tempAwal;
	char tempAkhir;
	int countChar = -1;
	
	//tukar huruf vokal saat n bernilai 0
	int i=0;
	do{
		if(strMong[0][i] == 'a' || strMong[0][i] == 'i' || strMong[0][i] == 'u' || strMong[0][i] == 'e' || strMong[0][i] == 'o'){
			countChar = i;
		}
		i++;
	}while(countChar == -1);
		

	tempAwal = strMong[0][countChar];

	int j;
	for(i=0; i<n; i++){
		for(j=0; j<strlen(strMong[i]); j++){
			if(strMong[i][j] == 'a' || strMong[i][j] == 'i' || strMong[i][j] == 'u' || strMong[i][j] == 'e' || strMong[i][j] == 'o'){
				tempAkhir = strMong[i][j];
                strMong[i][j] = tempAwal;
                tempAwal = tempAkhir;
			}
		}
	}

	strMong[0][countChar] = tempAwal;
}

	/*Hasil dari prosedur:
		Contoh:
		saat kita menginput,
		you handsome end
		0

		maka hasilnya:
		yeo hundsamo
	*/

/*Prosedur yang dibuat untuk menampilkan output, baik itu kondisi n != 0 maupun n = 0*/
void printHepi(int strCount, int n, char strMong[n][64]){
    int i = 0;
    	
	//kondisi print normal
	while (i < n && i < strCount) {
        printf("%s", strMong[i]);
        if (i < n - 1) {
            printf(" ");
        }
        i++;
    }

    printf("%d", strCount);
   //kondisi print terbalik, yaitu saat n = 0 / special feature
    i = n - 1;
    int j;
    while (i > -1 && strCount == 0) {
        for (j = strlen(strMong[i]) - 1; j >= 0; j--){
            printf("%c", strMong[i][j]);
        }
        
		if (i > 0) {
            printf(" ");
        }
        
       i--;
    }
    printf("\n");
}