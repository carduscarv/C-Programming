#include <stdio.h>
#include <string.h>

int main(){
	char strmong[99];
	int i,j;

	//proses
		scanf("%s", &strmong);

			for(i=0; i<strlen(strmong); i++){
				for(j=0; j<i; j++){
					printf(" ");
				}

					printf("%c", strmong[i]);

				printf("\n");
			}

		return 0;
	}

	/*jadinya:
	a
	*l
	**p
	***r
	****o

*/
