#include <stdio.h>
#include <string.h>
int i,
	j,
	k;

void gyo1(int theBold, int sumString, char cmdString[sumString][64]){

	for(j=0; j<theBold; j++){
		for(i=0; i<sumString; i++){
			if(strcmp(cmdString[i], "tolong") == 0 || strcmp(cmdString[i], "aman") == 0){
				for(k=0; k<theBold*3; k++){
					printf("-");
				}
				
				for(k=0; k<theBold; k++){
					if(cmdString[i] != cmdString[sumString-1]){
						printf("_");
					}
				}
			}
		
			//pola2
			else if(strcmp(cmdString[i], "kirim") == 0 || strcmp(cmdString[i], "kosong") == 0 || strcmp(cmdString[i], "matamata") == 0){
				
					for(k=0; k<theBold; k++){
						printf("-");
					}

					for(k=0; k<theBold; k++){
						printf("0");
					}

					for(k=0; k<theBold; k++){
						printf("-");
					}
					
					for(k=0; k<theBold; k++){
						if(cmdString[i] != cmdString[sumString-1]){
							printf("_");
						}
					}
				
			}
			//pola 3
			else if(strcmp(cmdString[i], "berita") == 0){
				
					for(k=0; k<theBold*2; k++){
						printf("-");
					}

					for(k=0; k<theBold; k++){
						printf("0");
					}
					
					for(k=0; k<theBold; k++){
						if(cmdString[i] != cmdString[sumString-1]){
							printf("_");
						}
					}
				
			}
			//pola 4
			else if(strcmp(cmdString[i], "pasukan") == 0 || strcmp(cmdString[i], "tahan") == 0){
				
					for(k=0; k<theBold; k++){
						printf("0");
					}

					for(k=0; k<theBold*2; k++){
						printf("-");
					}
					
					for(k=0; k<theBold; k++){
						if(cmdString[i] != cmdString[sumString-1]){
							printf("_");
						}
					}
				
			}
			//pola 5
			else if(strcmp(cmdString[i], "masuk") == 0){
				
					for(k=0; k<theBold*2; k++){
						printf("0");
					}

					for(k=0; k<theBold; k++){
						printf("-");
					}
					for(k=0; k<theBold; k++){
						if(cmdString[i] != cmdString[sumString-1]){
							printf("_");
						}
					}
				
			}
		}
		printf("\n");
	}
}

void erabaStr(int sumString, char cmdString[sumString][64], int sumInt, int arrayInt[sumInt]){
	char opushonStr[sumInt][64];
	for(i=0; i<sumInt; i++){
		strcpy(opushonStr[i], cmdString[arrayInt[i]-1]);

		if((strcmp(opushonStr[i], "tolong") == 0) || (strcmp(opushonStr[i], "kirim") == 0) 
			|| (strcmp(opushonStr[i], "pasukan") == 0) || (strcmp(opushonStr[i], "aman") == 0) 
			|| (strcmp(opushonStr[i], "masuk") == 0) || (strcmp(opushonStr[i], "kosong") == 0) 
			|| (strcmp(opushonStr[i], "matamata") == 0) || (strcmp(opushonStr[i], "tahan") == 0) 
			|| (strcmp(opushonStr[i], "berita") == 0)){
			if(opushonStr[i] != opushonStr[sumInt-1]){
				printf("%s ", opushonStr[i]);
			}else{
				printf("%s", opushonStr[i]);
			}
		}
	}
	printf("\n");

}


int main(){

	int sumString;
	scanf("%d", &sumString);
	
	char cmdString[sumString][64];
	for(i=0; i<sumString; i++){
		scanf("%s", cmdString[i]);
	}

	int sumInt;
	scanf("%d", &sumInt);

	int arrayInt[sumInt];
	for(i=0; i<sumInt; i++){
		scanf("%d", &arrayInt[i]);
	}

	int theBold;
	scanf("%d", &theBold);

	erabaStr(sumString, cmdString, sumInt, arrayInt);
	gyo1(theBold, sumString, cmdString);

	return 0;
}