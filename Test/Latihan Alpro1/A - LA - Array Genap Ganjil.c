//Nama: Fadhil Farras HN && NIM: 1501496
#include <stdio.h>
#include <string.h>

int main(){
	 int n, //variabel array 1
	 	 m;
	 int F=0;

	 int pembanding1=0, pembanding2=0;
	 	 
  		scanf("%d", &n); //batas/jumlah input
  		
int i, //variabel yang digunakan untuk looping
value[n]; //jumlah

    for(i=0; i<n; i++){
      	scanf("%d", &value[i]);
      }

      scanf("%d", &m);

int value2[m];
	
	for(i=0; i<m; i++){
		scanf("%d", &value2[i]);
	}

	if(n >= m){
		pembanding1 = n;
	}else{
		pembanding1 = m;
	}

	for(i=0; i<pembanding1; i++){
		if((value[i]%2==value2[i]%2) && (value[i] != 0 || value2[i] != 0)){
			pembanding2++;
		}
	}

	if( pembanding1 == pembanding2 ){
		printf("valid\n");
	}else{
		printf("tidak valid\n");
	}


	return F;
}