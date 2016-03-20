#include <stdio.h>
#include <string.h>

int main(){
	char strmong[99];
	int i;

	//proses
		scanf("%s", &strmong);

			for(i=0; i<strlen(strmong); i++){
				printf(" %c\n", strmong[i]);
			}

		return 0;
	}

	/*
	Jadinya:
	alpro

	 a
	 l
	 p
	 r
	 o
*/