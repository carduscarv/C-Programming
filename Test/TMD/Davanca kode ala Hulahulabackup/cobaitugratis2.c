#include <stdio.h>
#include <string.h>

int markLib(int sumInt, char opushonStr[sumInt][64]){
	int i;
	
	for(i=0; i<sumInt; i++){
		if(strcmp(opushonStr[sumInt-1], "kirim") != 0 && strcmp(opushonStr[sumInt-1], "kosong") != 0 && 
		strcmp(opushonStr[sumInt-1], "matamata") != 0 && strcmp(opushonStr[sumInt-1], "tolong") != 0 && 
		strcmp(opushonStr[sumInt-1], "pasukan") != 0 && strcmp(opushonStr[sumInt-1], "aman") != 0 &&
		strcmp(opushonStr[sumInt-1], "berita") != 0 && strcmp(opushonStr[sumInt-1], "masuk") != 0 && 
		strcmp(opushonStr[sumInt-1], "tahan") != 0){		
			return 1;
		}else{
			return 0;
		}
	}
}

void erabaStr(int i, int sumString, char cmdString[sumString][64], int sumInt, int arrayInt[sumInt], char opushonStr[sumInt][64]){
	
		strcpy(opushonStr[i], cmdString[arrayInt[i]-1]);

	}


void erabaPrint(int sumInt, char opushonStr[sumInt][64], int theBold){
	int i;

	for(i=0; i<sumInt; i++){	
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
	
	for(i=0; i<theBold; i++){
		printf("\n");
	}
}

///////////////////////////////////////////////////////////////////////
/////////-----------------------BARIS 1-----------------------/////////
///////////////////////////////////////////////////////////////////////

void gyo1(int theBold, int sumInt, char opushonStr[sumInt][64], int markUp){
	int i,
		j,
		k;
	int cond;



	for(j=0; j<theBold; j++){
		for(i=0; i<sumInt; i++){

			//kondisi
			// if(opushonStr[i] == opushonStr[sumInt-1]){
			// 	cond=1;
			// }else if(opushonStr[i] == opushonStr[sumInt-2] &&
			// 	(strcmp(opushonStr[sumInt-1], "tolong") == 0 || strcmp(opushonStr[sumInt-1], "aman") == 0)){
			// 	cond=1;
			// }else if(opushonStr[i] == opushonStr[sumInt-3] &&
			// 	(strcmp(opushonStr[sumInt-2], "tolong") == 0 || strcmp(opushonStr[sumInt-2], "aman") == 0)){
			// 	cond=1;
			// }
			// else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
			// 	cond=1;
			// }else{
			// 	cond=0;
			// }
			
			//pola1: --- (this is special gift in this event)
			if(strcmp(opushonStr[i], "tolong") == 0){
				for(k=0; k<theBold*3; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && strcmp(opushonStr[sumInt-1], "aman") == 0){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("-");
					}
				}
				
				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && strcmp(opushonStr[sumInt-1], "aman") == 0){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("_");
					}
				}
			}

			//pola1: --- (this is special gift in this event)
			if(strcmp(opushonStr[i], "aman") == 0){
				for(k=0; k<theBold*3; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && strcmp(opushonStr[sumInt-1], "tolong") == 0){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("-");
					}
				}
				
				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && strcmp(opushonStr[sumInt-1], "tolong") == 0){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("_");
					}
				}
			}
		
			//pola2: -0-
			else if(strcmp(opushonStr[i], "kirim") == 0 || strcmp(opushonStr[i], "kosong") == 0 || strcmp(opushonStr[i], "matamata") == 0){
				
				for(k=0; k<theBold; k++){
					printf("-");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] &&
						(strcmp(opushonStr[sumInt-1], "tolong") == 0 && strcmp(opushonStr[sumInt-2], "aman") == 0)){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-3] &&
						(strcmp(opushonStr[sumInt-2], "tolong") == 0 && strcmp(opushonStr[sumInt-1], "aman") == 0)){
						printf("");
					}
					else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("-");
					}
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] &&
						(strcmp(opushonStr[sumInt-1], "tolong") == 0 && strcmp(opushonStr[sumInt-2], "aman") == 0)){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-3] &&
						(strcmp(opushonStr[sumInt-2], "tolong") == 0 && strcmp(opushonStr[sumInt-1], "aman") == 0)){
						printf("");
					}
					else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("_");
					}
				}
				
			}
			//pola3: --0
			else if(strcmp(opushonStr[i], "berita") == 0){
				
				for(k=0; k<theBold*2; k++){
					printf("-");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf("_");
					}
				}
				
			}
			//pola4: 0--
			else if(strcmp(opushonStr[i], "pasukan") == 0 || strcmp(opushonStr[i], "tahan") == 0){
				
				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold*2; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] &&
						(strcmp(opushonStr[sumInt-1], "tolong") == 0 || strcmp(opushonStr[sumInt-1], "aman") == 0)){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-3] &&
						(strcmp(opushonStr[sumInt-2], "tolong") == 0 || strcmp(opushonStr[sumInt-2], "aman") == 0)){
						printf("");
					}
					else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("-");
					}
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] &&
						(strcmp(opushonStr[sumInt-1], "tolong") == 0 || strcmp(opushonStr[sumInt-1], "aman") == 0)){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-3] &&
						(strcmp(opushonStr[sumInt-2], "tolong") == 0 || strcmp(opushonStr[sumInt-2], "aman") == 0)){
						printf("");
					}
					else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("_");
					}
				}
				
			}
			//pola5: 00-
			else if(strcmp(opushonStr[i], "masuk") == 0){
				
				for(k=0; k<theBold*2; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] &&
						(strcmp(opushonStr[sumInt-1], "tolong") == 0 || strcmp(opushonStr[sumInt-1], "aman") == 0)){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-3] &&
						(strcmp(opushonStr[sumInt-2], "tolong") == 0 || strcmp(opushonStr[sumInt-2], "aman") == 0)){
						printf("");
					}
					else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("-");
					}
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] &&
						(strcmp(opushonStr[sumInt-1], "tolong") == 0 || strcmp(opushonStr[sumInt-1], "aman") == 0)){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-3] &&
						(strcmp(opushonStr[sumInt-2], "tolong") == 0 || strcmp(opushonStr[sumInt-2], "aman") == 0)){
						printf("");
					}
					else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("_");
					}
				}
				
			}
		}
		
		printf("\n");
	}
}
///////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////
/////////-----------------------BARIS 2-----------------------/////////
///////////////////////////////////////////////////////////////////////

