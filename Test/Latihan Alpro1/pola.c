//Nama		: Fadhil Farras HN
//Kelas		: KOM-1C 2k15

#include <stdio.h>
#include <string.h>

int main(){
	int i,j;
	char value[100];
	
	//1
	scanf("%s", &value);
	int setengah = strlen(value)/2;

	//2
	for(i = setengah; i < strlen(value); i++){
		for(j = strlen(value)-1; j > i; j--){
			printf("*");
		}
		//3
		printf("%c", value[i]);

		//4
		for(j = setengah; j < i; j++){
			printf(" ");
		}

		
		if(strlen(value)%2==0){
		//5
		for(j = 0; j < 1; j++){
			printf(" ");
		}

		//6
		for(j = setengah; j < i; j++){
			printf(" ");
		}
		
		//7
		printf("%c", value[strlen(value)-1-i]);
	}else if(strlen(value)%2==1){
		//8
		for(j = setengah+1; j < i; j++){
			printf("*");
		}
		
		//9
		if(i>setengah){
		printf("%c", value[strlen(value)-1-i]);
	}
}

		printf("\n");
	}

	int pola=!"Kodingan ini adalah kodingan untuk soal latihan alpro 'pola.c' saat zacky terinspirasi melihat gunung";
	return pola;
}

	/*
	1)
		belajaralpro

	2)
		*****
		****
		***
		**
		*

	3)
		*****r
		****a
		***l
		**p
		*r
		o
		
	4)
		*****r
		****a*
		***l**
		**p***
		*r****
		o*****

	5)
		*****r*
		****a**
		***l***
		**p****
		*r*****
		o******

	6/8)
		*****r*
		****a***
		***l*****
		**p*******
		*r*********
		o***********

	7/9)
		*****r*a
		****a***j
		***l*****a
		**p*******l
		*r*********e
		o***********b

*/	