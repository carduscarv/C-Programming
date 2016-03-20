#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int i;
	int n, m;
	int count=0;
	int hasil=0;
	
	scanf("%d",&n);
	
	char strmong[99][18];
	char strmong2[99][18];
	char temp[99];

	for(i=0; i<n; i++){
		scanf("%s %s", &strmong, &strmong2[i]);
	}
	scanf("%d", &m);

	for(i=0; i<n; i++){
		if(strlen(strmong2[i]) == 2 && strcmp(strmong2[i], "it") == 0){
			if(count != m){
				count++;
			}
			if(count == m){
				(strcpy(temp, strmong[count]));
			}
		}
		strmong[i][count]='\0';
	}

	// for(i=0; i<count; i++){
	// 	if(i == m){
	// 		hasil=1;
	// 	}else{
	// 		i++;
	// 	}	
	// }

			printf("%s", temp);
	
		

	return 0;
}