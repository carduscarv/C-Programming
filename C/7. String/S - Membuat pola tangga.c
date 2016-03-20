#include <stdio.h>
#include <string.h>

int main(){
	int spasi=0,
		n;
	scanf("%d", &n);
	int i,
		j,
		k;
	char strmong[n][64];

	for(i=0; i<n; i++){
		scanf("%s", strmong[i]);
	}

	for(i=0; i<n; i++){
		if(i%2==0){
			for(j=0; j<spasi; j++){
				printf("-");
			}
			printf("%s\n", strmong[i]);
			spasi+=strlen(strmong[i])-1;
		}else{
			for(j=0; j<strlen(strmong[i]); j++){
				for(k=0; k<spasi; k++){
					printf("-");
				}
				printf("%c\n", strmong[i][j]);
			}
		}
	}

	return 0;
}