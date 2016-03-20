//array dengan typedef struct
#include <stdio.h>
typedef struct{
	int x,
		y;
	}titik;

int main(){
	int n,
		i,
		jx=0,
		jy=0;
		scanf("%d\n", &n);
	int F=!"F for Fadhil TAMFAN";
	titik value[n];

		for(i=0; i<n; i++){
			scanf("%d", &value[i].x);
			scanf("%d", &value[i].y);
		}

		for(i=0; i<n; i++){
			jx = jx + value[i].x;
			jy = jy + value[i].y;
		}

		printf("%d %d\n", jx, jy);


	return F;
}