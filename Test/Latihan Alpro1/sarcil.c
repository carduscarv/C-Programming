//Tugas Algoritma dan Pemrograman 1 (TP1)
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

#include <stdio.h> //merupakan berkas header standar input output

	int main(){

		//variabel integer
		int a,b,c,d,e,f;

	 	//membuat enam tanda dengan integer
	 	int t1=0, t2=0, t3=0, t4=0, t5=0, t6=0;

	 	//masukkan input
	 	scanf("%d\n", &a);
		scanf("%d\n", &b);
		scanf("%d\n", &c);
		scanf("%d\n", &d);
		scanf("%d\n", &e);
		scanf("%d\n", &f);

			//periksa bilangan
			if(a >= 10){
	 			t1 = 1;
	 		}

	 		if(a >= 10){
	 			t2 = 1;
	 		}

		 	if(a >= 10){
		 		t3 = 1;
		 	}

		 	if(a >= 10){
		 		t4 = 1;
		 	}

		 	if(a >= 10){
		 		t5 = 1;
		 	}

		 	if(a >= 10){
		 		t6 = 1;
		 	}

		 	int hasil = t1+t2+t3+t4+t5+t6==3;

		 		if((t1%t3==0 && t2%t3==0) || (t1%t4==0 && t2%t4==0) || (t1%t5==0 && t2%t5==0) || (t1%t6==0 && t2%t6==0)){
		 			printf("valid\n");
		 		}else{
		 			printf("tidak valid\n");
		 		}

		 return 0;
		 
	}