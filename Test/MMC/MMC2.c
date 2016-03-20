#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int i;
	int n;
	int buka=0, tutup=0, teu=0;
	scanf("%d", &n);

	char strmong[n][18];
	
	for(i=0; i<n; i++){
		scanf("%s", strmong[i]);

	}

	for(i=0; i<n; i++){
			
			if(strcmp(strmong[i], "<div>")){
				buka++;
			}
			if(strcmp(strmong[i], "</div>")){
				tutup++;
			}
			if(strcmp(strmong[0], "</div>") != 0){
				teu=1;
			}
		
	}
		if(n%2 == 0 && buka == tutup && teu == 1){
			printf("valid\n");
		}else{
			printf("tidak valid\n");
		}

	return 0;
}