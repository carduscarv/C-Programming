#include <stdio.h>

int getPoint(char LJK[], char source[], int n){
	int i;
	int score = 0;

	for(i=0; i<n; i++){
		if(LJK[i] != ' '){
			if(LJK[i] == source[i]){
				score = score + 2;
			}else{
				score = score - 1;
			}
		}
	}
	return score;
}

int main()
{
	int n;
	printf("Masukan jumlah jawaban: ");
	scanf("%d", &n);

	int i;
	char LJK[n];
	printf("Masukan jawaban:\n");
	for(i=0; i<n; i++){
		scanf(" %c", &LJK[i]);
	}

	int m;
	printf("Masukan jumlah kunci jawaban: ");
	scanf("%d", &m);
	char source[m];
	printf("Masukan kunci jawaban:\n");
	for(i=0; i<m; i++){
		scanf(" %c", &source[i]);
	}

	printf("%d", getPoint(LJK, source, n));
	return 0;
}