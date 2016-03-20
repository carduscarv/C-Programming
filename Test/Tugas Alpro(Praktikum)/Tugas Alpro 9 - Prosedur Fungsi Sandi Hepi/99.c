#include "tp9heads.h"

/**
 * @brief Execute procedure requested by BIN (as in the case requirement).
 * @details This procedure replacing the character in each string by
 * "replacable" input with "replaceby" input.
 * 
 * @param r The number of replacement will made.
 * @param n The number of string available.
 * @param s The string to be replaced.
 */
void binRequest(int r, int n, char s[n][64]) {
    char replacable, replaceby;

    index1 = 0;
    while (index1 < r && r) {
        scanf(" %c %c", &replacable, &replaceby);

        for (index2 = 0; index2 < n; index2 += 1) {
            currentLength = strlen(s[index2]);
            for (index3 = 0; index3 < currentLength; index3++) {
                if (s[index2][index3] == replacable) {
                    s[index2][index3] = replaceby;
                }
            }
        }
        index1 += 1;
    }
}

/**
 * @brief Excute Hepi's secret procedure.
 * @details This procedure move each vowel character forward.
 * 
 * @param n The number of string available.
 * @param s The string to be replaced.
 */
void hepiFeature(int n, char s[n][64]) {
    int firstVowel = -1;

    char vowelStore[2] = { '0' };

    index1 = 0;
        while (firstVowel == -1) {
            if (s[0][index1] == 'a' || s[0][index1] == 'i'
                || s[0][index1] == 'u' || s[0][index1] == 'e'
                || s[0][index1] == 'o') {
                firstVowel = index1;
            }
            index1 += 1;
        }
        vowelStore[0] = s[0][firstVowel];
        
        for (index1 = 0; index1 < n; index1 += 1) {
            currentLength = strlen(s[index1]);
            for (index2 = 0; index2 < currentLength; index2 += 1) {
                if (s[index1][index2] == 'a' || s[index1][index2] == 'i'
                    || s[index1][index2] == 'u' || s[index1][index2] == 'e'
                    || s[index1][index2] == 'o') {
                    vowelStore[1] = s[index1][index2];
                    s[index1][index2] = vowelStore[0];
                    vowelStore[0] = vowelStore[1];
                }
            }
        }
        s[0][firstVowel] = vowelStore[0];
}

/**
 * @brief Print the scrambled string.
 * @details This Procedure used for displaying scrambled string from previous
 * procedure. When the n argument are zero, print reversed words and string.
 * 
 * @param r The number of replacement will made.
 * @param n The number of string available.
 * @param s The string to be replaced.
 */
void displaySecret(int r, int n, char s[n][64]) {
    index1 = 0;
    while (index1 < n && r) {
        printf("%s", s[index1]);
        if (index1 < n - 1) {
            printf(" ");
        }
        index1 += 1;
    }
    index1 = n - 1;
    while (index1 > -1 && r == 0) {
        currentLength = strlen(s[index1]);
        for (index2 = currentLength - 1; index2 >= 0; index2 -= 1)
        {
            printf("%c", s[index1][index2]);
        }
        if (index1 > 0) {
            printf(" ");
        }
        index1 -= 1;
    }
    printf("\n");
}