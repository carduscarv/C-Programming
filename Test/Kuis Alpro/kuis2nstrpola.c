//membentuk pola huruf n

/*
	Contoh masukan:
	6
	aku adalah anak gembala selalu riang

	Contoh keluaran:
	aku
	a a
	d n
	a a
	l k
	a
	h
	gembala
	s     r
	e     i
	l     a
	a     n
	l     g
	u

	this script isn't correct..
*/

#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	char string[n] [64];
	int i,
		j;

	for(i=0; i<n;i++){
	scanf("%s", &string[i]);
	}

	printf("%s\n", string[0]);
	if(strlen(string[0])%2 == 1){
		for (i=0; i < strlen(string[1]); i++){
				printf("%c", string[1] [i]);

			for(j=0; j < strlen(string[0])-2; j++){
				printf(" ");
			}

			printf("%c", string[2] [i]);
				if(strlen(string[1]) > strlen(string[2])){
				string[2] [i] ='\0';
			}


				printf("\n");
			}

	}
	printf("%s\n", string[3]);
	if(strlen(string[3])%2 == 1){
		for (i=0; i < strlen(string[4]); i++){
				printf("%c", string[4] [i]);

			for(j=0; j < strlen(string[3])-2; j++){
				printf(" ");
			}

				printf("%c", string[5] [i]);
				if(strlen(string[4]) > strlen(string[5])){
				string[5] [i] ='\0';
			}

				printf("\n");
			}
	}

	int swear=!"Saya Fadhil Farras Haidar N tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Alpro1 dalam mengerjakan Kuis Alpro 2(nstrpola), jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.";
	return swear;
}
