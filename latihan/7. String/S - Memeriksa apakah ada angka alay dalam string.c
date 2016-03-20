//menghitung banyak angka alay
#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	char value[n] [64];
	int i,j, total, ketemu;

for(i=0; i<n;i++){
	scanf("%s", &value[i]);
	}

	total = 0;
	for(i=0; i<n; i++){
		j=0;
		ketemu=0;
		while(j < strlen(value[i]) && ketemu==0){
			if(value[i] [j] == '1' || value[i] [j] == '2' || value[i] [j] == '3' || value[i] [j] == '4' || value[i] [j] == '5' || value[i] [j] == '6' || value[i] [j] == '7' || value[i] [j] == '8' || value[i] [j] == '9' || value[i] [j] == '0'){
				ketemu =1;
				total=total+1;
			}else{
				j=j+1;
			}
		}

	}

	printf("%d", total);
	return 0;
}