void gyo2(int theBold, int sumInt, char opushonStr[sumInt][64], int markUp){
	int i,
		j,
		k;

	for(j=0; j<theBold; j++){
		for(i=0; i<sumInt; i++){

			//conditional
			// if(opushonStr[i] == opushonStr[sumInt-1]){
			// 	printf("");
			// }else if(opushonStr[i] == opushonStr[sumInt-2] &&
			// 	(strcmp(opushonStr[sumInt-1], "aman") == 0)){
			// 	printf("");
			// }else if(opushonStr[i] == opushonStr[sumInt-3] &&
			// 	(strcmp(opushonStr[sumInt-2], "aman") == 0)){
			// 	printf("");
			// }
			// else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
			// 	printf("");
			// }
			
			//pola1: --- (this is special gift in this event)
			if(strcmp(opushonStr[i], "aman") == 0){
				for(k=0; k<theBold*3; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("-");
					}
				}
				
				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("_");
					}
				}
			}
		
			//pola2: -0-
			else if(strcmp(opushonStr[i], "tolong") == 0 || strcmp(opushonStr[i], "tahan") == 0){
				
				for(k=0; k<theBold; k++){
					printf("-");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] &&
						(strcmp(opushonStr[sumInt-1], "aman") == 0)){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-3] &&
						(strcmp(opushonStr[sumInt-2], "aman") == 0)){
						printf("");
					}
					else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("-");
					}
				}
				
				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] &&
						(strcmp(opushonStr[sumInt-1], "aman") == 0)){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-3] &&
						(strcmp(opushonStr[sumInt-2], "aman") == 0)){
						printf("");
					}
					else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("_");
					}
				}
				
			}
			//pola3: --0
			else if(strcmp(opushonStr[i], "berita") == 0 || strcmp(opushonStr[i], "masuk") == 0){
				
				for(k=0; k<theBold*2; k++){
					printf("-");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] &&
						(strcmp(opushonStr[sumInt-1], "aman") == 0)){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-3] &&
						(strcmp(opushonStr[sumInt-2], "aman") == 0)){
						printf("");
					}
					else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("_");
					}
				}
				
			}
			//pola4: 0--
			else if(strcmp(opushonStr[i], "pasukan") == 0){
				
				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold*2; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] &&
						(strcmp(opushonStr[sumInt-1], "aman") == 0)){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-3] &&
						(strcmp(opushonStr[sumInt-2], "aman") == 0)){
						printf("");
					}
					else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("-");
					}
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] &&
						(strcmp(opushonStr[sumInt-1], "aman") == 0)){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-3] &&
						(strcmp(opushonStr[sumInt-2], "aman") == 0)){
						printf("");
					}
					else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("_");
					}
				}
				
			}
			//pola5: -00
			else if(strcmp(opushonStr[i], "kirim") == 0){
				
				for(k=0; k<theBold; k++){
					printf("-");
				}

				for(k=0; k<theBold*2; k++){
					printf("0");	
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] &&
						(strcmp(opushonStr[sumInt-1], "aman") == 0)){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-3] &&
						(strcmp(opushonStr[sumInt-2], "aman") == 0)){
						printf("");
					}
					else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("_");
					}
				}
				
			}
			//pola6: 0-0
			else if(strcmp(opushonStr[i], "matamata") == 0 || strcmp(opushonStr[i], "kosong") == 0){
				
				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					printf("-");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] &&
						(strcmp(opushonStr[sumInt-1], "aman") == 0)){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-3] &&
						(strcmp(opushonStr[sumInt-2], "aman") == 0 && markUp == 1)){
						printf("");
					}
					else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("_");
					}
				}
				
			}
		}
		printf("\n");
	}
}
///////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////
/////////-----------------------BARIS 3-----------------------/////////
///////////////////////////////////////////////////////////////////////

