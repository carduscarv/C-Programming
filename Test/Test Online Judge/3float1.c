//Tugas Latihan online judge float kelipatan 3
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

	/*
		diberikan 6 buah float.
		Jika ada minimal 3 float kelipatan 3. valid

		Contoh masukan:
		33.33
		99.11
		66.66
		12.99
		20.33
		12.40

		yang memenuhi syarat : 33.33 , 66.66 , 12.99

		Keluaran:
		valid
		
	*/

#include <stdio.h> //merupakan berkas header standar input output

	 int main(){

	 	//membuat enam kotak masukkan bilangan
	 	float a, b, c, d, e, f;

	 	//membuat kotak konversi bilangan akhir float ke integer
	 	int ari, bri, cri, dri, eri, fri; //ribuan
	 	int ara, bra, cra, dra, era, fra; //ratusan
	 	int a1, b1, c1, d1, e1, f1; //forward
	 	int a2, b2, c2, d2, e2, f2; //reverse

	 	//masukkan input
	 	scanf("%f\n", &a);
		scanf("%f\n", &b);
		scanf("%f\n", &c);
		scanf("%f\n", &d);
		scanf("%f\n", &e);
		scanf("%f\n", &f);

		//mengubah angka dibelakang koma menjadi integer
		
		//sudah benar
		a1 = a*100;
		b1 = b*100;
		c1 = c*100;
		d1 = d*100;
		e1 = e*100;
		f1 = f*100;
		

		//sudah benar
		ari = a1/1000;
		bri = b1/1000;
		cri = c1/1000;
		dri = d1/1000;
		eri = e1/1000;
		fri = f1/1000;

		//sudah benar
		ara = (a1-ari*1000)/100;
		bra = (b1-bri*1000)/100;
		cra = (c1-cri*1000)/100;
		dra = (d1-dri*1000)/100;
		era = (e1-eri*1000)/100;
		fra = (f1-fri*1000)/100;

		//lalu ambil koma dengan rumusan
		a2 = (a1-(ari*1000)-(ara*100)); 
		b2 = (b1-(bri*1000)-(bra*100));
		c2 = (c1-(cri*1000)-(cra*100));
		d2 = (d1-(dri*1000)-(dra*100));
		e2 = (e1-(eri*1000)-(era*100));
		f2 = (f1-(fri*1000)-(fra*100));


	 	//membuat enam tanda dengan integer
	 	int t1=0, t2=0, t3=0, t4=0, t5=0, t6=0;

	 	//periksa bilangan
	 	if((a2+1) % 3 == 0){
	 		t1 = 1;
	 	}

	 	if((b2+1) % 3 == 0){
	 		t2 = 1;
	 	}

	 	if((c2+1) % 3 == 0){
	 		t3 = 1;
	 	}

	 	if((d2+1) % 3 == 0){
	 		t4 = 1;
	 	}

	 	if((e2+1) % 3 == 0){
	 		t5 = 1;
	 	}

	 	if((f2+1) % 3 == 0){
	 		t6 = 1;
	 	}

	 		//periksa persyaratan
	 		if((t1==1 && t2==1 && t3==1) || (t4==1 && t5==1 && t6==1)){
		 			printf("valid\n");
		 		}else if((t1==1) && (t2!=1) && (t3==1) && (t4!=1) && (t5==1) && (t6!=1)){
					printf("valid\n");
		 		}else if((t1!=1) && (t2==1) && (t3!=1) && (t4==1) && (t5!=1) && (t6==1)){
					printf("valid\n");
		 		}else if((t1==1 && t2==1) && (t3==1 || t4==1 || t5==1 || t6==1)){
		 			printf("valid\n");
		 		}
		 		else if((t2==1 && t3==1) && (t1==1 || t4==1 || t5==1 || t6==1)){
		 			printf("valid\n");
		 		}else if((t3==1 && t4==1) && (t1==1 || t2==1 || t5==1 || t6==1)){
		 			printf("valid\n");
		 		}else if((t4==1 && t5==1) && (t3==1 || t1==1 || t2==1 || t6==1)){
		 			printf("valid\n");
		 		}else if((t5==1 && t6==1) && (t3==1 || t4==1 || t1==1 || t2==1)){
		 			printf("valid\n");
		 		}else{
		 			printf("tidak valid\n");
		 		}

		 		return 0;
	 }