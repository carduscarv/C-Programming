//menghitung banyaknya a
#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	char value[n] [64];
	int i,j, status=1;

for(i=0; i<n;i++){
	scanf("%s", &value[i]);
	}

	i = 0;
	while(i < n && status==1){
		int ada = 0;

		j=0;
		while(j<strlen(value[i]) && (ada == 0)){
			if(value[i] [j] == 'a'){
				ada = 1;
			}else{
				j++;
			}
		}
		if(ada == 0){
			status = 0;
		}else{
			i++;
		}
	}

	if(status == 0){
		printf("tidak valid\n");
	}else{
		printf("valid\n");
	}

	return 0;
}

/*
	Jadinya:
	3
	aku
	suka
	alpro

	valid

	3
	kuda
	kuku
	buku

	tidak valid
*/