void gyo3(int theBold, int sumInt, char opushonStr[sumInt][64], int markUp){
	int i,
		j,
		k;

	for(j=0; j<theBold; j++){
		for(i=0; i<sumInt; i++){

			//conditional
			// if(opushonStr[i] == opushonStr[sumInt-1]){
			// 	printf("");
			// }else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
			// 	printf("");
			// }else{
			// 	printf("-");
			// }
			
			//pola1: 000
			if(strcmp(opushonStr[i], "tolong") == 0 || strcmp(opushonStr[i], "kirim") == 0){
				for(k=0; k<theBold*3; k++){
					printf("0");
				}
				
				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("_");
					}
				}
			}
		
			//pola2: -0-
			else if(strcmp(opushonStr[i], "matamata") == 0){
				
				for(k=0; k<theBold; k++){
					printf("-");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("-");
					}
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("_");
					}
				}
				
			}
			
			//pola3: 00-
			else if(strcmp(opushonStr[i], "pasukan") == 0 || strcmp(opushonStr[i], "masuk") == 0){
				
				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("-");
					}
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("_");
					}
				}
				
			}
			//pola4: -00
			else if(strcmp(opushonStr[i], "berita") == 0 || strcmp(opushonStr[i], "aman") == 0 || strcmp(opushonStr[i], "tahan") == 0){
				
				for(k=0; k<theBold; k++){
					printf("-");
				}

				for(k=0; k<theBold*2; k++){
					printf("0");
						
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("_");
					}
				}
				
			}
			//pola5: 0-0
			else if(strcmp(opushonStr[i], "kosong") == 0){
				
					for(k=0; k<theBold; k++){
						printf("0");
					}

					for(k=0; k<theBold; k++){
						printf("-");
					}

					for(k=0; k<theBold; k++){
						printf("0");
					}
					
					for(k=0; k<theBold; k++){
						if(opushonStr[i] == opushonStr[sumInt-1]){
							printf("");
						}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
							printf("");
						}else{
							printf("-");
						}
					}
				
			}
		}
		printf("\n");
	}
}
///////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////
/////////-----------------------BARIS 4-----------------------/////////
///////////////////////////////////////////////////////////////////////

void gyo4(int theBold, int sumInt, char opushonStr[sumInt][64], int markUp){
	int i,
		j,
		k;

	for(j=0; j<theBold; j++){
		for(i=0; i<sumInt; i++){
		
			//pola1: -0-
			if(strcmp(opushonStr[i], "tolong") == 0 || strcmp(opushonStr[i], "tahan") == 0){
				
				for(k=0; k<theBold; k++){
					printf("-");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("-");
					}
				}
				
				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("-");
					}
				}
				
			}
			//pola2: --0
			else if(strcmp(opushonStr[i], "masuk") == 0){
				
				for(k=0; k<theBold*2; k++){
					printf("-");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("-");
					}
				}
				
			}
			//pola3: -00
			else if(strcmp(opushonStr[i], "kirim") == 0){
				
				for(k=0; k<theBold; k++){
					printf("-");
				}

				for(k=0; k<theBold*2; k++){
					printf("0");	
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("-");
					}
				}
				
			}
			//pola4: 0-0
			else if(strcmp(opushonStr[i], "berita") == 0 || strcmp(opushonStr[i], "kosong") == 0
					|| strcmp(opushonStr[i], "aman") == 0 || strcmp(opushonStr[i], "pasukan") == 0
					|| strcmp(opushonStr[i], "matamata") == 0){
				
				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					printf("-");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("-");
					}
				}
				
			}
		}
		printf("\n");
	}
}
///////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////
/////////-----------------------BARIS 5-----------------------/////////
///////////////////////////////////////////////////////////////////////

