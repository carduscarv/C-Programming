//Tugas Algoritma dan Pemrograman 1 (TP1)
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

#include <stdio.h> //merupakan berkas header standar input output

	 int main(){
	 	float a1,a2,a3,a4;

	 	scanf("%f %f %f %f", &a1,&a2,&a3,&a4);

	 	if((a1>a2) && (a1>a3) && (a1>a4)){
	 		if((a2<a3) && (a2<a4)){
	 			printf("%.2f %.2f\n", a3,a4);
	 		}else if((a3<a2) && (a3<a4)){
	 			printf("%.2f %.2f\n", a2,a4);
	 		}else if((a4<a2) && (a4<a3)){
	 			printf("%.2f %.2f\n", a2,a3);
	 		}
	 	}

	 	else if((a2>a1) && (a2>a3) && (a2>a4)){
	 		if((a1<a3) && (a1<a4)){
	 			printf("%.2f %.2f\n", a3,a4);
	 		}else if((a3<a1) && (a3<a4)){
	 			printf("%.2f %.2f\n", a1,a4);
	 		}else if((a4<a1) && (a4<a3)){
	 			printf("%.2f %.2f\n", a1,a3);
	 		}
	 	}

	 	else if((a3>a1) && (a3>a2) && (a3>a4)){
	 		if((a1<a2) && (a1<a4)){
	 			printf("%.2f %.2f\n", a2,a4);
	 		}else if((a2<a1) && (a2<a4)){
	 			printf("%.2f %.2f\n", a3,a4);
	 		}else if((a4<a1) && (a4<a2)){
	 			printf("%.2f %.2f\n", a2,a3);
	 		}
	 	}

	 	else if((a4>a1) && (a4>a3) && (a4>a2)){
	 		if((a1<a2) && (a1<a3)){
	 			printf("%.2f %.2f\n", a2,a3);
	 		}else if((a2<a1) && (a2<a3)){
	 			printf("%.2f %.2f\n", a1,a3);
	 		}else if((a3<a1) && (a3<a2)){
	 			printf("%.2f %.2f\n", a2,a4);
	 		}
	 	}

	 		return 0;
	 	}