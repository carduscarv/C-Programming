//bikin akar kuadrat
//by MONG

#include <stdio.h>
#include <math.h>

int main (){
	int angka;
	float akar;
	int kuadrat;
	
	//Masukan angka
	printf ("masukkan angka integer:\n");
	scanf ("%d", &angka);
	akar = sqrt (angka);
	kuadrat = angka * angka;
	
	//Hasil akar
	printf ("bilangan akar %0.3f\n", akar);
	//Hasil kuadrat
	printf ("bilangan kuadrat %d\n", kuadrat);
	
	return 0;


}