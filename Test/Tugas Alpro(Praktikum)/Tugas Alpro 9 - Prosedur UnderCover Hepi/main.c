#include "header.h"

int main(){
	int i;
	int strCount=0; //variabel penghitung jumlah string
	char strMong[64][64]; //variabel array of string
	
	//input array of string pertama
	scanf("%s", &strMong[0]);

	//ketika input belum mencapai "end" print terus!
	i=0;
	while(strcmp(strMong[i], "end") != 0){
		i++;
		scanf("%s", strMong[i]);
		//selagi print string, variabel penghitung terus bertambah
		strCount++;
	}

	//batas eksekusi print string hanya sebatas 10 string
	if(strCount > 10){
			strCount = 10;
		}

	//input jumlah char diubah dan pengubah
	int n;
	scanf("%d", &n);
	
	char charmongStr,
		 charmongReplace;
	for(i=0; i<n; i++){
		scanf(" %c %c", &charmongStr, &charmongReplace);
		//masukan prosedur pengubah char
		changeHepi(strCount, n, strMong, charmongStr, charmongReplace);
	}
	
	//saat n = 0 aktifkan special feature dengan memanggil prosedurnya
	if(n == 0){
		isZero(strCount, strMong);
	}

	//panggil prosedur print
	printHepi(n, strCount, strMong);

	return 0;
}