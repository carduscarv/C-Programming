//check 2 string apa kah sama jumlah vokal atau konsonannya

	/*Contoh masukan:
	 aku
	 alpro

	 aku = 2 vokal, 1 konsonan
	 alpro = 2 vokal 3 konsonan

	 Keluaran:
	 sama vokal


	*/
#include <stdio.h>
#include <string.h>

int main(){
	char string[100];
	char string2[100];

	//variabel index untuk looping
	int i;
		//variabel untuk check string
	int vokal1=0,
		konso1=0,
		vokal2=0,
		konso2=0;


		//input kedua string
		scanf("%s", &string);
		scanf("%s", &string2);

		//proses check konsonan dan vokal string1
		for(i=0; i<strlen(string); i++){
			if(string[i]=='a' || string[i]=='i' || string[i]=='u' || string[i]=='e' || string[i]=='o'){
				vokal1=vokal1+1;
			}else if(string[i]!='a' || string[i]!='i' || string[i]!='u' || string[i]!='e' || string[i]!='o'){
				konso1=konso1+1;
			}
		}

		//proses check konsonan dan vokal string2
		for(i=0; i<strlen(string2); i++){
			if(string2[i]=='a' || string2[i]=='i' || string2[i]=='u' || string2[i]=='e' || string2[i]=='o'){
				vokal2=vokal2+1;
			}else if(string2[i]!='a' || string2[i]!='i' || string2[i]!='u' || string2[i]!='e' || string2[i]!='o'){
				konso2=konso2+1;
			}
		}

		//output sesuai dengan persyaratan
		if(konso1 == konso2){
			printf("sama konsonan\n");
		}else if(vokal1 == vokal2){
			printf("sama vokal\n");
		}else{
			printf("tidak ada yang sama\n");
		}


		int swear=!"Saya Fadhil Farras Haidar N tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Alpro1 dalam mengerjakan Kuis Alpro 2(strlili), jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.";
		return swear;
	}