void gyo5(int theBold, int sumInt, char opushonStr[sumInt][64], int markUp){
	int i,
		j,
		k;

	for(j=0; j<theBold; j++){
		for(i=0; i<sumInt; i++){

			// if(opushonStr[i] == opushonStr[sumInt-1]){
			// 	printf("");
			// }else if(opushonStr[i] == opushonStr[sumInt-2] &&
			// 	(strcmp(opushonStr[sumInt-1], "aman") == 0)){
			// 	printf("");
			// }else if(opushonStr[i] == opushonStr[sumInt-3] &&
			// 	(strcmp(opushonStr[sumInt-2], "aman") == 0)){
			// 	printf("");
			// }
			// else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
			// 	printf("");
			// }
			// else{
			// 	printf("-");
			// }
			
			//pola1: --- (this is special gift in this event)
			if(strcmp(opushonStr[i], "tolong") == 0){
				for(k=0; k<theBold*3; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("-");
					}
				}
				
				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("_");
					}
				}
			}
		
			//pola2: -0-
			else if(strcmp(opushonStr[i], "kirim") == 0 || strcmp(opushonStr[i], "kosong") == 0 ||
					strcmp(opushonStr[i], "matamata") == 0 || strcmp(opushonStr[i], "tahan") == 0){
				
				for(k=0; k<theBold; k++){
					printf("-");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] &&
						(strcmp(opushonStr[sumInt-1], "tolong") == 0)){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-3] &&
						(strcmp(opushonStr[sumInt-2], "tolong") == 0)){
						printf("");
					}
					else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("-");
					}
				}
				
				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] &&
						(strcmp(opushonStr[sumInt-1], "tolong") == 0)){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-3] &&
						(strcmp(opushonStr[sumInt-2], "tolong") == 0)){
						printf("");
					}
					else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("-");
					}
				}
				
			}
			//pola3: -00
			else if(strcmp(opushonStr[i], "berita") == 0 || strcmp(opushonStr[i], "aman") == 0){
				
				for(k=0; k<theBold; k++){
					printf("-");
				}

				for(k=0; k<theBold*2; k++){
					printf("0");	
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] != opushonStr[sumInt-1]){
						printf("_");
					}
				}
				
			}
			//pola4: 00-
			else if(strcmp(opushonStr[i], "pasukan") == 0 || strcmp(opushonStr[i], "masuk") == 0){
				
				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					printf("0");
				}

				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] &&
						(strcmp(opushonStr[sumInt-1], "tolong") == 0)){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-3] &&
						(strcmp(opushonStr[sumInt-2], "tolong") == 0)){
						printf("");
					}
					else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("-");
					}
				}
					
				for(k=0; k<theBold; k++){
					if(opushonStr[i] == opushonStr[sumInt-1]){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-2] &&
						(strcmp(opushonStr[sumInt-1], "tolong") == 0)){
						printf("");
					}else if(opushonStr[i] == opushonStr[sumInt-3] &&
						(strcmp(opushonStr[sumInt-2], "tolong") == 0)){
						printf("");
					}
					else if(opushonStr[i] == opushonStr[sumInt-2] && markUp == 1){		
						printf("");
					}
					else{
						printf("_");
					}
				}
				
			}
		}
		printf("\n");
	}
}
///////////////////////////////////////////////////////////////////////


int main(){
	int i;

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

	char opushonStr[sumInt][64];
	for(i=0; i<sumInt; i++){
		erabaStr(i, sumString, cmdString, sumInt, arrayInt, opushonStr);
	}

	// for(i=0; i<sumInt; i++){
	// 	printf("%s", opushonStr[i]);
	// }
	int markUp;
	markUp = markLib(sumInt, opushonStr);
	// printf("%d", markUp);
	
	erabaPrint(sumInt, opushonStr, theBold);

	gyo1(theBold, sumInt, opushonStr, markUp);
	gyo2(theBold, sumInt, opushonStr, markUp);
	gyo3(theBold, sumInt, opushonStr, markUp);
	gyo4(theBold, sumInt, opushonStr, markUp);
	gyo5(theBold, sumInt, opushonStr, markUp);


	return 0;
}