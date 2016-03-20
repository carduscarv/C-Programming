#include "header.h"

int main(){
	int n;
	scanf("%d", &n);

	int i;
	int paket1[n];
	for(i=0; i<n; i++){
		scanf("%d", &paket1[i]);
	}

	int m;
	scanf("%d", &m);

	int paket2[m];
	for(i=0; i<m; i++){
		scanf("%d", &paket2[i]);
	}

	int max1 = wutMax(n, paket1);
	int max2 = wutMax(m, paket2);

	if(max1%2 == 1 && max2%2 == 1 || max1%2 == 0 && max2%2 == 0){
		printf("valid\n");
	}else{
		printf("tidak valid\n");
	}
	return 0;
}