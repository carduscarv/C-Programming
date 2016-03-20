//Nama 		: Fadhil Farras HN
//Kelas		: KOM-1C

#include <stdio.h>

int main () {
	int i,
		j,
		n;

	scanf("%d", &n);

	//1
	/*
		***    ***
	*/
	for (i = 0 ; i < 1 ; i++) {
		for (j = 0 ; j < n ; j++) {
			printf(" ");
		}
		
		for (j = 0 ; j < n ; j++) {
			printf("*");
		}
		
		for (j = 0 ; j < n*2-2 ; j++) {
			printf(" ");
		}
		
		for (j = 0 ; j < n ; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	//2
	/*
		***    ***
 	  *****     *** 
	 ******      ***
	*/
	for (i = 0 ; i < n-1 ; i++) {
		for (j = n-2 ; j > i ; j--) {
			printf(" ");
		}
		for (j = 0 ; j <= i+1 ; j++) {
			printf("*");
		}
		for (j = 0 ; j < n ; j++) {
			printf("*");
		}
		for (j = 0 ; j < n*2-2 ; j++) {
			printf(" ");
		}
		for (j = 0 ; j < i+1 ; j++) {
			printf(" ");
		}
		for (j = 0 ; j < n ; j++) {
			printf("*");
		}
		printf("\n");
	}

	//3
	/*
		***    ***
 	  *****     *** 
	 ******      ***
	    ***   ***
    	 *** *** 
	*/
	for (i = 0 ; i < n-1 ; i++) {
		for (j = 0 ; j < n ; j++) {
			printf(" ");
		}
		for (j = 0 ; j < i ; j++) {
			printf(" ");
		}
		for (j = 0 ; j < n ; j++) {
			printf("*");
		}
		for (j = n-2 ; j > i ; j--) {
			printf(" ");
		}
		for (j = n-1 ; j > i ; j--) {
			printf(" ");
		}
		for (j = 0 ; j < n ; j++) {
			printf("*");
		}
		printf("\n");
	}

	//4
	/*
		***    ***
 	  *****     *** 
	 ******      ***
	    ***   ***
    	 *** *** 
    	  *****
	*/
	for (i = 0 ; i < 1 ; i++) {
		for (j = 0 ; j < n*2-1 ; j++) {
			printf(" ");
		}
		for (j = 0 ; j < n*2-1 ; j++) {
			printf("*");
		}
		printf("\n");
	}

	//5
	/*
		***    ***
 	  *****     *** 
	 ******      ***
	    ***   ***
    	 *** *** 
    	  *****
        ***   ***
  	   ***     ***
	  ***       ***
	*/
	for (i = 0 ; i < n ; i++) {
		for (j = n ; j > i ; j--) {
			printf(" ");
		}
		for (j = 0 ; j < n ; j++) {
			printf("*");
		}
		for (j = 0 ; j < i ; j++) {
			printf(" ");
		}
		for (j = 0 ; j < n*2-3 ; j++) {
			printf(" ");
		}
		for (j = 0 ; j < i ; j++) {
			printf(" ");
		}
		for (j = 0 ; j < n ; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}