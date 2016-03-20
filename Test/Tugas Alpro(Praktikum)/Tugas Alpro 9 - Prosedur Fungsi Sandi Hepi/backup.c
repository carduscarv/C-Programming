#include <stdio.h>
#include <string.h>

void changeHepi(int strCount, int n, char strMong[n][64], char charmongStr, char charmongReplace){
	int j,
		k;

	for(j=0; j<strCount; j++){
		for(k=0; k<strlen(strMong[j]); k++){
			if(strMong[j][k] == charmongStr){
				strMong[j][k] = charmongReplace;
			}
		}
	}

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

int main(){
	int i;
	int strCount=0;
	char strMong[64][64];
	scanf("%s", &strMong[0]);

	i=0;
	while(strcmp(strMong[i], "end") != 0){
		i++;
		scanf("%s", strMong[i]);
		strCount++;
	}

	if(strCount > 10){
			strCount = 10;
		}

	int n;
	scanf("%d", &n);
	
	char charmongStr,
		 charmongReplace;
	for(i=0; i<n; i++){
		scanf(" %c %c", &charmongStr, &charmongReplace);
		changeHepi(n, strCount, strMong, charmongStr, charmongReplace);
	}
	
	
	if(n == 0){
		isZero(strCount, strMong);
	}

	printHepi(n, strCount, strMong);

	return 0;
}