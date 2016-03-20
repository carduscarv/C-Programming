#include "header.h"

int main(){
	int n;
	scanf("%d", &n);
	char string[n] [64];
	int i,
		j;

	for(i=0; i<n;i++){
		scanf("%s", &string[i]);
	}

	int m;
	scanf("%d", &m);
	char strings[m] [64];

	for(i=0; i<m;i++){
		scanf("%s", &strings[i]);
	}

	int k;
	scanf("%d", &k);
	int tanda1;
	int tanda2;

	int hasil_tanda1=string1(tanda1, n, string, k);
	int hasil_tanda2=string2(tanda2, m, strings, k);

	compares(hasil_tanda1, hasil_tanda2, n, string, m, strings);

	return 0;
}