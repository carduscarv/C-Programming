//print string ditambah spasi sebelum akhir
#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	char value[64][64];
	int i,j,k;

	for(i=0; i<n;i++){
		scanf("%s", &value[i]);
	}

	int batas = 0;
	for(i=0; i<n; i++){
		if(i%2 ==0){
			for(j=0; j<strlen(value[i]); j++){
				if(j==strlen(value[i])-1){
					printf(" ");
				}
				printf("%c", value[i] [j]);
			}
			batas = batas + strlen(value[i]-1);
		}else{
			for(j=0; j<strlen(value[i]); j++){
				for (k=strlen(value[i])-1; k>=0; k--){
					printf("%c", value[i]);
				}
			}

		}
	}

	return 0;
}