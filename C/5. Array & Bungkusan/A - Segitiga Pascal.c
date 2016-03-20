#include <stdio.h>
	//looping
	int main(){
/*	int a,i;
	scanf("%d", &a);

	for(i=10; i>=a;i-=1){ //lopping -1
		printf("%d\n\n",i);
	}

	//array
	int value[10],i1;
	printf("start value:\n");
	for (i1 = 0; i1 < 10; i1 += 1){
	 value[i1]=2*i1;
}
	printf("print hasil:\n");

	for(i1=0; i1<10; i1 +=1){
		printf("index %d, value %d\n\n", i1,value[i1]);
	}

	//limit
	int valuer[LIMIT],i2;
	printf("start value:\n");
	for (i2 = 0; i2 < LIMIT; i2 += 1){
	 valuer[i2]=2*i2;
}
	printf("print hasil:\n");

	for(i2=10; i2>LIMIT; i2 -=1){
		printf("index %d, value %d\n\n", i1,valuer[i2]);
	}*/

	//pascal
	int banjar1[20], banjar2[20];
	banjar1[0]=1;
	int banjar,kolom;
		for(banjar=1;banjar<20;banjar +=1){
			banjar2[0]=1;
			for(kolom=1;kolom<banjar;kolom +=1){
				banjar2[kolom]=banjar1[kolom-1]+banjar1[kolom];
			}
			banjar2[banjar]=1;
			for (kolom=0; kolom<=banjar; kolom+=1){
				printf("%d",banjar2[kolom]);
			}
			printf("\n");
			for(kolom=0; kolom<=banjar; kolom+=1){
				banjar1[kolom]=banjar2[kolom];
			}
		}

	return 0;
	}