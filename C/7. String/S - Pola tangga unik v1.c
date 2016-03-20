#include <stdio.h>
#include <string.h>

int main(){
	int n;
	int i;
	int k;
	char array[100][100];
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%s",&array[i]);
	}
	int batas = 0;
	int j=0;
	int x;
	for(i=0;i<n;i++){
		if(i%2==0){
			for(j=0;j<batas;j++){
				printf(" ");
			}
			for(j=0;j<strlen(array[i]);j++){
				if(j==strlen(array[i])-1){
					printf(" ");
				}
				printf("%c",array[i][j]);
			}
			batas = batas + strlen(array[i])-1;
			printf("\n");
		}else{
			for(j=strlen(array[i])-1;j>=0;j--){
				//disini adalah kita akan menampilkan bagian yang berdiri
				for(k=0;k<batas;k++){
					printf(" ");
				}
				printf("%c\n",array[i][j]);
			}
			batas+=1;
		}
		
	}
	
	


	return 0;
}