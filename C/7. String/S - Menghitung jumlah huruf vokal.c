//menghitung ada berapa huruf vokal didalam
#include <stdio.h>
#include <string.h>

int main(){
	char strmong[99];
	int stat1=0;
	int i;

	//proses
		scanf("%s", &strmong);

			for(i=0; i<strlen(strmong); i++){
				if(strmong[i] == 'a' || strmong[i] =='i' || strmong[i]=='e' || strmong[i] =='u' || strmong[i] =='o'){
					stat1++;
				}
			}
			printf("%d", stat1);

		return 0;
	}

	/*
	Jadinya:
	asdas

	2
*/