#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]){
	int i,j;
	char strmongdep[99];
	char strmongbel[99];
	int countvoc1=0;
	int countvoc2=0;
	int countkon1=0;
	int countkon2=0;
	char strmongdep2[99];
	char strmongbel2[99];

	scanf("%s %s", &strmongdep, &strmongbel);
	scanf("%s %s", &strmongdep2, &strmongbel2);

	for(i=0; i < strlen(strmongdep); i++){
		if(strmongdep[i] == 'a' || strmongdep[i] == 'i' || strmongdep[i] == 'e' || strmongdep[i] == 'u' || strmongdep[i] == 'o' || strmongdep[i] == 'A' || strmongdep[i] == 'I' || strmongdep[i] == 'E' || strmongdep[i] == 'U' || strmongdep[i] == 'O'){
			countvoc1++;
		}
	}

	for(i=0; i < strlen(strmongdep2); i++){
		if(strmongdep2[i] == 'a' || strmongdep2[i] == 'i' || strmongdep2[i] == 'e' || strmongdep2[i] == 'u' || strmongdep2[i] == 'o' || strmongdep2[i] == 'A' || strmongdep2[i] == 'I' || strmongdep2[i] == 'E' || strmongdep2[i] == 'U' || strmongdep2[i] == 'O'){
			countvoc2++;
		}
	}

	for(i=0; i < strlen(strmongbel); i++){
		if(strmongbel[i] != 'a' && strmongbel[i] != 'i' && strmongbel[i] != 'e' && strmongbel[i] != 'u' && strmongbel[i] != 'o' && strmongbel[i] != 'A' && strmongbel[i] != 'I' && strmongbel[i] != 'E' && strmongbel[i] != 'U' && strmongbel[i] != 'O'){
			countkon1++;
		}
	}

	for(i=0; i < strlen(strmongbel2); i++){
		if(strmongbel2[i] != 'a' && strmongbel2[i] != 'i' && strmongbel2[i] != 'e' && strmongbel2[i] != 'u' && strmongbel2[i] != 'o' && strmongbel2[i] != 'A' && strmongbel2[i] != 'I' && strmongbel2[i] != 'E' && strmongbel2[i] != 'U' && strmongbel2[i] != 'O'){
			countkon2++;
		}
	}

	if(countvoc1 == countvoc2 && countkon1 == countkon2){
		printf("KUA yuk\n");
	}else{
		printf("dadah :)\n");
	}


	return 0;
}