#include <stdio.h>
#include <string.h>

int main(){
	char value[64];
	int i,j;

	scanf("%s", &value);


	for(i=0; i < strlen(value); i++){
		for(j=0; j < strlen(value)-i-1; j++){
			printf(" ");
		}
		printf("%c", value[strlen(value)-i-1]);
		printf("\n");
}


	return 0;
}

/*jadinya:
	****o
	***r
	**p
	*l
	a

*/
