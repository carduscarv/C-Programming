#include <stdio.h>
#include <string.h>
int i,
	j,
	k;

void gyo1(int bold, int n, char cmdString[n][18]){

	for(j=0; j<bold; j++){
		for(i=0; i<n; i++){
			if(strcmp(cmdString[i], "tolong") == 0 || strcmp(cmdString[i], "aman") == 0){
				for(k=0; k<bold*3; k++){
					printf("-");
				}
				
				for(k=0; k<bold; k++){
					if(cmdString[i] != cmdString[n-1]){
						printf("_");
					}
				}
			}
		
			//pola2
			else if(strcmp(cmdString[i], "kirim") == 0 || strcmp(cmdString[i], "kosong") == 0 || strcmp(cmdString[i], "matamata") == 0){
				
					for(k=0; k<bold; k++){
						printf("-");
					}

					for(k=0; k<bold; k++){
						printf("0");
					}

					for(k=0; k<bold; k++){
						printf("-");
					}
					
					for(k=0; k<bold; k++){
						if(cmdString[i] != cmdString[n-1]){
							printf("_");
						}
					}
				
			}
			//pola 3
			else if(strcmp(cmdString[i], "berita") == 0){
				
					for(k=0; k<bold*2; k++){
						printf("-");
					}

					for(k=0; k<bold; k++){
						printf("0");
					}
					
					for(k=0; k<bold; k++){
						if(cmdString[i] != cmdString[n-1]){
							printf("_");
						}
					}
				
			}
			//pola 4
			else if(strcmp(cmdString[i], "pasukan") == 0 || strcmp(cmdString[i], "tahan") == 0){
				
					for(k=0; k<bold; k++){
						printf("0");
					}

					for(k=0; k<bold*2; k++){
						printf("-");
					}
					
					for(k=0; k<bold; k++){
						if(cmdString[i] != cmdString[n-1]){
							printf("_");
						}
					}
				
			}
			//pola 5
			else if(strcmp(cmdString[i], "masuk") == 0){
				
					for(k=0; k<bold*2; k++){
						printf("0");
					}

					for(k=0; k<bold; k++){
						printf("-");
					}
					for(k=0; k<bold; k++){
						if(cmdString[i] != cmdString[n-1]){
							printf("_");
						}
					}
				
			}
		}
		printf("\n");
	}
}

int main(){
	int bold;
	scanf("%d", &bold);

	int n;
	scanf("%d", &n);
	char cmdString[n][18];
	for(i=0; i<n; i++){
		scanf("%s", &cmdString[i]);
	}

	// for(i=0; i<bold; i++){
	// 	for(j=0; j<bold*2; j++){
	// 		printf("-");
	// 	}
	// 	for(j=0; j<bold; j++){
	// 		printf("0");
	// 	}

	// 	for(j=0; j<bold; j++){
	// 		printf("0");
	// 	}
	// 	for(j=0; j<bold*2; j++){
	// 		printf("-");
	// 	}

	// 	printf("\n");
	// }

	gyo1(bold, n, cmdString);

		


	return 0;
}

/*

tolong:
---
-0-
000
-0-
---

kirim:
-0-
-00
000
-00
-0-

berita:
--0
--0
-00
0-0
-00

kosong:
-0-
0-0
0-0
0-0
-0-

matamata:
-0-
0-0
-0-
0-0
-0-

pasukan:
0--
0--
00-
0-0
00-

aman:
---
---
-00
0-0
-00

masuk:
00-
--0
00-
--0
00-

tahan:
0--
-0-
-00
-0-
-0-

*/