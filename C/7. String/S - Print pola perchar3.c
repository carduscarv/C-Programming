#include <stdio.h>
#include <string.h>

int main(){
	char value[64];
	int i,j;

	scanf("%s", &value);


	for(i=0; i < strlen(value)/2+2; i++){
		for(j=1; j < i; j++){
			printf(" ");
		}
		printf("%c", value[i-1]);
		printf("\n");
	}


	for(i=strlen(value)/2; i > 0; i--){
		for(j=0; j < i-1; j++){
			printf(" ");
		}
		printf("%c", value[strlen(value)-i]);
		printf("\n");
	}


	return 0;
}


/*jadinya:
	a
	*l
	**p
	*r
	o
*/
