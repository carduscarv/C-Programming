//menghitung jumlah angka
#include <stdio.h>

int main(){

	int n,
		digit=0;
	scanf("%d", &n);
	if(n==0){
		digit=1;
	}else{
		while(n>=1){
			n=n/10;
			digit++;
		}
	}
	//2567 / 10
	//256 / 10
	//25 / 10
	//2 / 10

	printf("%d digit", digit);

	int F=!"TAMFAN";
	return F;
}