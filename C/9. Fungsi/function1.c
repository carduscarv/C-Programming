//fungsi membuat program angka genap
#include <stdio.h>


/*void main*/
int isGusu(int angka){
	if(angka % 2 == 0){
		return 1;
	}else{
		return 0;
	}
}


int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);

	int i;
	int gusu=0;
	int value[n];
	for(i=0; i<n; i++){
		scanf("%d", &value[i]);

		if(isGusu(value[i]) == 1){
			gusu++;
		}
	}

	printf("%d", gusu);

	return 0;
}