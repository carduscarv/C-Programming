#include <stdio.h>

int isThere(char str[][], char db[][], int m){
	int i=0;
	int status=0;
	int ret=0;
	while(i<9 && status != 1){
		if(strcmp(str[m-1], db[1]) ==0){
				ret = 1;
				return ret;
			}
		}

	return ret;
}

int main(int argc, char const *argv[])
{
	char db[9][100];
	char str[n][100];

	for(i=0; i<m; i++){
		if(isThere(str[][], db[][], m) )

	return 0;
}