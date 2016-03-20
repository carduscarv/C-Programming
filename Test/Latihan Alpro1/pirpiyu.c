#include <stdio.h>
#include <string.h>

int main(){
	char strmong[100];
	int i, //indeks1
		j, //indeks2
		row, //deret/baris (pascal)
		column, //kolom (pascal)
		interval=1, //range/jarak
		pirpiyu=-1; //variabel penanda (pirpiyu)

		scanf("%s", &strmong);

		/*Segitiga pirpiyu, cara pak raphael akhirnya bisa diimplementasikan*/
		int m = 0;
			row = 0;
			column = 0;

		while(column < strlen(strmong)) {
			row++;
			pirpiyu = pirpiyu + 2;
			column = column + pirpiyu;

		}


		for (i = 0 ; i < row ; i++) {
			for (j = row-1 ; j > i ; j--) {
				printf(" ");
			}
			

			for (j = 0 ; j < interval ; j++) {
				if (m < strlen(strmong)) {

					printf("%c",strmong[m]);

					m++;
			}
		}
		interval = interval + 2;
		printf("\n");
	}
return 0;
}