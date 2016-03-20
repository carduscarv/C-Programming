//periksa apakah string awal dan string akhir mempunyai konsonan dan vokal yang sama

/*
	input
	4
	aku
	adalah
	anak
	lea

	keluaran:
	auea
	kl
*/

#include <stdio.h>
#include <string.h>

int wutVowel(char strMong[]);
int wutConsonant(char strMong[]);
void printVowel(char strMong[]);
void printConso(char strMong[]);