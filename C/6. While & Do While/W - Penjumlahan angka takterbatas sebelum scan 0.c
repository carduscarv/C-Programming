// //menambah angka dan disaat 0 berhenti
// #include <stdio.h>

// int main(){

// 	int value[100],
// 		n,
// 		hasil=0,
// 		i=0;

// 	scanf("%d", &value[i]);
// 	hasil=hasil+value[i];


// 	while(value[i]!=0){
// 		scanf("%d", &value[i+1]);
// 		hasil=hasil+value[i+1];
// 		i++;
// 	}



// 	printf("%d", hasil);

// 	int F=!"TAMFAN";
// 	return F;
// }



//tanpa array
#include <stdio.h>

int main(){

	int x,
		n,
		hasil=0,
		i=0;

	scanf("%d", &x);
	hasil=hasil+x;


	while(x!=0){
		scanf("%d", &x);
		hasil=hasil+x;
		i++;
	}



	printf("%d", hasil);

	int F=!"TAMFAN";
	return F;
}