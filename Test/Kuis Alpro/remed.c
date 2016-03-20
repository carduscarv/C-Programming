#include <stdio.h>
#include <string.h>

int string1(int tanda1, int n, char string[n][64], int k){
	tanda1=0;
	int i;
	for(i=0; i<n; i++){
		if(strlen(string[i]) == k){
			tanda1++;
		}
	}
	return tanda1;
}

int string2(int tanda2, int m, char strings[m][64], int k){
	tanda2=0;
	int i;
	//proses1
	for(i=0; i<m; i++){
		if(strlen(strings[i]) == k){
			tanda2++;
		}
	}
	return tanda2;
}

void compares(int hasil_tanda1, int hasil_tanda2, int n, char string[n][64], int m, char strings[m][64]){
	int i;
	if(hasil_tanda1 == hasil_tanda2){
		for(i=0; i<n; i++){
			printf("%s\n", string[i]);
		}
	}else{
		for(i=0; i<m; i++){
			printf("%s\n", strings[i]);
		}
	}
}

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