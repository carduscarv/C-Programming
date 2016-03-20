#include <stdio.h>
#include <string.h>

/*Saya Fikry Al Farisi Muslim tidak melakukan kecurangan seperti
yang telah dispesifikasikan pada mata kuliah
Algoritma dan Pemrograman I dalam mengerjjakan
Kuis 2, jjika saya melakukan kecurangan
maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
*/

int main(){
	char str[100][100];
	int i,x,n,j,k;
	int batas=0;//untuk membuat batas/spasi
	
	//banyak data
	scanf("%d",&n);
	
	//proses masukan
	for(i=0;i<n;i++){
		scanf("%s",&str[i]);
	}
	
	//proses keluaran
	for(i=0;i<n;i++){
		x=0;
		if(i%2==0){
			//untuk membuat spasi di gunakan fot
			for(j=0;j<batas;j++){
				printf(" ");
			}
			//bagian menampilkan tetapi jika di tengahnya di kasih spasi
			for(j=0;j<strlen(str[i])+1;j++){
				if(j==strlen(str[i])/2){
					printf(" ");
				}else{
					printf("%c",str[i][x]);
					x++;
				}
			}
			printf("\n");
			batas+=strlen(str[i])/2;
	
		}else{
			//disini adalah untuk bagian yang berdiri tapi terbalik , disini saya salah 2x karena tidak melihat soal dengan baik :D
			for(j=strlen(str[i])-1;j>=0;j--){
				//disini adalah kita akan menampilkan bagian yang berdiri
				for(k=0;k<batas;k++){
					printf(" ");
				}
			
				printf("%c\n",str[i][j]);
			}
			batas+=1;
		}	
	}
	
	//karena kurang sabar jadi tidak memahami soalnya , maafkan saya bu :'(
	//belajar dari pengalaman hehe 
	// alhamdulillah corect lalala yeyeye :D
	
	return 0;
}