#include <stdio.h>
#include <string.h>

int main(){
	int i,
		j,
		n;
	scanf("%d", &n);
	int value[n];

	for(i=0; i<n; i++){
		scanf("%d", &value[i]);
	}

	for(i=0; i<n; i++){
		value[i]=value[i]/10;
	}
	

	for(i=0; i<n; i++){
		for(j=0; j<value[i]; j++){
			printf("*");

		}
		printf("\n");
	}

	return 0;
}