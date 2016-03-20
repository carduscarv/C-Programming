#include "header.h"
int main()
{
	int n;
	printf("Masukan jumlah angka:");
	scanf("%d", &n);

	int i;
	int gusu=0;
	int value[n];
	printf("Masukan angka:\n");
	for(i=0; i<n; i++){
		scanf("%d", &value[i]);

		if(isGusu(value[i]) == 1){
			gusu++;
		}
	}

	printf("Jumlah angka yang genap adalah: ");
	printf("%d", gusu);
	
	return 0;
}