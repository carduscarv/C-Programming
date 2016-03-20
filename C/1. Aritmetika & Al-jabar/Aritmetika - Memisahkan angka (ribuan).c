//Memisahkan bilangan integer
//by MONG

#include <stdio.h>
	main (){
		int angka, Ri, Ra, P, S;
		int s, m, h;
		printf ("Masukan angka yang mau dipisah:\n");
		scanf ("%d", &angka);
		Ri= angka/1000;
		Ra= (angka-Ri*1000)/100;
		P= (angka-(Ri*1000)-(Ra*100))/10;
		S= angka-(Ri*1000)-(Ra*100)-(P*10);
		
		//Jumlah
		printf("%d",S);
		printf("%d",P);
		printf("%d",Ra);
		printf("%d",Ri);
		
		int detik=S+(P*10)+(Ra*100)+(Ri*1000);
		
		h=detik / (60*60);
		m=detik / 60;
		s=detik - (60*m);
		printf("\n%.2d  : %.2d  : %.2d ",h,m,s);
	
	return 0;
	
	
}