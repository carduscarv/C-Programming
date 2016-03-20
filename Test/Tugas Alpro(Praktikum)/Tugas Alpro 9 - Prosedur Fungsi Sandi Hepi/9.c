#include <stdio.h>
#include <string.h>
int i, j, k, currentLength;

void binRequest(int strCount, int n, char strMong[n][64]) {
    char charmongStr, charmongReplace;

    i = 0;
    while (i < strCount && strCount) {
        scanf(" %c %c", &charmongStr, &charmongReplace);

        for (j = 0; j < n; j += 1) {
            for (k = 0; k < strlen(strMong[j]); k++) {
                if (strMong[j][k] == charmongStr) {
                    strMong[j][k] = charmongReplace;
                }
            }
        }
        i++;
    }
}


void hepiFeature(int n, char strMong[n][64]) {
    int countChar = -1;

    char tempChar[2] = { '0' };

    i = 0;
        while (countChar == -1) {
            if (strMong[0][i] == 'a' || strMong[0][i] == 'i'
                || strMong[0][i] == 'u' || strMong[0][i] == 'e'
                || strMong[0][i] == 'o') {
                countChar = i;
            }
            i++;
        }
        tempChar[0] = strMong[0][countChar];
        
        for (i = 0; i < n; i++) {
            for (j = 0; j < strlen(strMong[i]); j += 1) {
                if (strMong[i][j] == 'a' || strMong[i][j] == 'i'
                    || strMong[i][j] == 'u' || strMong[i][j] == 'e'
                    || strMong[i][j] == 'o') {
                    tempChar[1] = strMong[i][j];
                    strMong[i][j] = tempChar[0];
                    tempChar[0] = tempChar[1];
                }
            }
        }
        strMong[0][countChar] = tempChar[0];
}


void displaySecret(int strCount, int n, char strMong[n][64]) {
    i = 0;
    while (i < n && strCount) {
        printf("%s", strMong[i]);
        if (i < n - 1) {
            printf(" ");
        }
        i++;
    }
    
    i = n - 1;
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

int main(int argc, char const *argv[]) {

    /*
        Variable Declaration
     */
    int strCount, n;
    char strMong[128][64];

    /*
        Create loop for string input.
        The string input prompt end when user input "end".
     */
    strCount = -1;
    do {
        strCount += 1;
        scanf(" %s", strMong[strCount]);
        i = 0;
    } while(strcmp(strMong[strCount], "end") != 0);

    /*
        Set maximum number of string to be ten.
     */
    if (strCount > 10) {
        strCount = 10;
    }

    /*
        Prompt user to input number of words to be replaced
     */
    scanf("%d", &n);

    /*
        Call "binRequest" procedure with argument of:
        - n (integer)
        - numOfString (integer)
        - string (double dimension char array)
     */
    binRequest(n, strCount, strMong);

    /*
        When the value of n are zero, execute Hepi's special feature.
     */
    if (n == 0) {
        hepiFeature(strCount, strMong);
    }

    /*
        Call "secret" procedure to print the scrambled input.
     */
    displaySecret(n, strCount, strMong);

    return 0;
}