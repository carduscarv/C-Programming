#include "header.h"

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

void isZero(int n, char strMong[n][64]){
	char tempChar[2] = {'0'};
	int countChar = -1;
	
	
	int i=0;
	while(countChar == -1){
		if(strMong[0][i] == 'a' || strMong[0][i] == 'i' || strMong[0][i] == 'u' || strMong[0][i] == 'e' || strMong[0][i] == 'o'){
			countChar = i;
		}
		i++;
	}

	tempChar[0] = strMong[0][countChar];

	int j;
	for(i=0; i<n; i++){
		for(j=0; j<strlen(strMong[i]); j++){
			if(strMong[i][j] == 'a' || strMong[i][j] == 'i' || strMong[i][j] == 'u' || strMong[i][j] == 'e' || strMong[i][j] == 'o'){
				tempChar[1] = strMong[i][j];
                strMong[i][j] = tempChar[0];
                tempChar[0] = tempChar[1];
			}
		}
	}

	strMong[0][countChar] = tempChar[0];
}

void printHepi(int strCount, int n, char strMong[n][64]){
    int i = 0;
    	
	while (i < n && strCount) {
        printf("%s", strMong[i]);
        if (i < n - 1) {
            printf(" ");
        }
        i++;
    }


    i = n - 1;
    int j;
    while (i > -1 && strCount == 0) {
        for (j = strlen(strMong[i]) - 1; j >= 0; j--)
        {
            printf("%c", strMong[i][j]);
        }
        if (i > 0) {
            printf(" ");
        }
        i--;
    }
    printf("\n");
}